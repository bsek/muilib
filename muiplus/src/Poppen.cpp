#include "include/Poppen.h"
#include "include/RootClass.h"
#include "include/Pendisplay.h"

Zune::Poppen::Poppen(Object *obj) {
    object = obj;
}

void Zune::Poppen::build() {
    RootClass::createObject(MUIC_Poppen);
}

Zune::Poppen::Poppen() = default;

