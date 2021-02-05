#include "include/Knob.h"

Knob::Knob()
: Numeric() {
    object = MUI_NewObject(MUIC_Knob, TAG_END);
}

Knob::Knob(Object * obj)
: Numeric() {
    object = obj;
}

Knob & Knob::operator=(Object * obj) {
    object = obj;
    return *this;
}
