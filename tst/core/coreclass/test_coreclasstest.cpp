#include <QString>
#include <QtTest>
#include "../../../src/core/coreclass.h"

class Test_coreclassTest : public QObject
{
    Q_OBJECT

public:
    Test_coreclassTest();

private Q_SLOTS:
    void test_versionMajor();
    void test_fail();
};

Test_coreclassTest::Test_coreclassTest()
{
}

void Test_coreclassTest::test_versionMajor()
{
    CoreClass cc;
    QCOMPARE(cc.versionMajor(), 1883);
}

void Test_coreclassTest::test_fail()
{
    CoreClass cc;
    QCOMPARE(cc.versionMajor(), 13);
}

QTEST_APPLESS_MAIN(Test_coreclassTest)

#include "test_coreclasstest.moc"
