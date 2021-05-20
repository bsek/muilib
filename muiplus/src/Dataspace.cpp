#include "include/Dataspace.h"
#include "include/RootClass.h"

Zune::Dataspace::Dataspace() = default;

Zune::Dataspace::Dataspace(Object *obj) {
    object = obj;
}

IPTR Zune::Dataspace::add(IPTR data, IPTR len, IPTR id) {
    return DoMethod(object, MUIM_Dataspace_Add, data, len, id);
}

IPTR Zune::Dataspace::clear() {
    return DoMethod(object, MUIM_Dataspace_Clear);
}

IPTR Zune::Dataspace::find(IPTR id) {
    return DoMethod(object, MUIM_Dataspace_Find, id);
}

IPTR Zune::Dataspace::merge(Object *dataspace) {
    return DoMethod(object, MUIM_Dataspace_Merge, reinterpret_cast<IPTR>(dataspace));
}

IPTR Zune::Dataspace::readIFF(struct IFFHandle *handle) {
    return DoMethod(object, MUIM_Dataspace_ReadIFF, reinterpret_cast<IPTR>(handle));
}

IPTR Zune::Dataspace::remove(IPTR id) {
    return DoMethod(object, MUIM_Dataspace_Remove, id);
}

IPTR Zune::Dataspace::writeIFF(struct IFFHandle *handle, IPTR type, IPTR id) {
    return DoMethod(object, MUIM_Dataspace_WriteIFF, reinterpret_cast<IPTR>(handle), type, id);
}

void Zune::Dataspace::build() {
    RootClass::createObject(MUIC_Dataspace);
}
