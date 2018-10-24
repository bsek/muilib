#include "include/CMUI_Semaphore.h"

CMUI_Semaphore::CMUI_Semaphore()
: CMUI_Object() {
}

CMUI_Semaphore::CMUI_Semaphore(Object* obj)
        : CMUI_Object() {
    object = obj;
}

CMUI_Semaphore& CMUI_Semaphore::operator=(Object* obj) {
    object = obj;
    return *this;
}

IPTR CMUI_Semaphore::Attempt() {
    return DoMethod(object,MUIM_Semaphore_Attempt);
}

IPTR CMUI_Semaphore::AttemptShared() {
    return DoMethod(object,MUIM_Semaphore_AttemptShared);
}

IPTR CMUI_Semaphore::Obtain() {
    return DoMethod(object,MUIM_Semaphore_Obtain);
}

IPTR CMUI_Semaphore::ObtainShared() {
    return DoMethod(object,MUIM_Semaphore_ObtainShared);
}

IPTR CMUI_Semaphore::Release() {
    return DoMethod(object,MUIM_Semaphore_Release);
}
