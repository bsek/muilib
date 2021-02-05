#include "include/Register.h"

Register::Register() {
}

Register::Register(CONST_STRPTR titles[])
        : Group() {
    object = MUI_NewObject(MUIC_Register, MUIA_Register_Titles, titles, TAG_DONE);
}

Register::Register(Object* obj)
: Group() {
    object = obj;
}

Register& Register::operator=(Object* obj) {
    object = obj;
    return *this;
}

STRPTR * Register::titles(void) const {
    return (STRPTR *) mGetAttr(MUIA_Register_Titles);
}
