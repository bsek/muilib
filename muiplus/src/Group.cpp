#include "include/Group.h"
#include "include/List.h"
#include "include/RootClass.h"

#define MUIA_Group_ChildCount  0x80420322

Zune::Group::Group() : Area() {}

void Zune::Group::addObject(Object *obj) {
    if (obj == NULL) {
        std::cerr << "RootClass is null, object will not be added to group!" << std::endl;
    } else {
        DoMethod(object, MUIM_Group_AddTail, (IPTR) obj);
    }
}

void Zune::Group::remObject(Object *obj) {
    DoMethod(object, MUIM_Group_Remove, (IPTR) obj);
}

IPTR Zune::Group::activePage() const {
    return (LONG) mGetAttr(MUIA_Group_ActivePage);
}

void Zune::Group::setActivePage(IPTR value) {
    setAttr(MUIA_Group_ActivePage, value);
}

IPTR Zune::Group::childList() const {
    return mGetAttr(MUIA_Group_ChildList);
}

void Zune::Group::setColumns(LONG value) {
    setAttr(MUIA_Group_Columns, (IPTR) value);
}

LONG Zune::Group::horizSpacing() const {
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

LONG Zune::Group::vertSpacing() const {
    return (LONG) mGetAttr(MUIA_Group_VertSpacing);
}

void Zune::Group::setVertSpacing(LONG value) {
    setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

IPTR Zune::Group::exitChange() {
    return DoMethod(object, MUIM_Group_ExitChange);
}

IPTR Zune::Group::initChange() {
    return DoMethod(object, MUIM_Group_InitChange);
}

IPTR Zune::Group::sort(std::vector<Object *> objects) {
    auto p = createTagListFromVector<Object *>(objects, 1);
    p.get()[0] = MUIM_Group_Sort;

    return DoMethodA(object, (Msg) p.get());
}

Class *Zune::Group::registerClass() {
    return Area::registerClassWithId((ClassID) MUIC_Group);
}

void Zune::Group::addObject(Zune::RootClass &obj) {
    this->addObject(obj.getObject());
}

void Zune::Group::remObject(Zune::RootClass &obj) {
    this->remObject(obj.getObject());
}

void Zune::Group::setChild(Object *child) {
    configmap[MUIA_Group_Child] = (IPTR) child;
}

void Zune::Group::setHoriz(BOOL horiz) {
    configmap[MUIA_Group_Horiz] = (IPTR) horiz;
}

void Zune::Group::setPageMode(BOOL pageMode) {
    configmap[MUIA_Group_PageMode] = (IPTR) pageMode;
}

void Zune::Group::setSameHeight(BOOL sameHeight) {
    configmap[MUIA_Group_SameHeight] = (IPTR) sameHeight;
}

void Zune::Group::setSameSize(BOOL sameSize) {

    configmap[MUIA_Group_SameSize] = (IPTR) sameSize;
}

void Zune::Group::setSameWidth(BOOL sameWidth) {
    configmap[MUIA_Group_SameWidth] = (IPTR) sameWidth;
}

void Zune::Group::setLayoutHook(struct Hook *hook) {
    setOrStore(MUIA_Group_LayoutHook, (IPTR) hook);
}

void Zune::Group::setForward(BOOL forward) {
    setAttr(MUIA_Group_Forward, (IPTR) forward);
}

void Zune::Group::setRows(IPTR rows) {
    setOrStore(MUIA_Group_Rows, rows);
}

IPTR Zune::Group::childCount() const {
    return mGetAttr(MUIA_Group_ChildCount);
}

void Zune::Group::build() {
    RootClass::createObject(MUIC_Group);
}