#include "include/Scrollbar.h"
#include "include/Group.h"
#include "include/RootClass.h"

Zune::Scrollbar::Scrollbar()
        : Zune::Group() {
}

Zune::Scrollbar::Scrollbar(Object *obj)
        : Zune::Group() {
    object = obj;
}

void Zune::Scrollbar::setScrollbarType(LONG type) {
    configmap[MUIA_Scrollbar_Type] = (IPTR) type;
}

void Zune::Scrollbar::build() {
    RootClass::createObject(MUIC_Scrollbar);
}

