#include "mainwindow.h"
#include "stadium.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Stadium s;
    s.read_files();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
