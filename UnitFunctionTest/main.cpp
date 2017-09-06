#include "unit_function_test.hpp"
#include "file_search_manager.hpp"

#include <QApplication>
#include <csignal>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    UnitFunctionTest * instance = new UnitFunctionTest();
    instance->show();

    return a.exec();
}
