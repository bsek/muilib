#include "include/CMUI_NListview.h"

CMUI_NListview::CMUI_NListview()
: CMUI_NList() {
}

CMUI_NListview::CMUI_NListview(Object* obj)
: CMUI_NList() {
    object = obj;
}

CMUI_NListview& CMUI_NListview::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG CMUI_NListview::activePage() const {
    return (LONG) mGetAttr(MUIA_Group_ActivePage);
}

void CMUI_NListview::setActivePage(LONG value) {
    setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

struct List * CMUI_NListview::childList() const {
    return (struct List *) mGetAttr(MUIA_Group_ChildList);
}

void CMUI_NListview::setColumns(LONG value) {
    setAttr(MUIA_Group_Columns, (IPTR) value);
}

LONG CMUI_NListview::horizSpacing() const {
    return (LONG) mGetAttr(MUIA_Group_HorizSpacing);
}

void CMUI_NListview::setHorizSpacing(LONG value) {
    setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

void CMUI_NListview::setRows(LONG value) {
    setAttr(MUIA_Group_Rows, (IPTR) value);
}

void CMUI_NListview::setSpacing(LONG value) {
    setAttr(MUIA_Group_Spacing, (IPTR) value);
}

LONG CMUI_NListview::vertSpacing() const {
    return (LONG) mGetAttr(MUIA_Group_VertSpacing);
}

void CMUI_NListview::setVertSpacing(LONG value) {
    setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

IPTR CMUI_NListview::exitChange() {
    return DoMethod(object, MUIM_Group_ExitChange);
}

IPTR CMUI_NListview::initChange() {
    return DoMethod(object, MUIM_Group_InitChange);
}

IPTR CMUI_NListview::sort(std::initializer_list<Object> obj) {
    auto p = createTagListFromVector<Object>(obj, 0);
    return DoMethod(object, MUIM_Group_Sort, p.get());
}

Object * CMUI_NListview::horizScrollBar() const {
    return (Object *) mGetAttr(MUIA_NListview_Horiz_ScrollBar);
}

void CMUI_NListview::setHorizScrollBar(Object * value) {
    setAttr(MUIA_NListview_Horiz_ScrollBar, (IPTR) value);
}

Object * CMUI_NListview::nList() const {
    return (Object *) mGetAttr(MUIA_NListview_NList);
}

Object * CMUI_NListview::vertScrollBar() const {
    return (Object *) mGetAttr(MUIA_NListview_Vert_ScrollBar);
}

void CMUI_NListview::setVertScrollBar(Object * value) {
    setAttr(MUIA_NListview_Vert_ScrollBar, (IPTR) value);
}
