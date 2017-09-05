#include "unit_function_test.hpp"
#include "ui_unit_function_test_window.h"

UnitFunctionTest::UnitFunctionTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UnitFunctionTest)
{
    ui->setupUi(this);
}

UnitFunctionTest::~UnitFunctionTest()
{
    delete ui;
}
