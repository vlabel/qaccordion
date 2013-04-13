#include "mainwindow.h"
 
/**
* @brief ctor for main window
*
* @param parent
*/
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent)
{
	m_mainLayout = new QHBoxLayout;
	centralWidget()->setLayout(m_mainLayout);
	m_mainLayout->addWidget(&m_accordion);
}



