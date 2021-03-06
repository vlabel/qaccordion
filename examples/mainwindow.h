#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "qaccordion.h"
#include <QHBoxLayout>



class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
public slots:
private:
	QWidget *m_pCentral;
	QAccordion m_accordion;
	QHBoxLayout *m_mainLayout;
	void createInnerAccordion(void);
};

#endif // MAINWINDOW_H
