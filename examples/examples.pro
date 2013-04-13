################################################################
# QAccordion Widget Library
# Copyright (C) 2012   Vladimir Belianin
#
# This library is free software
################################################################
include(../common.pri)
TEMPLATE = app 

QT += core 

TARGET = qaccordion 

DESTDIR = $$INSTALL_PATH_BIN

INCLUDEPATH += $$INSTALL_PATH_INCLUDE
LIBS += -L$${INSTALL_PATH_LIB} \
		-lqaccordion

# Input
HEADERS += mainwindow.h 
SOURCES += mainwindow.cpp  \
		   example.cpp	
