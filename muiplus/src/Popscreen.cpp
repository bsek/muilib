#include "include/Popscreen.h"
#include "include/RootClass.h"

Zune::Popscreen::Popscreen() = default;

Zune::Popscreen::Popscreen(Object *obj) {
    object = obj;
}

void Zune::Popscreen::build() {
    RootClass::createObject(MUIC_Popscreen);
}
