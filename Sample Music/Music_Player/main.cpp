#include "mainwindow.h"

#include <QApplication>
#include <QtMultimedia>
#include <QtCore>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
