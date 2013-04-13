#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "qaccordion.h"
#include <QHBoxLayout>


class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
public slots:
private:
	QAccordion m_accordion;
	QHBoxLayout *m_mainLayout;
};

#endif // MAINWINDOW_H
