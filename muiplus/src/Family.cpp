#include "include/Family.h"
#include "include/RootClass.h"

struct MinList *Zune::Family::list() const {
    return reinterpret_cast<struct MinList*>(mGetAttr(MUIA_Family_List));
}

IPTR Zune::Family::addHead(Object *obj) {
    return DoMethod(object, MUIM_Family_AddHead, reinterpret_cast<IPTR>(obj));
}

IPTR Zune::Family::addTail(Object *obj) {
    return DoMethod(object, MUIM_Family_AddTail, reinterpret_cast<IPTR>(obj));
}

IPTR Zune::Family::insert(Object *obj, Object *pred) {
    return DoMethod(object, MUIM_Family_Insert, reinterpret_cast<IPTR>(obj), reinterpret_cast<IPTR>(pred));
}

IPTR Zune::Family::remove(Object *obj) {
    return DoMethod(object, MUIM_Family_Remove, reinterpret_cast<IPTR>(obj));
}

IPTR Zune::Family::transfer(Object *family) {
    return DoMethod(object, MUIM_Family_Transfer, reinterpret_cast<IPTR>(family));
}

Zune::Family::Family() = default;

IPTR Zune::Family::Sort(std::initializer_list<Object> objects) {
    IPTR msg[objects.size() + 1];
    msg[0] = MUIM_Family_Sort;

    WORD i = 1;
    for (Object obj : objects) {
        msg[i++] = obj;
    }

    return DoMethodA(object, reinterpret_cast<Msg>(msg));
}

LONG Zune::Family::childCount() const {
    return static_cast<LONG>(mGetAttr(MUIA_Family_ChildCount));
}

Zune::Family::Family(Object *obj) {
    object = obj;
}

void Zune::Family::build() {
    RootClass::createObject(MUIC_Family);
}

void Zune::Family::setChild(Object *obj) {
    configmap[MUIA_Family_Child] = reinterpret_cast<IPTR>(obj);
}
