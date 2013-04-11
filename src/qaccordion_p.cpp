/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/


#include "qaccordion.h"
#include "qaccordion_p.h"


/**
 * @brief default ctor
 */
QAccordionPrivate::QAccordionPrivate()
{
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


