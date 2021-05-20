#include "include/Floattext.h"
#include "include/RootClass.h"

Zune::Floattext::Floattext(Object *obj) {
    object = obj;
}

BOOL Zune::Floattext::justify() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Floattext_Justify));
}

void Zune::Floattext::setJustify(BOOL value) {
    setOrStore(MUIA_Floattext_Justify, static_cast<IPTR>(value));
}

void Zune::Floattext::setSkipChars(std::string &value) {
    setOrStore(MUIA_Floattext_SkipChars, reinterpret_cast<IPTR>(value.c_str()));
}

void Zune::Floattext::setTabSize(LONG value) {
    setOrStore(MUIA_Floattext_TabSize, static_cast<IPTR>(value));
}

std::string Zune::Floattext::text() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Floattext_Text));
}

void Zune::Floattext::setText(std::string &value) {
    setOrStore(MUIA_Floattext_Text, reinterpret_cast<IPTR>(value.c_str()));
}

void Zune::Floattext::build() {
    RootClass::createObject(MUIC_Floattext);
}

Zune::Floattext::Floattext() = default;
