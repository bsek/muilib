#include "include/CMUI_Radio.h"

CMUI_Radio::CMUI_Radio(Object* obj)
: CMUI_Group() {
    object = obj;
}

CMUI_Radio::CMUI_Radio(std::string& label, STRPTR entries[])
: CMUI_Group() {
   // object = MUI_MakeObject(MUIO_Radio, (IPTR) label.c_str(), (IPTR) entries);
   object = MUI_NewObject(MUIC_Radio, MUIA_Radio_Entries, entries, MUIA_FrameTitle, label.c_str(), TAG_END);
}


CMUI_Radio& CMUI_Radio::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG CMUI_Radio::active(void) const {
    return (LONG) mGetAttr(MUIA_Radio_Active);
}

void CMUI_Radio::setActive(LONG value) {
    setAttr(MUIA_Radio_Active, (IPTR) value);
}

CMUI_Radio::CMUI_Radio() {}
