#include "include/Semaphore.h"

Semaphore::Semaphore()
: Object() {
}

Semaphore::Semaphore(Object* obj)
        : Object() {
    object = obj;
}

Semaphore& Semaphore::operator=(Object* obj) {
    object = obj;
    return *this;
}

IPTR Semaphore::Attempt() {
    return DoMethod(object,MUIM_Semaphore_Attempt);
}

IPTR Semaphore::AttemptShared() {
    return DoMethod(object,MUIM_Semaphore_AttemptShared);
}

IPTR Semaphore::Obtain() {
    return DoMethod(object,MUIM_Semaphore_Obtain);
}

IPTR Semaphore::ObtainShared() {
    return DoMethod(object,MUIM_Semaphore_ObtainShared);
}

IPTR Semaphore::Release() {
    return DoMethod(object,MUIM_Semaphore_Release);
}
