#include "include/CMUI_Cycle.h"

CMUI_Cycle::CMUI_Cycle(Object* obj)
: CMUI_Group() {
    object = obj;
}

CMUI_Cycle::CMUI_Cycle(std::string label, STRPTR entries[])
: CMUI_Group() {
    object = MUI_MakeObject(MUIO_Cycle, (IPTR) label.c_str(), (IPTR) entries);
}

CMUI_Cycle& CMUI_Cycle::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG CMUI_Cycle::active() const {
    return (LONG) mGetAttr(MUIA_Cycle_Active);
}

void CMUI_Cycle::setActive(LONG value) {
    setAttr(MUIA_Cycle_Active, (IPTR) value);
}

CMUI_Cycle::CMUI_Cycle() {}
