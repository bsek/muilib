#include "include/Dataspace.h"
#include "include/ZuneObject.h"
#include "include/Semaphore.h"

Zune::Dataspace::Dataspace()
        : Semaphore() {
    object = MUI_NewObject(MUIC_Dataspace, TAG_END);
}

Zune::Dataspace::Dataspace(Object *obj)
        : Semaphore() {
    object = obj;
}

Zune::Dataspace &Zune::Dataspace::operator=(Object *obj) {
    object = obj;
    return *this;
}

IPTR Zune::Dataspace::add(IPTR data, LONG len, IPTR id) {
    return DoMethod(object, MUIM_Dataspace_Add, data, len, id);
}

IPTR Zune::Dataspace::clear(void) {
    return DoMethod(object, MUIM_Dataspace_Clear);
}

IPTR Zune::Dataspace::find(IPTR id) {
    return DoMethod(object, MUIM_Dataspace_Find, id);
}

IPTR Zune::Dataspace::merge(Object *dataspace) {
    return DoMethod(object, MUIM_Dataspace_Merge, (IPTR) dataspace);
}

IPTR Zune::Dataspace::readIFF(struct IFFHandle *handle) {
    return DoMethod(object, MUIM_Dataspace_ReadIFF, (IPTR) handle);
}

IPTR Zune::Dataspace::remove(IPTR id) {
    return DoMethod(object, MUIM_Dataspace_Remove, id);
}

IPTR Zune::Dataspace::writeIFF(struct IFFHandle *handle, IPTR type, IPTR id) {
    return DoMethod(object, MUIM_Dataspace_WriteIFF, (IPTR) handle, type, id);
}
