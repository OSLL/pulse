#ifndef CORECLASS_H
#define CORECLASS_H

#include <QObject>

class CoreClass : public QObject
{
    Q_OBJECT
public:
    explicit CoreClass(QObject *parent = 0);

    int versionMajor() const;

signals:

public slots:

};

#endif // CORECLASS_H
