/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2013   Vladimir Belianin
*
* This library is free software
**************************************************************/

#include "qaccordion.h"
#include "qaccordion_p.h"
#include "qaccordionitem.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QDebug>
#include <QPushButton>


/**
 * @brief ctor 
 *
 * @param header - [in] QString - headerLine
 */
QAccordionItem::QAccordionItem(const QString &header):
		QFrame(NULL)
{
		m_collapseIcon.addFile(QString(":/collapse.png"),
                					QSize(ICONSIZE,ICONSIZE),QIcon::Normal);
		m_expandIcon.addFile(QString(":/expand.png"),
                					QSize(ICONSIZE,ICONSIZE),QIcon::Normal);
		createInternals();
		m_headerLine = header;
		m_headerLabel->setText(header);
		show();
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
	m_headerLabel->setText(str);	
}



/**
 * @brief get string from head of item
 *
 * @return QString
 */
QString QAccordionItem::headerLine(void) const
{
		return m_headerLabel->text();
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


/**
 * @brief create all objs and initialise them
 */
void QAccordionItem::createInternals(void)
{
	m_mainLayout  = new QVBoxLayout;
	setLayout(m_mainLayout);
	m_headerFrame = new QFrame;
	m_headerLayout = new QHBoxLayout;
	m_headerFrame->setLayout(m_headerLayout);
	setupFrames(m_headerFrame);

	m_mainLayout->addWidget(m_headerFrame);
	m_contentFrame = new QFrame;
	m_contentLayout = new QHBoxLayout;
	m_contentFrame->setLayout(m_contentLayout);
	setupFrames(m_contentFrame);

	m_mainLayout->addWidget(m_contentFrame);

	m_headerLabel = new QLabel;
	m_headerLayout->addWidget(m_headerLabel);
	/* create button */
	m_collapseButton = new QPushButton;
	m_collapseButton->setMinimumSize(QSize(ICONSIZE,ICONSIZE));
	m_collapseButton->setMaximumSize(QSize(ICONSIZE,ICONSIZE));

	m_headerLayout->addWidget(m_collapseButton);
	m_collapseButton->setIcon(m_collapseIcon);



}


/**
 * @brief set some options for QFrame
 *
 * @param fr - [in] QFrame*
 */
void QAccordionItem::setupFrames(QFrame *fr)
{
	fr->setFrameShape(QFrame::Box);
	fr->setFrameShadow(QFrame::Raised);
	fr->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Maximum);
}







