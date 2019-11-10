#-------------------------------------------------
#
# Project created by QtCreator 2019-11-05T14:39:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = comp3004
TEMPLATE = app

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
        ../../Identifier.cc \
        ../../Label.cc \
        ../../Operand.cc \
        ../../Program.cc \
        ../../compiler/CompileControl.cc \
        ../../repository/Repository.cc \
        ../../repository/RepositoryControl.cc \
        ../../statements/CompStmt.cc \
        ../../statements/DeclIntStmt.cc \
        ../../statements/EndStmt.cc \
        ../../statements/JMoreStmt.cc \
        ../../statements/JumpStmt.cc \
        ../../statements/PrintStmt.cc \
        ../../statements/ReadStmt.cc \
        ../../statements/Statement.cc \
        enterfilename.cpp \
        main.cpp \
        mainwindow.cpp \
        manageprogram.cpp \
        texteditor.cpp

HEADERS += \
        ../../headerFiles/CompStmt.h \
        ../../headerFiles/CompileControl.h \
        ../../headerFiles/DeclIntStmt.h \
        ../../headerFiles/EndStmt.h \
        ../../headerFiles/Identifier.h \
        ../../headerFiles/JMoreStmt.h \
        ../../headerFiles/JumpStmt.h \
        ../../headerFiles/Label.h \
        ../../headerFiles/Operand.h \
        ../../headerFiles/PrintStmt.h \
        ../../headerFiles/Program.h \
        ../../headerFiles/ReadStmt.h \
        ../../headerFiles/RepositoryControl.h \
        ../../headerFiles/Statement.h \
        ../../headerFiles/Variable.h \
        enterfilename.h \
        mainwindow.h \
        manageprogram.h \
        texteditor.h

FORMS += \
        enterfilename.ui \
        mainwindow.ui \
        manageprogram.ui \
        texteditor.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
