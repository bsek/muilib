#include "include/NListview.h"

template<typename T>
LONG Zune::NListview<T>::activePage() const {
    return (LONG) this->mGetAttr(MUIA_Group_ActivePage);
}

template<typename T>
IPTR Zune::NListview<T>::childList() const {
    return RootClass::mGetAttr(MUIA_Group_ChildList);
}

template<typename T>
IPTR Zune::NListview<T>::exitChange() {
    return DoMethod(this->object, MUIM_Group_ExitChange);
}

template<typename T>
LONG Zune::NListview<T>::horizSpacing() const {
    return (LONG) RootClass::mGetAttr(MUIA_Group_HorizSpacing);
}

template<typename T>
Object *Zune::NListview<T>::horizScrollBar() const {
    return (Object *) RootClass::mGetAttr(MUIA_NListview_Horiz_ScrollBar);
}

template<typename T>
IPTR Zune::NListview<T>::initChange() {
    return DoMethod(this->object, MUIM_Group_InitChange);
}

template<typename T>
Object *Zune::NListview<T>::nList() const {
    return (Object *) RootClass::mGetAttr(MUIA_NListview_NList);
}

template<typename T>
void Zune::NListview<T>::setActivePage(LONG value) {
    RootClass::RootClass::setAttr(MUIA_Group_ActivePage, (IPTR) value);
}

template<typename T>
void Zune::NListview<T>::setColumns(LONG value) {
    RootClass::RootClass::setAttr(MUIA_Group_Columns, (IPTR) value);
}

template<typename T>
void Zune::NListview<T>::setHorizSpacing(LONG value) {
    RootClass::RootClass::setAttr(MUIA_Group_HorizSpacing, (IPTR) value);
}

template<typename T>
void Zune::NListview<T>::setHorizScrollBar(Object *value) {
    RootClass::setAttr(MUIA_NListview_Horiz_ScrollBar, (IPTR) value);
}

template<typename T>
void Zune::NListview<T>::setRows(LONG value) {
    RootClass::setAttr(MUIA_Group_Rows, (IPTR) value);
}

template<typename T>
void Zune::NListview<T>::s(LONG value) {
    RootClass::setAttr(MUIA_Group_Spacing, (IPTR) value);
}

template<typename T>
void Zune::NListview<T>::setVertSpacing(LONG value) {
    RootClass::setAttr(MUIA_Group_VertSpacing, (IPTR) value);
}

template<typename T>
void Zune::NListview<T>::setVertScrollBar(Object *value) {
    RootClass::setAttr(MUIA_NListview_Vert_ScrollBar, (IPTR) value);
}

template<typename T>
IPTR Zune::NListview<T>::sort(std::vector<Object *> param1) {
    auto p = createTagListFromVector<Object *>(param1, 1);
    p.get()[0] = MUIM_Group_Sort;

    return DoMethodA(this->object, (Msg) p.get());
}

template<typename T>
LONG Zune::NListview<T>::vertSpacing() const {
    return (LONG) RootClass::mGetAttr(MUIA_Group_VertSpacing);
}

template<typename T>
Object *Zune::NListview<T>::vertScrollBar() const {
    return (Object *) RootClass::mGetAttr(MUIA_NListview_Vert_ScrollBar);
}

template<typename T>
Zune::NListview<T>::NListview() = default;

template<typename T>
Zune::NListview<T>::NListview(const Object *obj) : NList<T>(obj) {}

template<typename T>
void Zune::NListview<T>::setNList(const Object *obj) {
    RootClass::configmap[MUIA_NListview_NList] = reinterpret_cast<IPTR>(obj);
}

template<typename T>
void Zune::NListview<T>::build() {
    RootClass::createObject(MUIC_NListview);
}
