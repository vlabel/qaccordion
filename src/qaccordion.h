/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/
#ifndef QACCORDION_H
#define QACCORDION_H


#include <QWidget>

class QAccordionPrivate;
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

};


class QAccordion : public QWidget {
	Q_OBJECT;		
public:
   	enum RiseMode { OneField ,FewFields };

	explicit QAccordion(QWidget *parent);
	void setRiseMode(QAccordion::RiseMode);
	bool isSplittersEnabled(void);
	void setSplittersEnabled(bool flag);
	QAccordion::RiseMode riseMode(void);
protected:
	QAccordionPrivate * const d_ptr;
	QAccordion(QAccordionPrivate &d,QWidget *parent);

private:
	Q_DECLARE_PRIVATE(QAccordion);

};




#endif /* QACCORDION_H */ 
