#ifndef UNIT_FUNCTION_TEST_HPP
#define UNIT_FUNCTION_TEST_HPP

#include <QMainWindow>

class FileSearchManager;

namespace Ui {
class UnitFunctionTest;
}

class UnitFunctionTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit UnitFunctionTest(QWidget *parent = 0);
    ~UnitFunctionTest();

public:
    virtual bool start();
    virtual void stop();

private:
    Ui::UnitFunctionTest *ui;
    FileSearchManager * m_fileSearchManager;
};

#endif // UNIT_FUNCTION_TEST_HPP
