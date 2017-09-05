#ifndef UNIT_FUNCTION_TEST_HPP
#define UNIT_FUNCTION_TEST_HPP

#include <QMainWindow>

namespace Ui {
class UnitFunctionTest;
}

class UnitFunctionTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit UnitFunctionTest(QWidget *parent = 0);
    ~UnitFunctionTest();

private:
    Ui::UnitFunctionTest *ui;
};

#endif // UNIT_FUNCTION_TEST_HPP
