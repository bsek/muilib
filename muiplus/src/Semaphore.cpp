#include "include/Semaphore.h"
#include "include/RootClass.h"

Zune::Semaphore::Semaphore() = default;

Zune::Semaphore::Semaphore(Object *obj) {
    object = obj;
}

IPTR Zune::Semaphore::attempt() {
    return DoMethod(object, MUIM_Semaphore_Attempt);
}

IPTR Zune::Semaphore::attemptShared() {
    return DoMethod(object, MUIM_Semaphore_AttemptShared);
}

IPTR Zune::Semaphore::obtain() {
    return DoMethod(object, MUIM_Semaphore_Obtain);
}

IPTR Zune::Semaphore::obtainShared() {
    return DoMethod(object, MUIM_Semaphore_ObtainShared);
}

IPTR Zune::Semaphore::release() {
    return DoMethod(object, MUIM_Semaphore_Release);
}
