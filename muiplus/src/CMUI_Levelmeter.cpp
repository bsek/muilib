#include "include/CMUI_Levelmeter.h"

CMUI_Levelmeter::CMUI_Levelmeter()
: CMUI_Numeric() {
}

CMUI_Levelmeter::CMUI_Levelmeter(Object* obj)
: CMUI_Numeric() {
    object = obj;
}

CMUI_Levelmeter::CMUI_Levelmeter(std::string label) {
    object = MUI_NewObject(MUIC_Levelmeter, MUIA_Levelmeter_Label, (IPTR) label.c_str(), TAG_END);
}

CMUI_Levelmeter& CMUI_Levelmeter::operator=(Object* obj) {
    object = obj;
    return *this;
}

std::string CMUI_Levelmeter::mLabel() const {
    return (STRPTR) mGetAttr(MUIA_Levelmeter_Label);
}

void CMUI_Levelmeter::setLabel(std::string value) {
    setAttr(MUIA_Levelmeter_Label, (IPTR) value.c_str());
}


