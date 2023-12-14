#include "mainwindow.h"

int main(int argc, char *argv[])  // Just to open MainWindow GUI, where everything works.
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
