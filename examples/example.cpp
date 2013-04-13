
#include <QtGui/QApplication>
#include "mainwindow.h"




int main(int argc, char **argv)
{
        QApplication app(argc,argv);
        MainWindow w;
        app.installEventFilter(&w);
        w.show();
        return app.exec();
}
