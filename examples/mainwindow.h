#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "qaccordion.h"



class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
public slots:
private:
	QAccordion m_accordion;
};

#endif // MAINWINDOW_H
