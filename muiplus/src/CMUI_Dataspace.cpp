#include "include/CMUI_Dataspace.h"

CMUI_Dataspace::CMUI_Dataspace()
: CMUI_Semaphore() {
    object = MUI_NewObject(MUIC_Dataspace, TAG_END);
}

CMUI_Dataspace::CMUI_Dataspace(Object* obj)
: CMUI_Semaphore() {
    object = obj;
}

CMUI_Dataspace& CMUI_Dataspace::operator=(Object* obj) {
    object = obj;
    return *this;
}

IPTR CMUI_Dataspace::add(IPTR data, LONG len, IPTR id) {
    return DoMethod(object,MUIM_Dataspace_Add, data, len, id);
}

IPTR CMUI_Dataspace::clear(void) {
    return DoMethod(object,MUIM_Dataspace_Clear);
}

IPTR CMUI_Dataspace::find(IPTR id) {
    return DoMethod(object,MUIM_Dataspace_Find, id);
}

IPTR CMUI_Dataspace::merge(Object *dataspace) {
    return DoMethod(object,MUIM_Dataspace_Merge, (IPTR)dataspace);
}

IPTR CMUI_Dataspace::readIFF(struct IFFHandle *handle) {
    return DoMethod(object,MUIM_Dataspace_ReadIFF, (IPTR)handle);
}

IPTR CMUI_Dataspace::remove(IPTR id) {
    return DoMethod(object,MUIM_Dataspace_Remove, id);
}

IPTR CMUI_Dataspace::writeIFF(struct IFFHandle *handle, IPTR type, IPTR id) {
    return DoMethod(object,MUIM_Dataspace_WriteIFF, (IPTR)handle, type, id);
}
