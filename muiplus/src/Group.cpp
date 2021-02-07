#include "include/Group.h"
#include "include/ZuneList.h"
#include "include/ZuneObject.h"


Zune::Group::Group()
: Area() {
}

Zune::Group::Group(Zune::GroupDirection direction) : Area() {
    object = MUI_NewObject(MUIC_Group, MUIA_Group_Horiz, direction == Zune::GroupDirection::Horizontal, TAG_END);
}

Zune::Group::Group(Object* obj)
: Area() {
    object = obj;
}

Zune::Group& Zune::Group::operator=(Object* obj) {
    object = obj;
    return *this;
}

void Zune::Group::addObject(Object *obj) {
    if (obj == NULL){
        std::cout << "ZuneObject is null, will not add to group!" << std::endl;
    } else {
        DoMethod(object, MUIM_Group_AddTail, (IPTR) obj);
    }
}

void Zune::Group::remObject(Object *obj) {
    std::cout << "Removing object: " << obj << " from group" <<  std::endl;

    DoMethod(object, MUIM_Group_Remove, (IPTR) obj);
}

LONG Zune::Group::activePage(void) const {
    return (LONG) mGetAttr(MUIA_Group_ActivePage);
}

void Zune::Group::setActivePage(LONG value) {
    setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

IPTR Zune::Group::childList(void) const {
    return mGetAttr(MUIA_Group_ChildList);
}

void Zune::Group::setColumns(LONG value) {
    setAttr(MUIA_Group_Columns, (IPTR) value);
}

LONG Zune::Group::horizSpacing(void) const {
    return (LONG) mGetAttr(MUIA_Group_HorizSpacing);
}

void Zune::Group::setHorizSpacing(LONG value) {
    setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

void Zune::Group::setRows(LONG value) {
    setAttr(MUIA_Group_Rows, (IPTR) value);
}

void Zune::Group::setSpacing(LONG value) {
    setAttr(MUIA_Group_Spacing, (IPTR) value);
}

LONG Zune::Group::vertSpacing(void) const {
    return (LONG) mGetAttr(MUIA_Group_VertSpacing);
}

void Zune::Group::setVertSpacing(LONG value) {
    setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

IPTR Zune::Group::exitChange(void) {
    return DoMethod(object,MUIM_Group_ExitChange);
}

IPTR Zune::Group::initChange(void) {
    return DoMethod(object,MUIM_Group_InitChange);
}

IPTR Zune::Group::sort(std::vector<Object *> objects) {
    auto p = createTagListFromVector<Object *>(objects, 1);
    p.get()[0] = MUIM_Group_Sort;

    return DoMethodA(object, (Msg) p.get());
}

Class *Zune::Group::registerClass() {
    return Area::registerClassWithId((ClassID) MUIC_Group);
}
