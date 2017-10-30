#ifndef TESTQT_H
#define TESTQT_H

#include <QtTest/QtTest>

#include "enumeration/stat.h"

class TestQt : public QObject
{
    Q_OBJECT
private slots:
    void testEnumerationStat();
};

#endif // TESTQT_H
