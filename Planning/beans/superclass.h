#ifndef SUPERCLASS_H
#define SUPERCLASS_H

#include "../main.h"

class SuperClass : public QObject
{
private:
    QSet<QObject*> listUnavailableObjects;
public:
    SuperClass();
    SuperClass* addUnavailability(QObject* object);
    bool isAvailable(QObject* object);
};

#endif // SUPERCLASS_H


