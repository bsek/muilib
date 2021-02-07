#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "ZuneObject.h"

namespace Zune {
    class Semaphore : public Zune::ZuneObject {
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
}

#endif /* SEMAPHORE_H */

