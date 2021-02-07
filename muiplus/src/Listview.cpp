#include "include/Listview.h"
#include "include/ZuneList.h"


template<class Type>
Zune::Listview<Type> &Zune::Listview<Type>::operator=(Object *obj) {
    this->object = obj;
    return *this;
}

template<typename Type>
LONG Zune::Listview<Type>::activePage(void) const {
    return (LONG) this->mGetAttr(MUIA_Group_ActivePage);
}

template<typename Type>
void Zune::Listview<Type>::setActivePage(LONG value) {
    this->setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

template<typename Type>
struct List *Zune::Listview<Type>::childList(void) const {
    return (struct List *) this->mGetAttr(MUIA_Group_ChildList);
}

template<typename Type>
void Zune::Listview<Type>::setColumns(LONG value) {
    this->setAttr(MUIA_Group_Columns, (IPTR) value);
}

template<typename Type>
LONG Zune::Listview<Type>::horizSpacing(void) const {
    return (LONG) this->mGetAttr(MUIA_Group_HorizSpacing);
}

template<typename Type>
void Zune::Listview<Type>::setHorizSpacing(LONG value) {
    this->setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

template<typename Type>
void Zune::Listview<Type>::setRows(LONG value) {
    this->setAttr(MUIA_Group_Rows, (IPTR) value);
}

template<typename Type>
void Zune::Listview<Type>::setSpacing(LONG value) {
    this->setAttr(MUIA_Group_Spacing, (IPTR) value);
}

template<typename Type>
LONG Zune::Listview<Type>::vertSpacing(void) const {
    return (LONG) this->mGetAttr(MUIA_Group_VertSpacing);
}

template<typename Type>
void Zune::Listview<Type>::setVertSpacing(LONG value) {
    this->setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

template<typename Type>
IPTR Zune::Listview<Type>::exitChange(void) {
    return DoMethod(this->object, MUIM_Group_ExitChange);
}

template<typename Type>
IPTR Zune::Listview<Type>::initChange(void) {
    return DoMethod(this->object, MUIM_Group_InitChange);
}

template<typename Type>
IPTR Zune::Listview<Type>::sort(std::vector<Object *> objects) {
    auto p = createTagListFromVector<Object *>(objects, 1);
    p.get()[0] = MUIM_Group_Sort;
    return DoMethodA(this->object, p.get());
}

template<typename Type>
LONG Zune::Listview<Type>::clickColumn(void) const {
    return (LONG) this->mGetAttr(MUIA_Listview_ClickColumn);
}

template<typename Type>
LONG Zune::Listview<Type>::defClickColumn(void) const {
    return (LONG) this->mGetAttr(MUIA_Listview_DefClickColumn);
}

template<typename Type>
void Zune::Listview<Type>::setDefClickColumn(LONG value) {
    this->setAttr(MUIA_Listview_DefClickColumn, (IPTR) value);
}

template<typename Type>
BOOL Zune::Listview<Type>::mDoubleClick(void) const {
    return (BOOL) this->mGetAttr(MUIA_Listview_DoubleClick);
}

template<typename Type>
LONG Zune::Listview<Type>::dragType(void) const {
    return (LONG) this->mGetAttr(MUIA_Listview_DragType);
}

template<typename Type>
void Zune::Listview<Type>::setDragType(LONG value) {
    this->setAttr(MUIA_Listview_DragType, (IPTR) value);
}

template<typename Type>
Object *Zune::Listview<Type>::list(void) const {
    return this->mGetAttr(MUIA_Listview_List);
}

template<typename Type>
BOOL Zune::Listview<Type>::selectChange(void) const {
    return (BOOL) this->mGetAttr(MUIA_Listview_SelectChange);
}
