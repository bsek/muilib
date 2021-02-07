#include "include/Levelmeter.h"
#include "include/ZuneObject.h"
#include "include/Numeric.h"

Zune::Levelmeter::Levelmeter()
: Numeric() {
}

Zune::Levelmeter::Levelmeter(Object* obj)
: Numeric() {
    object = obj;
}

Zune::Levelmeter::Levelmeter(std::string label) {
    object = MUI_NewObject(MUIC_Levelmeter, MUIA_Levelmeter_Label, (IPTR) label.c_str(), TAG_END);
}

Zune::Levelmeter& Zune::Levelmeter::operator=(Object* obj) {
    object = obj;
    return *this;
}

std::string Zune::Levelmeter::mLabel() const {
    return (STRPTR) mGetAttr(MUIA_Levelmeter_Label);
}

void Zune::Levelmeter::setLabel(std::string value) {
    setAttr(MUIA_Levelmeter_Label, (IPTR) value.c_str());
}


