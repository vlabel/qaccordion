/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/
#ifndef QACCORDION_H
#define QACCORDION_H


#include <QWidget>
#include "qaccordionitem.h"



class QAccordionPrivate;
class QAccordion;


class QAccordion : public QWidget {
	Q_OBJECT;		
public:
   	enum RiseMode { OneField ,FewFields };

	explicit QAccordion(QWidget *parent = NULL);
	void setRiseMode(QAccordion::RiseMode);
	bool isSplittersEnabled(void);
	void setSplittersEnabled(bool flag);
	QAccordion::RiseMode riseMode(void);
	void addItem(QAccordionItem *item);
protected:
	QAccordionPrivate * const d_ptr;
	QAccordion(QAccordionPrivate &d,QWidget *parent);

private:
	Q_DECLARE_PRIVATE(QAccordion);

};




#endif /* QACCORDION_H */ 
