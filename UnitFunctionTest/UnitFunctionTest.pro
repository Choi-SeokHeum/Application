#-------------------------------------------------
#
# Project created by QtCreator 2017-09-05T18:10:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UnitFunctionTest
TEMPLATE = app

INCLUDEPATH += \
    $$PWD/src \
    $$PWD/src/file_search_manager \

SOURCES += \
    main.cpp \

FORMS    += unit_function_test_window.ui

include(src/src.pri)
