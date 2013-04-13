/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/

#include "qaccordion.h"
#include "qaccordion_p.h"
#include "qaccordionitem.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>


/**
 * @brief ctor 
 *
 * @param header - [in] QString - headerLine
 */
QAccordionItem::QAccordionItem(const QString &header)
{
		createInternals();
		m_headerLine = header;
}


/**
 * @brief cop ctor
 *
 * @param other - [in] QAccordionItem
 */
QAccordionItem::QAccordionItem(const QAccordionItem &other)
		:QFrame(NULL)
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
	m_headerLE->setText(str);	
}



/**
 * @brief get string from head of item
 *
 * @return QString
 */
QString QAccordionItem::headerLine(void) const
{
		return m_headerLE->text();
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


void QAccordionItem::createInternals(void)
{
	m_mainLayout  = new QHBoxLayout;
	setLayout(m_mainLayout);
	m_headerFrame = new QFrame;
	m_headerLayout = new QVBoxLayout;
	m_headerFrame->setLayout(m_headerLayout);
	m_mainLayout->addWidget(m_headerFrame);
	m_contentFrame = new QFrame;
	m_contentLayout = new QHBoxLayout;
	m_contentFrame->setLayout(m_contentLayout);
	m_mainLayout->addWidget(m_contentFrame);

	m_headerLE = new QLineEdit;
	m_contentLayout->addWidget(m_headerLE);

}









