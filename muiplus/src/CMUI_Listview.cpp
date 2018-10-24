#include "include/CMUI_Listview.h"

CMUI_Listview::CMUI_Listview()
: CMUI_List() {
}

CMUI_Listview::CMUI_Listview(LONG defClickColumn, BOOL dblClick, LONG dragType, BOOL input,
                             Object *list, LONG multiSelect, BOOL scrollerPos) {
    object = MUI_NewObject(MUIC_Listview, MUIA_Listview_DefClickColumn, defClickColumn,
            MUIA_Listview_DoubleClick, dblClick, MUIA_Listview_DragType, dragType, MUIA_Listview_Input, input,
            MUIA_Listview_List, list, MUIA_Listview_MultiSelect, multiSelect, MUIA_Listview_ScrollerPos, scrollerPos,
            TAG_END);
}

CMUI_Listview::CMUI_Listview(Object* obj)
: CMUI_List() {
    object = obj;
}

CMUI_Listview& CMUI_Listview::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG CMUI_Listview::activePage() const {
    return (LONG) mGetAttr(MUIA_Group_ActivePage);
}

void CMUI_Listview::setActivePage(LONG value) {
    setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

struct List * CMUI_Listview::childList() const {
    return (struct List *) mGetAttr(MUIA_Group_ChildList);
}

void CMUI_Listview::setColumns(LONG value) {
    setAttr(MUIA_Group_Columns, (IPTR) value);
}

LONG CMUI_Listview::horizSpacing() const {
    return (LONG) mGetAttr(MUIA_Group_HorizSpacing);
}

void CMUI_Listview::setHorizSpacing(LONG value) {
    setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

void CMUI_Listview::setRows(LONG value) {
    setAttr(MUIA_Group_Rows, (IPTR) value);
}

void CMUI_Listview::setSpacing(LONG value) {
    setAttr(MUIA_Group_Spacing, (IPTR) value);
}

LONG CMUI_Listview::vertSpacing() const {
    return (LONG) mGetAttr(MUIA_Group_VertSpacing);
}

void CMUI_Listview::setVertSpacing(LONG value) {
    setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

IPTR CMUI_Listview::exitChange() {
    return DoMethod(object,MUIM_Group_ExitChange);
}

IPTR CMUI_Listview::initChange() {
    return DoMethod(object,MUIM_Group_InitChange);
}

IPTR CMUI_Listview::sort(std::initializer_list<Object> obj) {
    auto p = createTagListFromVector<Object>(obj, 0);
    return DoMethod(object, MUIM_Group_Sort, p.get());
}

LONG CMUI_Listview::clickColumn() const {
    return (LONG) mGetAttr(MUIA_Listview_ClickColumn);
}

LONG CMUI_Listview::defClickColumn() const {
    return (LONG) mGetAttr(MUIA_Listview_DefClickColumn);
}

void CMUI_Listview::setDefClickColumn(LONG value) {
    setAttr(MUIA_Listview_DefClickColumn, (IPTR) value);
}

BOOL CMUI_Listview::mDoubleClick() const {
    return (BOOL) mGetAttr(MUIA_Listview_DoubleClick);
}

LONG CMUI_Listview::dragType() const {
    return (LONG) mGetAttr(MUIA_Listview_DragType);
}

void CMUI_Listview::setDragType(LONG value) {
    setAttr(MUIA_Listview_DragType, (IPTR) value);
}

Object * CMUI_Listview::list() const {
    return (Object *) mGetAttr(MUIA_Listview_List);
}

BOOL CMUI_Listview::selectChange() const {
    return (BOOL) mGetAttr(MUIA_Listview_SelectChange);
}

