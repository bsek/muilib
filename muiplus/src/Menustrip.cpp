#include "include/Menustrip.h"

Menustrip::Menustrip(Object* obj)
: Family() {
    object = obj;
}

Menustrip::Menustrip(NewMenu* nm, IPTR flags)
: Family() {
    object = MUI_MakeObject(MUIO_MenustripNM, (IPTR)nm, flags);
}

Menustrip& Menustrip::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL Menustrip::enabled() const {
    return (BOOL) mGetAttr(MUIA_Menustrip_Enabled);
}

void Menustrip::setEnabled(BOOL value) {
    setAttr(MUIA_Menustrip_Enabled, (IPTR) value);
}

Menustrip::Menustrip() {}
