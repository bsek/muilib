#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "RootClass.h"

namespace Zune {
    class Semaphore : public Zune::RootClass {
    public:
        Semaphore();

        Semaphore(Object *obj);


        IPTR attempt();

        IPTR attemptShared();

        IPTR obtain();

        IPTR obtainShared();

        IPTR release();
    };
}

#endif /* SEMAPHORE_H */

