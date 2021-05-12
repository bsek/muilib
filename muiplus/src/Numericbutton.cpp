#include "include/Numericbutton.h"
#include "include/RootClass.h"

Zune::Numericbutton::Numericbutton(Object *obj) {
    object = obj;
}

void Zune::Numericbutton::build() {
    RootClass::createObject(MUIC_Numericbutton);
}

Zune::Numericbutton::Numericbutton() = default;

