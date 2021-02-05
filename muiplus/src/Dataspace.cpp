#include "include/Dataspace.h"

Dataspace::Dataspace()
: Semaphore() {
    object = MUI_NewObject(MUIC_Dataspace, TAG_END);
}

Dataspace::Dataspace(Object* obj)
: Semaphore() {
    object = obj;
}

Dataspace& Dataspace::operator=(Object* obj) {
    object = obj;
    return *this;
}

IPTR Dataspace::add(IPTR data, LONG len, IPTR id) {
    return DoMethod(object,MUIM_Dataspace_Add, data, len, id);
}

IPTR Dataspace::clear(void) {
    return DoMethod(object,MUIM_Dataspace_Clear);
}

IPTR Dataspace::find(IPTR id) {
    return DoMethod(object,MUIM_Dataspace_Find, id);
}

IPTR Dataspace::merge(Object *dataspace) {
    return DoMethod(object,MUIM_Dataspace_Merge, (IPTR)dataspace);
}

IPTR Dataspace::readIFF(struct IFFHandle *handle) {
    return DoMethod(object,MUIM_Dataspace_ReadIFF, (IPTR)handle);
}

IPTR Dataspace::remove(IPTR id) {
    return DoMethod(object,MUIM_Dataspace_Remove, id);
}

IPTR Dataspace::writeIFF(struct IFFHandle *handle, IPTR type, IPTR id) {
    return DoMethod(object,MUIM_Dataspace_WriteIFF, (IPTR)handle, type, id);
}
