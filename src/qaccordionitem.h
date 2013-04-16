/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2013   Vladimir Belianin
*
* This library is free software
**************************************************************/
#ifndef QACCORDIONITEM_H
#define QACCORDIONITEM_H

#include <QFrame>
#include <QIcon>

class QAccordion;
class QHBoxLayout;
class QVBoxLayout;
class QPushButton;
class QLabel;

/**
 * @brief item for qaccoridon widget
 */
class QAccordionItem : public QFrame {
	Q_OBJECT
public:
	explicit QAccordionItem(const QString &header);
	explicit QAccordionItem(const QAccordionItem& other);
	virtual  ~QAccordionItem();
	
	inline QAccordion* accordionWidget(void) const {return m_accWidget;}

	inline void setHeaderLine(const QString & str);
	inline	QString headerLine(void) const;

private :

	static const int ICONSIZE = 24; /* pixs */
	QAccordion *m_accWidget; /* parent accordion */
	QVBoxLayout *m_mainLayout; /* layout for whole item */
	QFrame *m_headerFrame; /* frame for headerline and icon */
	QHBoxLayout *m_headerLayout; /* layout for m_headerFrame */
	QFrame *m_contentFrame; /* frame for content wgt */
	QHBoxLayout *m_contentLayout; /* layout for m_contentFrame */
	QPushButton *m_collapseButton; 
	QLabel *m_headerLabel;
	QString m_headerLine;

	QIcon m_collapseIcon ; /* icon from collapse.png */
	QIcon m_expandIcon; /* icon from expand.png */

	void setAccordionWidget(QAccordion *acc);
	void createInternals(void);
	void setupFrames(QFrame *fr);

};





#endif /* QACCORDIONITEM_H */ 
