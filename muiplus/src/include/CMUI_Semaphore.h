#ifndef CMUI_SEMAPHORE_H
#define CMUI_SEMAPHORE_H

#include "CMUI_Object.h"

class CMUI_Semaphore : public CMUI_Object {
protected:
    CMUI_Semaphore();

public:
    CMUI_Semaphore(Object * obj);
    CMUI_Semaphore & operator=(Object * obj);

    IPTR Attempt();
    IPTR AttemptShared();
    IPTR Obtain();
    IPTR ObtainShared();
    IPTR Release();
};

#endif /* CMUI_SEMAPHORE_H */

