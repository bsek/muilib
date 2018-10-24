#include "include/CMUI_Menustrip.h"

CMUI_Menustrip::CMUI_Menustrip(Object* obj)
: CMUI_Family() {
    object = obj;
}

CMUI_Menustrip::CMUI_Menustrip(NewMenu* nm, IPTR flags)
: CMUI_Family() {
    object = MUI_MakeObject(MUIO_MenustripNM, (IPTR)nm, flags);
}

CMUI_Menustrip& CMUI_Menustrip::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL CMUI_Menustrip::enabled() const {
    return (BOOL) mGetAttr(MUIA_Menustrip_Enabled);
}

void CMUI_Menustrip::setEnabled(BOOL value) {
    setAttr(MUIA_Menustrip_Enabled, (IPTR) value);
}

CMUI_Menustrip::CMUI_Menustrip() {}
