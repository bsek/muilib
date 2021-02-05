#include "include/Family.h"

struct MinList * Family::list() const {
    return (struct MinList *) mGetAttr(MUIA_Family_List);
}

IPTR Family::addHead(Object *obj) {
    return DoMethod(object,MUIM_Family_AddHead, (IPTR)obj);
}

IPTR Family::addTail(Object *obj) {
    return DoMethod(object,MUIM_Family_AddTail, (IPTR)obj);
}

IPTR Family::insert(Object *obj, Object *pred) {
    return DoMethod(object,MUIM_Family_Insert, (IPTR)obj, pred);
}

IPTR Family::remove(Object *obj) {
    return DoMethod(object,MUIM_Family_Remove, (IPTR)obj);
}

IPTR Family::transfer(Object *family) {
    return DoMethod(object,MUIM_Family_Transfer, (IPTR)family);
}

Family::Family()
: Notify() {

}

IPTR Family::Sort(std::initializer_list<Object> obj) {
    auto p = createTagListFromVector<Object>(obj, 1);
    p.get()[0] = MUIM_Family_Sort;

    return DoMethodA(object, (Msg) p.get());
}