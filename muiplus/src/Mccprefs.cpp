#include "include/Mccprefs.h"

Zune::Mccprefs::Mccprefs() = default;

Zune::Mccprefs::Mccprefs(Object *obj) {
    object = obj;
}

void Zune::Mccprefs::build() {
    RootClass::createObject(MUIC_Mccprefs);
}
