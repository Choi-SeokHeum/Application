#ifndef UNITFUNCTIONTEST_H
#define UNITFUNCTIONTEST_H

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

#endif // UNITFUNCTIONTEST_H
