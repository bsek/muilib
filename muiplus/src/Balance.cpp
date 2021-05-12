#include "include/Balance.h"
#include "include/RootClass.h"

Zune::Balance::Balance() = default;

Zune::Balance::Balance(Object *obj) {
    object = obj;
}

void Zune::Balance::setQuiet(bool quiet) {
    configmap[MUIA_Balance_Quiet] = static_cast<IPTR>(quiet);
}

void Zune::Balance::build() {
    RootClass::createObject(MUIC_Balance);
}

