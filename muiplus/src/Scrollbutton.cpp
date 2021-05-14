#include "include/Scrollbutton.h"

Zune::Scrollbutton::Scrollbutton() = default;

Zune::Scrollbutton::Scrollbutton(Object *obj) {
    object = obj;
}

void Zune::Scrollbutton::setHoriz(WORD horiz) {
    set(MUIA_Scrollbutton_Horiz, static_cast<IPTR>(horiz));
}

void Zune::Scrollbutton::setVert(WORD vert) {
    set(MUIA_Scrollbutton_Vert, static_cast<IPTR>(vert));
}

Object *Zune::Scrollbutton::horizProp() {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Scrollbutton_HorizProp));
}

Object *Zune::Scrollbutton::vertProp() {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Scrollbutton_VertProp));
}

ULONG Zune::Scrollbutton::newPosition() {
    return static_cast<ULONG>(mGetAttr(MUIA_Scrollbutton_NewPosition));
}

WORD Zune::Scrollbutton::vert() {
    return static_cast<WORD>(mGetAttr(MUIA_Scrollbutton_Vert));
}

WORD Zune::Scrollbutton::horiz() {
    return static_cast<WORD>(mGetAttr(MUIA_Scrollbutton_Horiz));
}

void Zune::Scrollbutton::build() {
    RootClass::createObject(MUIC_Scrollbutton);
}
