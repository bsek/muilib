#include "include/Levelmeter.h"

Levelmeter::Levelmeter()
: Numeric() {
}

Levelmeter::Levelmeter(Object* obj)
: Numeric() {
    object = obj;
}

Levelmeter::Levelmeter(std::string label) {
    object = MUI_NewObject(MUIC_Levelmeter, MUIA_Levelmeter_Label, (IPTR) label.c_str(), TAG_END);
}

Levelmeter& Levelmeter::operator=(Object* obj) {
    object = obj;
    return *this;
}

std::string Levelmeter::mLabel() const {
    return (STRPTR) mGetAttr(MUIA_Levelmeter_Label);
}

void Levelmeter::setLabel(std::string value) {
    setAttr(MUIA_Levelmeter_Label, (IPTR) value.c_str());
}


