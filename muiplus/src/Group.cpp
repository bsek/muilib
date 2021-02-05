#include "include/Group.h"


Group::Group()
: Area() {
}

/* Adds a new object object to the group */

Group::Group(Object* obj)
: Area() {
    object = obj;
}

Group& Group::operator=(Object* obj) {
    object = obj;
    return *this;
}

void Group::addObject(Object *obj) {
    if (obj == NULL){
        std::cout << "Object is null, will not add to group!" << std::endl;
    } else {
        DoMethod(object, MUIM_Group_AddTail, (IPTR) obj);
    }
}

void Group::remObject(Object *obj) {
    std::cout << "Removing object: " << obj << " from group" <<  std::endl;

    DoMethod(object, MUIM_Group_Remove, (IPTR) obj);
}

LONG Group::activePage(void) const {
    return (LONG) mGetAttr(MUIA_Group_ActivePage);
}

void Group::setActivePage(LONG value) {
    setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

struct List * Group::childList(void) const {
    return (struct List *) mGetAttr(MUIA_Group_ChildList);
}

void Group::setColumns(LONG value) {
    setAttr(MUIA_Group_Columns, (IPTR) value);
}

LONG Group::horizSpacing(void) const {
    return (LONG) mGetAttr(MUIA_Group_HorizSpacing);
}

void Group::setHorizSpacing(LONG value) {
    setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

void Group::setRows(LONG value) {
    setAttr(MUIA_Group_Rows, (IPTR) value);
}

void Group::setSpacing(LONG value) {
    setAttr(MUIA_Group_Spacing, (IPTR) value);
}

LONG Group::vertSpacing(void) const {
    return (LONG) mGetAttr(MUIA_Group_VertSpacing);
}

void Group::setVertSpacing(LONG value) {
    setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

IPTR Group::exitChange(void) {
    return DoMethod(object,MUIM_Group_ExitChange);
}

IPTR Group::initChange(void) {
    return DoMethod(object,MUIM_Group_InitChange);
}

IPTR Group::sort(std::vector<Object> objects) {
    auto p = createTagListFromVector<Object>(objects, 1);
    p.get()[0] = MUIM_Group_Sort;

    return DoMethodA(object, (Msg) p.get());
}

Class *Group::registerClass() {
    return Area::registerClassWithId((ClassID) MUIC_Group);
}