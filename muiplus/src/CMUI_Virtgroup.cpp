#include "include/CMUI_Virtgroup.h"

CMUI_Virtgroup::CMUI_Virtgroup()
: CMUI_Group() {
}

CMUI_Virtgroup::CMUI_Virtgroup(Object* obj)
: CMUI_Group(obj) {
}

CMUI_Virtgroup& CMUI_Virtgroup::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG CMUI_Virtgroup::height() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Height);
}

LONG CMUI_Virtgroup::left() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Left);
}

void CMUI_Virtgroup::setLeft(LONG value) {
    setAttr(MUIA_Virtgroup_Left, (IPTR) value);
}

LONG CMUI_Virtgroup::top() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Top);
}

void CMUI_Virtgroup::setTop(LONG value) {
    setAttr(MUIA_Virtgroup_Top, (IPTR) value);
}

LONG CMUI_Virtgroup::width() const {
    return (LONG) mGetAttr(MUIA_Virtgroup_Width);
}

Class *CMUI_Virtgroup::registerClass() {
    return CMUI_Area::registerClassWithId((ClassID) MUIC_Virtgroup);
}
