#include "unitfunctiontest.h"
#include "ui_unitfunctiontest.h"

UnitFunctionTest::UnitFunctionTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UnitFunctionTest)
{
    ui->setupUi(this);//zz
}

UnitFunctionTest::~UnitFunctionTest()
{
    delete ui;
}
