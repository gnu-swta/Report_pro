#-------------------------------------------------
#
# Project created by QtCreator 2015-11-18T11:19:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TA
TEMPLATE = app


SOURCES += main.cpp\
    report_manager.cpp \
    widget.cpp \
    report_create.cpp \
    submit_manager.cpp \
    report_form.cpp \
    submit_form.cpp

HEADERS  += widget.h \
    report_manager.h \
    report_create.h \
    submit_manager.h \
    report_form.h \
    submit_form.h \
    classinfo.h

FORMS    += widget.ui \
    report_manager.ui \
    report_create.ui \
    submit_manager.ui \
    report_form.ui \
    submit_form.ui
