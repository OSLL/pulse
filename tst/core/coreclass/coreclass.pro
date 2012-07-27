#-------------------------------------------------
#
# Project created by QtCreator 2012-07-28T01:23:01
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = test_coreclasstest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += test_coreclasstest.cpp \
    ../../../src/core/coreclass.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../../../src/core/coreclass.h
