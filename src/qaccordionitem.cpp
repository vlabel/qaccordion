/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/


#include "qaccordion.h"
#include "qaccordion_p.h"


/**
 * @brief ctor 
 *
 * @param header - [in] QString - headerLine
 */
QAccordionItem::QAccordionItem(const QString &header)
{
		m_headerLine = header;
}


/**
 * @brief cop ctor
 *
 * @param other - [in] QAccordionItem
 */
QAccordionItem::QAccordionItem(const QAccordionItem &other)
		:QObject(NULL)
{ 
	Q_UNUSED(other);
}

QAccordionItem::~QAccordionItem()
{

}


/**
 * @brief set String in head of item 
 *
 * @param str - [in] QString 
 */
void QAccordionItem::setHeaderLine(const QString &str)
{
	m_headerLine = str;
}



/**
 * @brief get string from head of item
 *
 * @return QString
 */
QString QAccordionItem::headerLine(void) const
{
		return m_headerLine;
}




/**
 * @brief set parent for item
 *
 * @param wgt - [in] QAccordion*
 */
void QAccordionItem::setAccordionWidget(QAccordion *wgt)
{
	m_accWidget = wgt;
}












