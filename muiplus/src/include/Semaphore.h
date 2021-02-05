#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "Object.h"

class Semaphore : public Object {
protected:
    Semaphore();

public:
    Semaphore(Object * obj);
    Semaphore & operator=(Object * obj);

    IPTR Attempt();
    IPTR AttemptShared();
    IPTR Obtain();
    IPTR ObtainShared();
    IPTR Release();
};

#endif /* SEMAPHORE_H */

