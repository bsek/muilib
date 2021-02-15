#include "include/Semaphore.h"
#include "include/RootClass.h"

Zune::Semaphore::Semaphore()
        : Zune::RootClass() {
}

Zune::Semaphore::Semaphore(Object *obj)
        : Zune::RootClass() {
    object = obj;
}

Zune::Semaphore &Zune::Semaphore::operator=(Object *obj) {
    object = obj;
    return *this;
}

IPTR Zune::Semaphore::Attempt() {
    return DoMethod(object, MUIM_Semaphore_Attempt);
}

IPTR Zune::Semaphore::AttemptShared() {
    return DoMethod(object, MUIM_Semaphore_AttemptShared);
}

IPTR Zune::Semaphore::Obtain() {
    return DoMethod(object, MUIM_Semaphore_Obtain);
}

IPTR Zune::Semaphore::ObtainShared() {
    return DoMethod(object, MUIM_Semaphore_ObtainShared);
}

IPTR Zune::Semaphore::Release() {
    return DoMethod(object, MUIM_Semaphore_Release);
}
