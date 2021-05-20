#include "include/Group.h"
#include "include/RootClass.h"

#define MUIA_Group_ChildCount  0x80420322

Zune::Group::Group() : Area() {}

void Zune::Group::addObject(Object *obj) {
    if (obj == NULL) {
        std::cerr << "RootClass is null, object will not be added to group!" << std::endl;
    } else {
        DoMethod(object, MUIM_Group_AddTail, reinterpret_cast<IPTR>(obj));
    }
}

void Zune::Group::remObject(Object *obj) {
    DoMethod(object, MUIM_Group_Remove, reinterpret_cast<IPTR>(obj));
}

LONG Zune::Group::activePage() const {
    return (LONG) mGetAttr(MUIA_Group_ActivePage);
}

void Zune::Group::setActivePage(LONG page) {
    setAttr(MUIA_Group_ActivePage, page);
}

List * Zune::Group::childList() const {
    return reinterpret_cast<struct List*>(mGetAttr(MUIA_Group_ChildList));
}

void Zune::Group::setColumns(LONG value) {
    setAttr(MUIA_Group_Columns, static_cast<IPTR>(value));
}

LONG Zune::Group::horizSpacing() const {
    return (LONG) mGetAttr(MUIA_Group_HorizSpacing);
}

void Zune::Group::setHorizSpacing(LONG value) {
    setAttr(MUIA_Group_HorizSpacing, static_cast<IPTR>(value));
}

void Zune::Group::setRows(LONG value) {
    setAttr(MUIA_Group_Rows, static_cast<IPTR>(value));
}

void Zune::Group::setSpacing(LONG value) {
    setAttr(MUIA_Group_Spacing, static_cast<IPTR>(value));
}

LONG Zune::Group::vertSpacing() const {
    return (LONG) mGetAttr(MUIA_Group_VertSpacing);
}

void Zune::Group::setVertSpacing(LONG value) {
    setAttr(MUIA_Group_VertSpacing, static_cast<IPTR>(value));
}

IPTR Zune::Group::exitChange() {
    return DoMethod(object, MUIM_Group_ExitChange);
}

IPTR Zune::Group::initChange() {
    return DoMethod(object, MUIM_Group_InitChange);
}

IPTR Zune::Group::sort(std::vector<Object *> objects) {
    IPTR msg[objects.size() + 1];

    msg[0] = MUIM_Group_Sort;
    WORD i = 1;
    for (auto *obj : objects) {
        msg[i++] = reinterpret_cast<IPTR>(obj);
    }

    return DoMethodA(object, (Msg) msg);
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
    configmap[MUIA_Group_Child] = reinterpret_cast<IPTR>(child);
}

void Zune::Group::setHoriz(BOOL horiz) {
    configmap[MUIA_Group_Horiz] = static_cast<IPTR>(horiz);
}

void Zune::Group::setPageMode(BOOL pageMode) {
    configmap[MUIA_Group_PageMode] = static_cast<IPTR>(pageMode);
}

void Zune::Group::setSameHeight(BOOL sameHeight) {
    configmap[MUIA_Group_SameHeight] = static_cast<IPTR>(sameHeight);
}

void Zune::Group::setSameSize(BOOL sameSize) {

    configmap[MUIA_Group_SameSize] = static_cast<IPTR>(sameSize);
}

void Zune::Group::setSameWidth(BOOL sameWidth) {
    configmap[MUIA_Group_SameWidth] = static_cast<IPTR>(sameWidth);
}

void Zune::Group::setLayoutHook(struct Hook *hook) {
    setOrStore(MUIA_Group_LayoutHook, reinterpret_cast<IPTR>(hook));
}

void Zune::Group::setForward(BOOL forward) {
    setAttr(MUIA_Group_Forward, static_cast<IPTR>(forward));
}

void Zune::Group::build() {
    RootClass::createObject(MUIC_Group);
}