#include "../main.h"

Planning* Planning::best = new Planning();
Planning* Planning::test = new Planning();

// Instance
Planning::Planning(){}

int Planning::getId(){return this->id;}

int Planning::getScore(){return this->score;}
Planning* Planning::setScore(int score){this->score = score; return this;}

Planning* Planning::fromRandom(){
   Course* course;

    for(int i = 0; i < Module::list.size(); i++){
        Module* module = Module::list[i];
        while(module->getDuration() > 0)
        {
            course = new Course();
            course->setPromotion(module->getPromotion());
            course->setTeacher(module->getTeacher());
            course->setTimeslot(this->getFreeTimeSlot(course->getPromotion(),
                                                      course->getTeacher()));
            course->setRoom(this->getFreeRoom(course->getTimeslot()));
            if(this->courseIsPlannable(course)){
                this->planCourse(course);
                module->decrementDuration(course->getTimeslot()->getPeriod()->getLength());
            }else{
                cout << "Cours non planifiable" << endl;
                return NULL;
            }
        }
    }

    return(this);
}

Planning* Planning::from(Planning* planning){
    for (int ts=0; ts < TimeSlot::list.size(); ts++){
        for(int p=0; p < Promotion::list.size(); p++)
            this->courses[Promotion::list[p]][TimeSlot::list[ts]] = planning->courses[Promotion::list[p]][TimeSlot::list[ts]];

        for(int r=0; r < Room::list.size(); r++)
            this->courses[Room::list[r]][TimeSlot::list[ts]] = planning->courses[Room::list[r]][TimeSlot::list[ts]];

        for(int t=0; t < Teacher::list.size(); t++)
            this->courses[Teacher::list[t]][TimeSlot::list[ts]] = planning->courses[Teacher::list[t]][TimeSlot::list[ts]];
    }
    return(this);
}

Course* Planning::pickUpExistingCourse(){
    int nbCourses = 0 ;
    for (int ts=0; ts < TimeSlot::list.size(); ts++) {
        for(int p=0; p < Promotion::list.size(); p++) {
            if(this->courses[Promotion::list[p]][TimeSlot::list[ts]] != NULL) nbCourses++ ;
        }
    }

    int chosen = Parameters::randomInt(0,nbCourses-1) ;

    for (int ts=0; ts < TimeSlot::list.size(); ts++) {
        for(int p=0; p < Promotion::list.size(); p++) {
            if(this->courses[Promotion::list[p]][TimeSlot::list[ts]] != NULL){
                if(chosen == 0)
                    return(this->courses[Promotion::list[p]][TimeSlot::list[ts]]) ;
                chosen-- ;
            }
        }
    }

    return(NULL) ;
}

Planning* Planning::evaluate(){
    int score = 0 ;
    // Augmentation du score pour chaque cours placé ou le prof est indisponible
    for (int ts=0; ts < TimeSlot::list.size(); ts++){
        TimeSlot* timeslot = TimeSlot::list[ts] ;
        for(int t=0; t < Teacher::list.size(); t++){
            Teacher* teacher = Teacher::list[t] ;
            Course* course = this->courses[teacher][timeslot] ;
            if(course != NULL){
                if(!teacher->isAvailable(timeslot))
                    score += 10 ;
            }
        }
    }

    // Augmentation du score si il y a plus de 10h d'un même cours pour une promo dans une semaine
    QHash<Promotion*, QHash<Teacher*, QHash<Week*, int> > > times ;

    // Init
    for (int p=0; p < Promotion::list.size(); p++){
        for (int t=0; t < Teacher::list.size(); t++){
            for (int w=0; w < Week::list.size(); w++){
                times[Promotion::list[p]][Teacher::list[t]][Week::list[w]] = 0 ;
            }
        }
    }
    // Fill
    for (int p=0; p < Promotion::list.size(); p++){
        Promotion* promotion = Promotion::list[p] ;
        for (int ts=0; ts < TimeSlot::list.size(); ts++){
            TimeSlot* timeslot = TimeSlot::list[ts] ;
            Course* course = courses[promotion][timeslot] ;
            if(course != NULL)
                times[promotion][course->getTeacher()][timeslot->getWeek()] += timeslot->getPeriod()->getLength() ;
        }
    }
    // Count
    for (int p=0; p < Promotion::list.size(); p++){
        for (int t=0; t < Teacher::list.size(); t++){
            for (int w=0; w < Week::list.size(); w++){
                if(times[Promotion::list[p]][Teacher::list[t]][Week::list[w]] > 600)
                    score += 5 ;
            }
        }
    }


    this->setScore(score) ;
    return(this);
}

