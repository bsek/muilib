#include "include/Virtgroup.h"

Virtgroup::Virtgroup()
: Group() {
}

Virtgroup::Virtgroup(Object* obj)
: Group(obj) {
}

Virtgroup& Virtgroup::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG Virtgroup::height() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Height);
}

LONG Virtgroup::left() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Left);
}

void Virtgroup::setLeft(LONG value) {
    setAttr(MUIA_Virtgroup_Left, (IPTR) value);
}

LONG Virtgroup::top() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Top);
}

void Virtgroup::setTop(LONG value) {
    setAttr(MUIA_Virtgroup_Top, (IPTR) value);
}

LONG Virtgroup::width() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Width);
}

Class *Virtgroup::registerClass() {
    return Area::registerClassWithId((ClassID) MUIC_Virtgroup);
}
