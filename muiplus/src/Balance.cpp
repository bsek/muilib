#include "include/Balance.h"
#include "include/ZuneObject.h"

Zune::Balance::Balance(Object * obj)
: Area() {
    object = obj;
}

Zune::Balance & Zune::Balance::operator=(Object * obj) {
    object = obj;
    return *this;
}

Zune::Balance::Balance()
: Area() {
    object = MUI_NewObject(MUIC_Balance, TAG_END);
}

