#-------------------------------------------------
#
# Project created by QtCreator 2015-06-29T17:21:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HomeManagement
TEMPLATE = app

INCLUDEPATH += \
    view \
    controller \
    model

SOURCES += main.cpp\
        view/mainview.cpp \
    controller/maincontroller.cpp \
    model/mainmodel.cpp \
    model/object/object.cpp

HEADERS  += view/mainview.hpp \
    controller/maincontroller.hpp \
    model/mainmodel.hpp \
    model/object/object.hpp

FORMS    += view/mainview.ui
