#include "include/CMUI_Register.h"

CMUI_Register::CMUI_Register() {
}

CMUI_Register::CMUI_Register(CONST_STRPTR titles[])
        : CMUI_Group() {
    object = MUI_NewObject(MUIC_Register, MUIA_Register_Titles, titles, TAG_DONE);
}

CMUI_Register::CMUI_Register(Object* obj)
: CMUI_Group() {
    object = obj;
}

CMUI_Register& CMUI_Register::operator=(Object* obj) {
    object = obj;
    return *this;
}

STRPTR * CMUI_Register::titles(void) const {
    return (STRPTR *) mGetAttr(MUIA_Register_Titles);
}
