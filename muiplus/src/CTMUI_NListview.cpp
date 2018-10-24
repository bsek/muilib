#include "include/CTMUI_NListview.h"

template<typename Type>
LONG CTMUI_NListview<Type>::ActivePage() const {
    return (LONG) this->mGetAttr(MUIA_Group_ActivePage);
}

template<typename Type>
CTMUI_NListview<Type>::CTMUI_NListview()
: CTMUI_NList<Type> () {
}

template<typename Type>
CTMUI_NListview<Type>::CTMUI_NListview(bool input) {

}

template<typename Type>
CTMUI_NListview<Type>::CTMUI_NListview(Object* obj)
: CTMUI_NList<Type> () {
    this->object = obj;
}

template<typename Type>
List* CTMUI_NListview<Type>::ChildList() const {
    return (struct List *) CMUI_Object::mGetAttr(MUIA_Group_ChildList);
}

template<typename Type>
IPTR CTMUI_NListview<Type>::exitChange() {
    return DoMethod(this->object,MUIM_Group_ExitChange);
}

template<typename Type>
LONG CTMUI_NListview<Type>::horizSpacing() const {
    return (LONG) CMUI_Object::mGetAttr(MUIA_Group_HorizSpacing);
}

template<typename Type>
Object* CTMUI_NListview<Type>::horizScrollBar() const {
    return (Object *) CMUI_Object::mGetAttr(MUIA_NListview_Horiz_ScrollBar);
}

template<typename Type>
IPTR CTMUI_NListview<Type>::initChange() {
    return DoMethod(this->object,MUIM_Group_InitChange);
}

template<typename Type>
Object* CTMUI_NListview<Type>::nList() const {
    return (Object *) CMUI_Object::mGetAttr(MUIA_NListview_NList);
}

template<typename Type>
void CTMUI_NListview<Type>::SetActivePage(LONG value) {
    CMUI_Object::CMUI_Object::setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

template<typename Type>
void CTMUI_NListview<Type>::setColumns(LONG value) {
    CMUI_Object::CMUI_Object::setAttr(MUIA_Group_Columns, (IPTR) value);
}

template<typename Type>
void CTMUI_NListview<Type>::setHorizSpacing(LONG value) {
    CMUI_Object::CMUI_Object::setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

template<typename Type>
void CTMUI_NListview<Type>::setHorizScrollBar(Object *value) {
    CMUI_Object::setAttr(MUIA_NListview_Horiz_ScrollBar, (IPTR) value);
}

template<typename Type>
void CTMUI_NListview<Type>::setRows(LONG value) {
    CMUI_Object::setAttr(MUIA_Group_Rows, (IPTR) value);
}

template<typename Type>
void CTMUI_NListview<Type>::s(LONG value) {
    CMUI_Object::setAttr(MUIA_Group_Spacing, (IPTR) value);
}

template<typename Type>
void CTMUI_NListview<Type>::setVertSpacing(LONG value) {
    CMUI_Object::setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

template<typename Type>
void CTMUI_NListview<Type>::setVertScrollBar(Object *value) {
    CMUI_Object::setAttr(MUIA_NListview_Vert_ScrollBar, (IPTR) value);
}

template<typename Type>
IPTR CTMUI_NListview<Type>::sort(std::vector<Object *> param1) {
    auto p = createTagListFromVector<Object*>(param1, 1);
    p.get()[0] = MUIM_Group_Sort;

    return DoMethodA(this->object, (Msg) p.get());
}

template<typename Type>
LONG CTMUI_NListview<Type>::vertSpacing() const {
    return (LONG) CMUI_Object::mGetAttr(MUIA_Group_VertSpacing);
}

template<typename Type>
Object* CTMUI_NListview<Type>::vertScrollBar() const {
    return (Object *) CMUI_Object::mGetAttr(MUIA_NListview_Vert_ScrollBar);
}

template<typename Type>
CTMUI_NListview<Type>& CTMUI_NListview<Type>::operator=(Object* obj) {
    this->object = obj;
    return *this;
}


