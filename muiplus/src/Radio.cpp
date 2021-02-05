#include "include/Radio.h"

Radio::Radio(Object* obj)
: Group() {
    object = obj;
}

Radio::Radio(std::string& label, CONST_STRPTR entries[])
: Group() {
   // object = MUI_MakeObject(MUIO_Radio, (IPTR) label.c_str(), (IPTR) entries);
   object = MUI_NewObject(MUIC_Radio, MUIA_Radio_Entries, entries, MUIA_FrameTitle, label.c_str(), TAG_END);
}


Radio& Radio::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG Radio::active(void) const {
    return (LONG) mGetAttr(MUIA_Radio_Active);
}

void Radio::setActive(LONG value) {
    setAttr(MUIA_Radio_Active, (IPTR) value);
}

Radio::Radio() {}
