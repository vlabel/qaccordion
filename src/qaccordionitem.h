/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/
#ifndef QACCORDIONITEM_H
#define QACCORDIONITEM_H

#include <QFrame>

class QAccordion;
class QHBoxLayout;
class QVBoxLayout;
class QLineEdit;

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

	void setAccordionWidget(QAccordion *acc);
	void createInternals(void);
	QAccordion *m_accWidget; /* parent accordion */
	QHBoxLayout *m_mainLayout; /* layout for whole item */
	QFrame *m_headerFrame; /* frame for headerline and icon */
	QVBoxLayout *m_headerLayout; /* layout for m_headerFrame */
	QFrame *m_contentFrame; /* frame for content wgt */
	QHBoxLayout *m_contentLayout; /* layout for m_contentFrame */
	QLineEdit *m_headerLE;
	QString m_headerLine;

};





#endif /* QACCORDIONITEM_H */ 
