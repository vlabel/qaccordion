################################################################
# QAccordion Widget Library
# Copyright (C) 2012   Vladimir Belianin
#
# This library is free software
################################################################
include(../common.pri)
TEMPLATE = lib

QT += core 

CONFIG += dll

TARGET = qaccordion 

DESTDIR = $$INSTALL_PATH_LIB

INCLUDEPATH += $$INSTALL_PATH_INCLUDE


# Input
HEADERS += qaccordion.h \
		   qaccordion_p.h 
SOURCES += qaccordion.cpp  \
		   qaccordion_p.cpp \
		   qaccordionitem.cpp
