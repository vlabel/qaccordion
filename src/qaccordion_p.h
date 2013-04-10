/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/
#ifndef QACCORDION_P_H
#define QACCORDION_P_H


#include <QWidget>

#include "qaccordion.h"


class QAccordionPrivate : public QWidget {
	Q_DECLARE_PUBLIC(QAccordion);
protected:
	QAccordionPrivate();
	virtual ~QAccordionPrivate();
private:
	QAccordion *q_ptr;
	int i;
};




#endif /* QACCORDION_P_H */ 
