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
    display/export.cpp \
    datas/minimaldataset.cpp
    beans/planning.cpp

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
    display/export.h \
    datas/minimaldataset.h
    beans/planning.h

