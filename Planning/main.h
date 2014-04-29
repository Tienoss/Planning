#ifndef MAIN_H
#define MAIN_H


#include <iostream>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>

#include <QApplication>
#include <QList>
#include <QTextEdit>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDir>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QMainWindow>

using namespace std;

class Course;
class Promotion;
class Room;
class Teacher;
class Day;
class Period;
class Week;
class TimeSlot;

#include "beans/course.h"
#include "beans/promotion.h"
#include "beans/room.h"
#include "beans/teacher.h"
#include "beans/day.h"
#include "beans/period.h"
#include "beans/week.h"
#include "beans/timeslot.h"
#include "beans/course.h"
#include "beans/planning.h"
#include "beans/module.h"
#include "intelligence/intelligence.h"
#include "intelligence/parameters.h"

#include "display/export.h"
#include "display/window.h"

#include "datas/minimaldataset.h"

#endif // MAIN_H
