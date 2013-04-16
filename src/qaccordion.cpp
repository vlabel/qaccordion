/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/


#include "qaccordion.h"
#include "qaccordion_p.h"


#include <QDebug>

QAccordion::QAccordion(QWidget * parent)
     :QWidget(parent)
     ,d_ptr(new QAccordionPrivate())
{
  Q_D(QAccordion);
  d->q_ptr = this;
  show();
}


QAccordion::QAccordion(QAccordionPrivate &dd, QWidget *parent)
		       :QWidget(parent)
			   ,d_ptr(&dd)
{ 
;
}


/**
 * @brief set Rise Mode 
 *
 * @param mode - [in] QAccordion::RizeMode 
 */
void QAccordion::setRiseMode(QAccordion::RiseMode mode)
{
	Q_D(QAccordion);
	d->setRiseMode(mode);
}

/**
 * @brief get Rise Mode 
 *
 * @return QAccordion::RizeMode 
 */
QAccordion::RiseMode QAccordion::riseMode(void)
{
	Q_D(QAccordion);		
	return d->riseMode();
}


/**
 * @brief get m_splittersEnabled flag
 *
 * @return bool
 */
bool QAccordion::isSplittersEnabled(void) 
{
	Q_D(QAccordion);		
	return d->isSplittersEnabled();
}

/**
 * @brief set m_splittersEnabled flag
 *
 * @param flag - [in] bool
 */
void QAccordion::setSplittersEnabled(bool flag)
{
	Q_D(QAccordion);
	d->setSplittersEnabled(flag);
}


/**
 * @brief isert Item into widget
 *
 * @param item - [in] QAccordionItem *
 */
void QAccordion::addItem(QAccordionItem *item) 
{
	Q_D(QAccordion);
	d->addItem(item);
}







