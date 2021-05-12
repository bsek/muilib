#include "include/Knob.h"
#include "include/RootClass.h"

Zune::Knob::Knob() = default;

Zune::Knob::Knob(Object *obj) {
    object = obj;
}

void Zune::Knob::build() {
    RootClass::createObject(MUIC_Knob);
}

