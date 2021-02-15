#include "include/Family.h"
#include "include/Notify.h"
#include "include/RootClass.h"

struct MinList *Zune::Family::list() const {
    return (struct MinList *) mGetAttr(MUIA_Family_List);
}

IPTR Zune::Family::addHead(Object *obj) {
    return DoMethod(object, MUIM_Family_AddHead, (IPTR) obj);
}

IPTR Zune::Family::addTail(Object *obj) {
    return DoMethod(object, MUIM_Family_AddTail, (IPTR) obj);
}

IPTR Zune::Family::insert(Object *obj, Object *pred) {
    return DoMethod(object, MUIM_Family_Insert, (IPTR) obj, pred);
}

IPTR Zune::Family::remove(Object *obj) {
    return DoMethod(object, MUIM_Family_Remove, (IPTR) obj);
}

IPTR Zune::Family::transfer(Object *family) {
    return DoMethod(object, MUIM_Family_Transfer, (IPTR) family);
}

Zune::Family::Family()
        : Notify() {

}

IPTR Zune::Family::Sort(std::initializer_list<Object> obj) {
    auto p = createTagListFromVector<Object>(obj, 1);
    p.get()[0] = MUIM_Family_Sort;

    return DoMethodA(object, (Msg) p.get());
}