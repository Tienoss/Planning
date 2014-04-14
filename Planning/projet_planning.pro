TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    beans/promotion.cpp \
    beans/teacher.cpp \
    beans/room.cpp \
    beans/week.cpp \
    beans/day.cpp \
    beans/period.cpp \
    beans/timeslot.cpp \
    beans/course.cpp \
<<<<<<< HEAD
    display/export.cpp
=======
    beans/planning.cpp
>>>>>>> 375077cc72f7e35c3ab8edb8aa687709a7820da5

HEADERS += \
    main.h \
    beans/promotion.h \
    beans/teacher.h \
    beans/room.h \
    beans/week.h \
    beans/day.h \
    beans/period.h \
    beans/timeslot.h \
    beans/course.h \
<<<<<<< HEAD
    display/export.h
=======
    beans/planning.h
>>>>>>> 375077cc72f7e35c3ab8edb8aa687709a7820da5

