#include "include/Knob.h"
#include "include/ZuneObject.h"
#include "include/Numeric.h"

Zune::Knob::Knob()
        : Numeric() {
    object = MUI_NewObject(MUIC_Knob, TAG_END);
}

Zune::Knob::Knob(Object *obj)
        : Numeric() {
    object = obj;
}

Zune::Knob &Zune::Knob::operator=(Object *obj) {
    object = obj;
    return *this;
}
