#include "testqt.h"

void TestQt::testEnumerationStat(){
    using namespace enumeration;

    Stat stat = Stat.HP;
    QVERIFY(stat.getName() == "Health point");
    //QCOMPARE(stat.getName(), QString("Health point"));
}

QTEST_MAIN(TestQt)
#include "testqt.moc"
