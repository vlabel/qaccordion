/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/


#include "qaccordion.h"
#include "qaccordion_p.h"


QAccordion::QAccordion(QWidget * parent)
     :QWidget(parent)
     ,d_ptr(new QAccordionPrivate())
{
  Q_D(QAccordion);
  d->q_ptr = this;
}


QAccordion::QAccordion(QAccordionPrivate &dd, QWidget *parent)
		       :QWidget(parent)
			   ,d_ptr(&dd)
{ 

}




