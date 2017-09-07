#include "unit_function_test.hpp"
#include "file_search_manager.hpp"

#include <QApplication>
#include <csignal>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int result = 0;

    UnitFunctionTest * instance = new UnitFunctionTest();
    instance->show();

    if( instance->start() )
    {
        result = a.exec();
    }

    instance->stop();
    delete instance;

    return result;
}
