#include "unit_function_test.hpp"
#include "ui_unit_function_test_window.h"
#include "file_search_manager.hpp"

#include <QDebug>

UnitFunctionTest::UnitFunctionTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UnitFunctionTest),
    m_fileSearchManager(new FileSearchManager)
{
    ui->setupUi(this);

    qDebug() << "Succeed to creat UnitFunctionTest Instance";
}

UnitFunctionTest::~UnitFunctionTest()
{
    delete ui;
    delete m_fileSearchManager;

    qDebug() << "Delete UnitFunctionTest Object";
}

bool UnitFunctionTest::start()
{
    if( !m_fileSearchManager->init() )
    {
        return false;
    }

    return true;
}

void UnitFunctionTest::stop()
{

}
