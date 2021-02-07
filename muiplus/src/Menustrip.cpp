#include "include/Menustrip.h"
#include "include/Family.h"
#include "include/ZuneObject.h"

Zune::Menustrip::Menustrip(Object *obj)
        : Zune::Family() {
    object = obj;
}

Zune::Menustrip::Menustrip(NewMenu *nm, IPTR flags)
        : Zune::Family() {
    object = MUI_MakeObject(MUIO_MenustripNM, (IPTR) nm, flags);
}

Zune::Menustrip &Zune::Menustrip::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL Zune::Menustrip::enabled() const {
    return (BOOL) mGetAttr(MUIA_Menustrip_Enabled);
}

void Zune::Menustrip::setEnabled(BOOL value) {
    setAttr(MUIA_Menustrip_Enabled, (IPTR) value);
}

Zune::Menustrip::Menustrip() {}
