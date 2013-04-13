/**************************************************************
* QAccordion Widget Library
* Copyright (C) 2012   Vladimir Belianin
*
* This library is free software
**************************************************************/
#ifndef QACCORDION_P_H
#define QACCORDION_P_H


#include <QWidget>
#include <QList>
#include "qaccordion.h"

class QVBoxLayout;

class QAccordionPrivate : public QWidget {
	Q_DECLARE_PUBLIC(QAccordion);
public:
	 void setRiseMode(QAccordion::RiseMode mode);
	 QAccordion::RiseMode riseMode(void);
	 bool isSplittersEnabled(void);
	 void setSplittersEnabled(bool flag);
	 void addItem(QAccordionItem *item);
protected:
	QAccordionPrivate();
	virtual ~QAccordionPrivate();
private:
	QAccordion *q_ptr;
	QAccordion::RiseMode m_riseMode; /* type for rising fields */
	bool m_splittersEnabled; /* flag for splitters (only FewFields mode) */
	QList<QAccordionItem *> m_itemsList; /* list of all inner items */
	QVBoxLayout *m_mainLayout;
};




#endif /* QACCORDION_P_H */ 
