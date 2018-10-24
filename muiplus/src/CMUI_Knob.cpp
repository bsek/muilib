#include "include/CMUI_Knob.h"

CMUI_Knob::CMUI_Knob()
: CMUI_Numeric() {
    object = MUI_NewObject(MUIC_Knob, TAG_END);
}

CMUI_Knob::CMUI_Knob(Object * obj)
: CMUI_Numeric() {
    object = obj;
}

CMUI_Knob & CMUI_Knob::operator=(Object * obj) {
    object = obj;
    return *this;
}
