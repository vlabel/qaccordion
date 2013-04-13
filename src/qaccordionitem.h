/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/
#ifndef QACCORDIONITEM_H
#define QACCORDIONITEM_H


#include <QWidget>

//class QAccordionPrivate;
class QAccordion;


class QAccordionItem : public QObject {
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
	QAccordion *m_accWidget;
	QString m_headerLine;

}




#endif /* QACCORDIONITEM_H */ 
