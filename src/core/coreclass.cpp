#include "coreclass.h"

CoreClass::CoreClass(QObject *parent) :
    QObject(parent)
{
}

int CoreClass::versionMajor() const
{
    return 13;
}
