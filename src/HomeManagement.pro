#-------------------------------------------------
#
# Project created by QtCreator 2015-06-29T17:21:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HomeManagement
TEMPLATE = app

CONFIG += c++11

INCLUDEPATH += \
    view \
    controller \
    model \
    model/object \
    model/option \

SOURCES += main.cpp\
        view/mainview.cpp \
    controller/maincontroller.cpp \
    model/mainmodel.cpp \
    model/object/object.cpp \
    model/option/ioption.cpp \
    model/option/optioncost.cpp \
    model/category/category.cpp \
    model/option/optionname.cpp \
    model/option/optionfactory.cpp

HEADERS  += view/mainview.hpp \
    controller/maincontroller.hpp \
    model/mainmodel.hpp \
    model/object/object.hpp \
    model/option/ioption.hpp \
    model/option/optioncost.hpp \
    model/category/category.hpp \
    model/option/optionname.hpp \
    model/option/optionfactory.hpp

FORMS    += view/mainview.ui
