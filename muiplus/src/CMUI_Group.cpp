#include "include/CMUI_Group.h"


CMUI_Group::CMUI_Group()
: CMUI_Area() {
}

/* Adds a new object object to the group */

CMUI_Group::CMUI_Group(Object* obj)
: CMUI_Area() {
    object = obj;
}

CMUI_Group& CMUI_Group::operator=(Object* obj) {
    object = obj;
    return *this;
}

void CMUI_Group::addObject(Object *obj) {
    if (obj == NULL){
        std::cout << "Object is null, will not add to group!" << std::endl;
    } else {
        DoMethod(object, MUIM_Group_AddTail, (IPTR) obj);
    }
}

void CMUI_Group::remObject(Object *obj) {
    std::cout << "Removing object: " << obj << " from group" <<  std::endl;

    DoMethod(object, MUIM_Group_Remove, (IPTR) obj);
}

LONG CMUI_Group::activePage(void) const {
    return (LONG) mGetAttr(MUIA_Group_ActivePage);
}

void CMUI_Group::setActivePage(LONG value) {
    setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

struct List * CMUI_Group::childList(void) const {
    return (struct List *) mGetAttr(MUIA_Group_ChildList);
}

void CMUI_Group::setColumns(LONG value) {
    setAttr(MUIA_Group_Columns, (IPTR) value);
}

LONG CMUI_Group::horizSpacing(void) const {
    return (LONG) mGetAttr(MUIA_Group_HorizSpacing);
}

void CMUI_Group::setHorizSpacing(LONG value) {
    setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

void CMUI_Group::setRows(LONG value) {
    setAttr(MUIA_Group_Rows, (IPTR) value);
}

void CMUI_Group::setSpacing(LONG value) {
    setAttr(MUIA_Group_Spacing, (IPTR) value);
}

LONG CMUI_Group::vertSpacing(void) const {
    return (LONG) mGetAttr(MUIA_Group_VertSpacing);
}

void CMUI_Group::setVertSpacing(LONG value) {
    setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

IPTR CMUI_Group::exitChange(void) {
    return DoMethod(object,MUIM_Group_ExitChange);
}

IPTR CMUI_Group::initChange(void) {
    return DoMethod(object,MUIM_Group_InitChange);
}

IPTR CMUI_Group::sort(std::vector<Object> objects) {
    auto p = createTagListFromVector<Object>(objects, 1);
    p.get()[0] = MUIM_Group_Sort;

    return DoMethodA(object, (Msg) p.get());
}

struct MUI_CustomClass *CMUI_Group::registerClass() {
    return CMUI_Area::registerClassWithId((ClassID) MUIC_Group);
}