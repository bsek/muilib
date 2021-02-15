#include "include/Virtgroup.h"
#include "include/Group.h"
#include "include/RootClass.h"

LONG Zune::Virtgroup::height() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Height);
}

LONG Zune::Virtgroup::left() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Left);
}

void Zune::Virtgroup::setLeft(LONG value) {
    setAttr(MUIA_Virtgroup_Left, (IPTR) value);
}

LONG Zune::Virtgroup::top() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Top);
}

void Zune::Virtgroup::setTop(LONG value) {
    setAttr(MUIA_Virtgroup_Top, (IPTR) value);
}

LONG Zune::Virtgroup::width() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Width);
}

Class *Zune::Virtgroup::registerClass() {
    return Area::registerClassWithId((ClassID) MUIC_Virtgroup);
}

Zune::Virtgroup::Virtgroup() {}
