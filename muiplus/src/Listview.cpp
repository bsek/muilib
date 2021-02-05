#include "include/CTMUI_Listview.h"

template<class Type>
CTMUI_Listview<Type>::CTMUI_Listview()
: CTMUI_List<Type> () {
    this->object = NULL;
}

template<class Type>
CTMUI_Listview<Type>::CTMUI_Listview(Object* obj)
: CTMUI_List<Type> () {
    this->object = obj;
}

template<class Type>
CTMUI_Listview<Type>& CTMUI_Listview<Type>::operator=(Object* obj) {
    this->object = obj;
    return *this;
}

template <typename Type> LONG CTMUI_Listview<Type>::activePage(void) const {
    return (LONG) this->mGetAttr(MUIA_Group_ActivePage);
}

template <typename Type> void CTMUI_Listview<Type>::setActivePage(LONG value) {
    Object::Object::setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

template <typename Type> struct List * CTMUI_Listview<Type>::childList(void) const {
    return (struct List *) this->mGetAttr(MUIA_Group_ChildList);
}

template <typename Type> void CTMUI_Listview<Type>::setColumns(LONG value) {
    Object::setAttr(MUIA_Group_Columns, (IPTR) value);
}

template <typename Type> LONG CTMUI_Listview<Type>::horizSpacing(void) const {
    return (LONG) this->mGetAttr(MUIA_Group_HorizSpacing);
}

template <typename Type> void CTMUI_Listview<Type>::setHorizSpacing(LONG value) {
    Object::setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

template <typename Type> void CTMUI_Listview<Type>::setRows(LONG value) {
    Object::setAttr(MUIA_Group_Rows, (IPTR) value);
}

template <typename Type> void CTMUI_Listview<Type>::setSpacing(LONG value) {
    Object::setAttr(MUIA_Group_Spacing, (IPTR) value);
}

template <typename Type> LONG CTMUI_Listview<Type>::vertSpacing(void) const {
    return (LONG) Object::mGetAttr(MUIA_Group_VertSpacing);
}

template <typename Type> void CTMUI_Listview<Type>::setVertSpacing(LONG value) {
    Object::setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

template <typename Type> IPTR CTMUI_Listview<Type>::exitChange(void) {
    return DoMethod(this->object, MUIM_Group_ExitChange);
}

template <typename Type> IPTR CTMUI_Listview<Type>::initChange(void) {
    return DoMethod(this->object, MUIM_Group_InitChange);
}

template <typename Type> IPTR CTMUI_Listview<Type>::sort(std::vector<Object *> objects) {
    auto p = createTagListFromVector<Object*>(objects, 1);
    p.get()[0] = MUIM_Group_Sort;
    return DoMethodA(this->object, p.get());
}

template <typename Type> LONG CTMUI_Listview<Type>::clickColumn(void) const {
    return (LONG) Object::mGetAttr(MUIA_Listview_ClickColumn);
}

template <typename Type> LONG CTMUI_Listview<Type>::defClickColumn(void) const {
    return (LONG) Object::mGetAttr(MUIA_Listview_DefClickColumn);
}

template <typename Type> void CTMUI_Listview<Type>::setDefClickColumn(LONG value) {
    Object::setAttr(MUIA_Listview_DefClickColumn, (IPTR) value);
}

template <typename Type> BOOL CTMUI_Listview<Type>::mDoubleClick(void) const {
    return (BOOL) Object::mGetAttr(MUIA_Listview_DoubleClick);
}

template <typename Type> LONG CTMUI_Listview<Type>::dragType(void) const {
    return (LONG) Object::mGetAttr(MUIA_Listview_DragType);
}

template <typename Type> void CTMUI_Listview<Type>::setDragType(LONG value) {
    Object::setAttr(MUIA_Listview_DragType, (IPTR) value);
}

template <typename Type> Object * CTMUI_Listview<Type>::list(void) const {
    return (Object *) Object::mGetAttr(MUIA_Listview_List);
}

template <typename Type> BOOL CTMUI_Listview<Type>::selectChange(void) const {
    return (BOOL) Object::mGetAttr(MUIA_Listview_SelectChange);
}
