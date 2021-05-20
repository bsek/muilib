#include "include/Menustrip.h"
#include "include/RootClass.h"

Zune::Menustrip::Menustrip() = default;

Zune::Menustrip::Menustrip(Object *obj) {
    object = obj;
}

BOOL Zune::Menustrip::enabled() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Menustrip_Enabled));
}

void Zune::Menustrip::setEnabled(BOOL value) {
    setOrStore(MUIA_Menustrip_Enabled, static_cast<IPTR>(value));
}

void Zune::Menustrip::build() {
    RootClass::createObject(MUIC_Menustrip);
}

