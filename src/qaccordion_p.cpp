/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/


#include "qaccordion.h"
#include "qaccordion_p.h"
#include "qaccordionitem.h"

#include <QVBoxLayout>

/**
 * @brief default ctor
 */
QAccordionPrivate::QAccordionPrivate()
{
	m_mainLayout = new QVBoxLayout;	
}


/**
 * @brief destructor
 */
QAccordionPrivate::~QAccordionPrivate()
{ 
}


/**
 * @brief set Rise Mode 
 *
 * @param mode - [in] QAccordion::RizeMode 
 */
void QAccordionPrivate::setRiseMode(QAccordion::RiseMode mode) 
{
		m_riseMode = mode;
}		

/**
 * @brief get Rise Mode 
 *
 * @return QAccordion::RizeMode 
 */
QAccordion::RiseMode QAccordionPrivate::riseMode(void)
{
	return m_riseMode;
}



/**
 * @brief get m_splittersEnabled flag
 *
 * @return bool
 */
bool QAccordionPrivate::isSplittersEnabled(void)  
{
	return m_splittersEnabled;
}

/**
 * @brief set m_splittersEnabled flag
 *
 * @param flag - [in] bool
 */
void QAccordionPrivate::setSplittersEnabled(bool flag)
{
	m_splittersEnabled = flag;
}


void QAccordionPrivate::addItem(QAccordionItem *item) 
{
	Q_Q(QAccordion);		
	q->setLayout(m_mainLayout);
	m_itemsList.push_front(item);
	m_mainLayout->addWidget(item);
}


