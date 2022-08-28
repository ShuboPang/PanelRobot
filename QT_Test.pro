#-------------------------------------------------
#
# Project created by QtCreator 2022-08-24T15:22:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QT_Test
TEMPLATE = app

VERSION = 1.0.0

DESTDIR = bin_$${VERSION}
OBJECTS_DIR = temp_$${VERSION}
UI_DIR = temp_$${VERSION}
MOC_DIR = temp_$${VERSION}
RCC_DIR = temp_$${VERSION}

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    BasicControls/iccombox.cpp \
    Teach/actioncommandmodel.cpp \
    Teach/waitactioncommand.cpp \
    actioncommandeditorbase.cpp \
    actionmenuview.cpp \
    bottombuttons.cpp \
        main.cpp \
        mainwindow.cpp \
    BasicControls/iclistview.cpp \
    topheaderview.cpp

HEADERS += \
    BasicControls/iccombox.h \
    Teach/actioncommandmodel.h \
    Teach/waitactioncommand.h \
    actioncommandeditorbase.h \
    actionmenuview.h \
    bottombuttons.h \
        mainwindow.h \
    BasicControls/iclistview.h \
    topheaderview.h

FORMS += \
        bottombuttons.ui \
        mainwindow.ui \
        topheaderview.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
