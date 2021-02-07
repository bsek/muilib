#include "include/NListview.h"

template<typename Type>
LONG Zune::NListview<Type>::ActivePage() const {
    return (LONG) this->mGetAttr(MUIA_Group_ActivePage);
}

template<typename Type>
IPTR Zune::NListview<Type>::ChildList() const {
    return ZuneObject::mGetAttr(MUIA_Group_ChildList);
}

template<typename Type>
IPTR Zune::NListview<Type>::exitChange() {
    return DoMethod(this->object, MUIM_Group_ExitChange);
}

template<typename Type>
LONG Zune::NListview<Type>::horizSpacing() const {
    return (LONG) ZuneObject::mGetAttr(MUIA_Group_HorizSpacing);
}

template<typename Type>
Object *Zune::NListview<Type>::horizScrollBar() const {
    return (Object *) ZuneObject::mGetAttr(MUIA_NListview_Horiz_ScrollBar);
}

template<typename Type>
IPTR Zune::NListview<Type>::initChange() {
    return DoMethod(this->object, MUIM_Group_InitChange);
}

template<typename Type>
Object *Zune::NListview<Type>::nList() const {
    return (Object *) ZuneObject::mGetAttr(MUIA_NListview_NList);
}

template<typename Type>
void Zune::NListview<Type>::SetActivePage(LONG value) {
    ZuneObject::ZuneObject::setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

template<typename Type>
void Zune::NListview<Type>::setColumns(LONG value) {
    ZuneObject::ZuneObject::setAttr(MUIA_Group_Columns, (IPTR) value);
}

template<typename Type>
void Zune::NListview<Type>::setHorizSpacing(LONG value) {
    ZuneObject::ZuneObject::setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

template<typename Type>
void Zune::NListview<Type>::setHorizScrollBar(Object *value) {
    ZuneObject::setAttr(MUIA_NListview_Horiz_ScrollBar, (IPTR) value);
}

template<typename Type>
void Zune::NListview<Type>::setRows(LONG value) {
    ZuneObject::setAttr(MUIA_Group_Rows, (IPTR) value);
}

template<typename Type>
void Zune::NListview<Type>::s(LONG value) {
    ZuneObject::setAttr(MUIA_Group_Spacing, (IPTR) value);
}

template<typename Type>
void Zune::NListview<Type>::setVertSpacing(LONG value) {
    ZuneObject::setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

template<typename Type>
void Zune::NListview<Type>::setVertScrollBar(Object *value) {
    ZuneObject::setAttr(MUIA_NListview_Vert_ScrollBar, (IPTR) value);
}

template<typename Type>
IPTR Zune::NListview<Type>::sort(std::vector<Object *> param1) {
    auto p = createTagListFromVector<Object *>(param1, 1);
    p.get()[0] = MUIM_Group_Sort;

    return DoMethodA(this->object, (Msg) p.get());
}

template<typename Type>
LONG Zune::NListview<Type>::vertSpacing() const {
    return (LONG) ZuneObject::mGetAttr(MUIA_Group_VertSpacing);
}

template<typename Type>
Object *Zune::NListview<Type>::vertScrollBar() const {
    return (Object *) ZuneObject::mGetAttr(MUIA_NListview_Vert_ScrollBar);
}

template<typename Type>
Zune::NListview<Type> &Zune::NListview<Type>::operator=(Object *obj) {
    this->object = obj;
    return *this;
}


