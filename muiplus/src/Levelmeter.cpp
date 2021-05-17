#include "include/Levelmeter.h"
#include "include/RootClass.h"
#include "include/Numeric.h"

Zune::Levelmeter::Levelmeter() = default;

Zune::Levelmeter::Levelmeter(Object *obj) {
    object = obj;
}

std::string Zune::Levelmeter::mLabel() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Levelmeter_Label));
}

void Zune::Levelmeter::setLabel(std::string& value) {
    setOrStore(MUIA_Levelmeter_Label, reinterpret_cast<IPTR>(value.c_str()));
}

void Zune::Levelmeter::build() {
    RootClass::createObject(MUIC_Levelmeter);
}


