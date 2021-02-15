#include "include/Balance.h"
#include "include/RootClass.h"

Zune::Balance::Balance() {
    object = nullptr;
}

void Zune::Balance::setQuiet(bool quiet) {
    configmap[MUIA_Balance_Quiet] = (IPTR) quiet;
}

void Zune::Balance::build() {
    RootClass::createObject(MUIC_Balance);
}
