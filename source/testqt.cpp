#include <QtTest>
#include "enumeration/stat.h"

class TestQt : public QObject
{
    Q_OBJECT

public:
    TestQt();

private Q_SLOTS:
    void testEnumerationStat();
};

TestQt::TestQt(){}

void TestQt::testEnumerationStat(){
    using namespace enumeration;

    Stat stat = Stat::HP;
    QVERIFY(stat.getName() == "Health point");
    //QCOMPARE(stat.getName(), QString("Health point"));
}

QTEST_APPLESS_MAIN(TestQt)
#include "testqt.moc"
