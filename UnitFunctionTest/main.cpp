#include "unit_function_test.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UnitFunctionTest w;
    w.show();

    return a.exec();
}
