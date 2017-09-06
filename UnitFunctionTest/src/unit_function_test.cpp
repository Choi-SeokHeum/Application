#include "unit_function_test.hpp"
#include "ui_unit_function_test_window.h"

#include <QDebug>

UnitFunctionTest::UnitFunctionTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UnitFunctionTest)
{
    ui->setupUi(this);

    qDebug() << "Succeed to creat UnitFunctionTest Instance";
}

UnitFunctionTest::~UnitFunctionTest()
{
    delete ui;

    qDebug() << "Delete UnitFunctionTest Constructor";
}