Planning* Planning::makeChange(){
    Course* sourceCourse = this->pickUpExistingCourse() ;

    // Algo force 1 : On déplace le cours à un autre timeslot vide
    TimeSlot* ts = this->getFreeTimeSlot(
        sourceCourse->getPromotion(),
        sourceCourse->getRoom(),
        sourceCourse->getTeacher()
    );
    //on créé un cours qu'on essai de planifier
    Course* destCourse= new Course();
    destCourse->setPromotion(sourceCourse->getPromotion())
            ->setRoom(sourceCourse->getRoom())
            ->setTeacher(sourceCourse->getTeacher())
            ->setTimeslot(ts);
    if(this->courseIsPlannable(destCourse)){
        this->planCourse(destCourse);
        this->unplanCourse(sourceCourse);
        /*cout << "Cours change :" << endl ;
        cout << "--- From : " ; sourceCourse->log() ;
        cout << "--- To   : " ; destCourse->log() ;*/
    }
    return(this);
}

Planning* Planning::initialiseHash(){
    for (int ts=0; ts < TimeSlot::list.size(); ts++){
        for(int p=0; p < Promotion::list.size(); p++)
            this->courses[Promotion::list[p]][TimeSlot::list[ts]] = NULL;

        for(int r=0; r < Room::list.size(); r++)
            this->courses[Room::list[r]][TimeSlot::list[ts]] = NULL;

        for(int t=0; t < Teacher::list.size(); t++)
            this->courses[Teacher::list[t]][TimeSlot::list[ts]] = NULL;
    }
    return(this);
}

Planning* Planning::planCourse(Course* course){
    this->courses[course->getTeacher()][course->getTimeslot()] = course;
    this->courses[course->getPromotion()][course->getTimeslot()] = course;
    this->courses[course->getRoom()][course->getTimeslot()] = course;
    return(this) ;
}

Planning* Planning::unplanCourse(Course* course){
    this->courses[course->getTeacher()][course->getTimeslot()] = NULL;
    this->courses[course->getPromotion()][course->getTimeslot()] = NULL;
    this->courses[course->getRoom()][course->getTimeslot()] = NULL;
    return(this) ;
}

Planning* Planning::log(){
    cout << "---------------------------" << endl;
    cout << "Score : " << this->getScore() << endl ;
    for (int ts=0; ts < TimeSlot::list.size(); ts++){
        for(int p=0; p < Promotion::list.size(); p++){
            Course* course = this->courses[Promotion::list[p]][TimeSlot::list[ts]];
            if(course != NULL)
                course->log();
        }
    }
    cout << "---------------------------" << endl;
    return(this) ;
}

bool Planning::courseIsPlannable(Course* course){
    if(course->getTeacher() == NULL) return false;
    if(course->getPromotion() == NULL) return false;
    if(course->getRoom() == NULL) return false;
    if(course->getTimeslot() == NULL) return false;

    if(this->courses[course->getTeacher()][course->getTimeslot()] != NULL) return false;
    if(this->courses[course->getPromotion()][course->getTimeslot()] != NULL) return false;
    if(this->courses[course->getRoom()][course->getTimeslot()] != NULL) return false;
    return true;
}

TimeSlot* Planning::getFreeTimeSlot(QObject* q1){

    for(int i = 0; i < TimeSlot::list.size(); i++){
        TimeSlot* timeslot = TimeSlot::list[i];
        if(courses[q1][timeslot] == NULL){
            return timeslot;
        }
    }
    return NULL;
}

TimeSlot* Planning::getFreeTimeSlot(QObject* q1, QObject* q2){

    for(int i = 0; i < TimeSlot::list.size(); i++){
        TimeSlot* timeslot = TimeSlot::list[i];
        if(courses[q1][timeslot] == NULL && courses[q2][timeslot] == NULL){
            return timeslot;
        }
    }
    return NULL;
}

TimeSlot* Planning::getFreeTimeSlot(QObject* q1, QObject* q2, QObject* q3){

    QList<TimeSlot*> freeTimeSlots ;

    for(int i = 0; i < TimeSlot::list.size(); i++){
        TimeSlot* timeslot = TimeSlot::list[i];
        if(courses[q1][timeslot] == NULL && courses[q2][timeslot] == NULL && courses[q3][timeslot] == NULL){
            freeTimeSlots.append(timeslot) ;
        }
    }

    if(freeTimeSlots.size() == 0){ cout << "On est dans la merde !" << endl; return(NULL) ; }

    int id = Parameters::random(0,freeTimeSlots.size()-1) ;
    TimeSlot* ts = freeTimeSlots.at(id) ;
    return(ts) ;
}

Room* Planning::getFreeRoom(TimeSlot* timeslot){

    for(int i = 0; i < Room::list.size(); i++){
        Room* room = Room::list[i];
        if(courses[room][timeslot] == NULL){
            return room;
        }
    }
    return NULL;
}

string Planning::jsonListOfCourses(){
    stringstream ret  ;
    ret << "[" ;
    int i = 0 ;
    for (int ts=0; ts < TimeSlot::list.size(); ts++) {
        for(int p=0; p < Promotion::list.size(); p++) {
            Course* course = this->courses[Promotion::list[p]][TimeSlot::list[ts]] ;
            if(course != NULL){
                ret << ((i>0)?",":"") << course->toJson() ;
                i++ ;
            }
        }
    }
    ret << "]" ;
    return(ret.str()) ;
}
