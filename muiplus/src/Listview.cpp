#include "include/Listview.h"

Zune::Listview::Listview() = default;

Zune::Listview::Listview(Object *obj) {
    object = obj;
}

LONG Zune::Listview::clickColumn() const {
    return static_cast<LONG>( mGetAttr(MUIA_Listview_ClickColumn));
}

LONG Zune::Listview::defClickColumn() const {
    return static_cast<LONG>( mGetAttr(MUIA_Listview_DefClickColumn));
}

void Zune::Listview::setDefClickColumn(LONG value) {
    setAttr(MUIA_Listview_DefClickColumn, static_cast<IPTR>(value));
}

LONG Zune::Listview::dragType() const {
    return static_cast<LONG>( mGetAttr(MUIA_Listview_DragType));
}

void Zune::Listview::setDragType(LONG value) {
    setAttr(MUIA_Listview_DragType, static_cast<IPTR>(value));
}

BOOL Zune::Listview::selectChange() const {
    return static_cast<BOOL>( mGetAttr(MUIA_Listview_SelectChange));
}

void Zune::Listview::setDoubleClick(BOOL doubleClick) {
    configmap[MUIA_Listview_DoubleClick] = static_cast<IPTR>(doubleClick);
}

BOOL Zune::Listview::doubleClick() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Listview_DoubleClick));
}

void Zune::Listview::setInput(BOOL input) {
    configmap[MUIA_Listview_Input] = static_cast<IPTR>(input);
}

void Zune::Listview::setMultiSelect(LONG multiselect) {
    configmap[MUIA_Listview_MultiSelect] = static_cast<IPTR>(multiselect);
}

void Zune::Listview::setScrollerPos(BOOL scrollerPos) {
    configmap[MUIA_Listview_ScrollerPos] = static_cast<IPTR>(scrollerPos);
}

Object *Zune::Listview::list() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Listview_List));
}

void Zune::Listview::setList(Object *obj) {
    configmap[MUIA_Listview_List] = reinterpret_cast<IPTR>(obj);
}

void Zune::Listview::build() {
    RootClass::createObject(MUIC_Listview);
}
