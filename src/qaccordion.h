/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/
#ifndef QACCORDION_H
#define QACCORDION_H


#include <QWidget>

class QAccordionPrivate;


class QAccordion : public QWidget {
	Q_OBJECT;		
public:
   	enum RiseMode { OneField ,FewFields };

	explicit QAccordion(QWidget *parent);
	void setRiseMode(QAccordion::RiseMode);
	QAccordion::RiseMode riseMode(void);
protected:
	QAccordionPrivate * const d_ptr;
	QAccordion(QAccordionPrivate &d,QWidget *parent);

private:
	Q_DECLARE_PRIVATE(QAccordion);

};




#endif /* QACCORDION_H */ 
