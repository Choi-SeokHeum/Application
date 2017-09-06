#include "unitfunctiontest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UnitFunctionTest w;
    w.show();

    return a.exec();
}
