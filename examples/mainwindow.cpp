#include "mainwindow.h"

#include <QDebug>
#include <QLineEdit>

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
	centralWidget()->setLayout(m_mainLayout);
	m_mainLayout->addWidget(&m_accordion);
	m_accordion.setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);

	QAccordionItem *item = new QAccordionItem("Item1");
	m_accordion.addItem(item);		

}



