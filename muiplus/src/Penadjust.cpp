#include "include/Penadjust.h"
#include "include/Register.h"

Zune::Penadjust::Penadjust()
        : Register() {
}

Zune::Penadjust::Penadjust(Object *obj) {
    object = obj;
}

void Zune::Penadjust::build() {
    RootClass::createObject(MUIC_Penadjust);
}

