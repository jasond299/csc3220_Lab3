#include "lab3window.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Lab3Window w;
    w.show();
    return a.exec();
}
