#ifndef WIDGET_H
#define WIDGET_H

#include "testqlib_global.h"
#include <QWidget>
class TESTQLIBSHARED_EXPORT TestQLib : public QWidget
{

public:
    TestQLib();
    QWidget *createWidget1();
};
extern "C" TESTQLIBSHARED_EXPORT QWidget *createWidget1();
#endif // WIDGET_H
