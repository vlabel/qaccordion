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
public:
	 void setRiseMode(QAccordion::RiseMode mode);
	 QAccordion::RiseMode riseMode(void);
protected:
	QAccordionPrivate();
	virtual ~QAccordionPrivate();
private:
	QAccordion *q_ptr;
	QAccordion::RiseMode m_riseMode; /* type for rising fields */
};




#endif /* QACCORDION_P_H */ 
