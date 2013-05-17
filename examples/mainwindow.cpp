#include "mainwindow.h"

#include <QDebug>
#include <QLineEdit>
#include <QTableWidget>

/**
* @brief ctor for main window
*
* @param parent
*/
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent)
{	
	m_pCentral = new QFrame;
	setCentralWidget(m_pCentral);

	m_mainLayout = new QHBoxLayout;
	m_mainLayout->setContentsMargins(1,1,1,1);
	m_mainLayout->setSpacing(1);
	centralWidget()->setLayout(m_mainLayout);
	m_mainLayout->addWidget(&m_accordion);
	m_accordion.setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);

	QAccordionItem *item = new QAccordionItem("Item1");
	QTableWidget *table = new QTableWidget();
	QTableWidgetItem *table_item = new QTableWidgetItem("Test talbe item");
	table->setColumnCount(1);
	table->setRowCount(1);
	table->setItem(0,0,table_item);
	item->setWidget(table);

	m_accordion.addItem(item);		

	QAccordionItem *item2 = new QAccordionItem("Item2");
	QLineEdit *lineEdit = new QLineEdit();
	lineEdit->setText("Testing Text");
	item2->setWidget(lineEdit);
	m_accordion.addItem(item2);		
	createInnerAccordion();

}


MainWindow::~MainWindow()
{
}



void MainWindow::createInnerAccordion(void)
{
	QAccordion *innerAccordion = new QAccordion;
	QAccordionItem *item3 = new QAccordionItem("InnerAccordion");
	item3->setWidget(innerAccordion);
	m_accordion.addItem(item3);

	QAccordionItem *item = new QAccordionItem("InnerAccordionItem");
	QLineEdit *lineEdit = new QLineEdit();
	lineEdit->setText("Testing Text");
	item->setWidget(lineEdit);
	innerAccordion->addItem(item);		
}

