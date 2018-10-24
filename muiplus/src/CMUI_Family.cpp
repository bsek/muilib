#include "include/CMUI_Family.h"

struct MinList * CMUI_Family::list() const {
    return (struct MinList *) mGetAttr(MUIA_Family_List);
}

IPTR CMUI_Family::addHead(Object *obj) {
    return DoMethod(object,MUIM_Family_AddHead, (IPTR)obj);
}

IPTR CMUI_Family::addTail(Object *obj) {
    return DoMethod(object,MUIM_Family_AddTail, (IPTR)obj);
}

IPTR CMUI_Family::insert(Object *obj, Object *pred) {
    return DoMethod(object,MUIM_Family_Insert, (IPTR)obj, pred);
}

IPTR CMUI_Family::remove(Object *obj) {
    return DoMethod(object,MUIM_Family_Remove, (IPTR)obj);
}

IPTR CMUI_Family::transfer(Object *family) {
    return DoMethod(object,MUIM_Family_Transfer, (IPTR)family);
}

CMUI_Family::CMUI_Family()
: CMUI_Notify() {

}

IPTR CMUI_Family::Sort(std::initializer_list<Object> obj) {
    auto p = createTagListFromVector<Object>(obj, 1);
    p.get()[0] = MUIM_Family_Sort;

    return DoMethodA(object, (Msg) p.get());
}