#-------------------------------------------------
#
# Project created by QtCreator 2014-04-28T10:49:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Planning
CONFIG   -= console

TEMPLATE = app


SOURCES += main.cpp\
        display/window.cpp \
    datas/minimaldataset.cpp \
    beans/course.cpp \
    beans/day.cpp \
    beans/period.cpp \
    beans/planning.cpp \
    beans/promotion.cpp \
    beans/room.cpp \
    beans/teacher.cpp \
    beans/timeslot.cpp \
    beans/week.cpp \
    display/export.cpp

HEADERS  += display/window.h \
    datas/minimaldataset.h \
    beans/course.h \
    beans/day.h \
    beans/period.h \
    beans/planning.h \
    beans/promotion.h \
    beans/room.h \
    beans/teacher.h \
    beans/timeslot.h \
    beans/week.h \
    display/export.h \
    main.h

FORMS    += display/window.ui

RESOURCES += \
    Resources.qrc
