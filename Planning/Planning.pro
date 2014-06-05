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
    display/export.cpp \
    intelligence/parameters.cpp \
    intelligence/intelligence.cpp \
    beans/module.cpp \
    datas/mediumdataset1.cpp \
    datas/mediumdataset2.cpp \
    beans/superclass.cpp \
    datas/fulldataset.cpp \
    datas/mediumdataset.cpp

HEADERS  +=  datas/minimaldataset.h \
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
    main.h \
    intelligence/parameters.h \
    intelligence/intelligence.h \
    beans/module.h \
    datas/mediumdataset1.h \
    datas/mediumdataset2.h \
    beans/superclass.h \
    datas/fulldataset.h \
    datas/mediumdataset.h
RESOURCES += \
    Resources.qrc
