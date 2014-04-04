#ifndef PLANNING_H
#define PLANNING_H

class Planning
{
public:
    Planning();

    //Variables globales
    static vector<Planning*> list;

    //Methodes

    int getId() const;
    void setId(int value);

    int getScore() const;
    void setScore(int value);

private:
    int id;
    int score;
};

#endif // PLANNING_H
