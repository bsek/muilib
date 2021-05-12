#include "include/Floattext.h"
#include "include/List.h"
#include "include/RootClass.h"

Zune::Floattext::Floattext(std::string text, std::string skipChars, LONG tabSize, BOOL justify)
        : List() {
    object = MUI_NewObject(MUIC_Floattext, MUIA_Floattext_Text, text.c_str(), MUIA_Floattext_SkipChars,
                           skipChars.c_str(),
                           MUIA_Floattext_TabSize, tabSize, MUIA_Floattext_Justify, justify);
}

Zune::Floattext::Floattext(Object *obj)
        : List() {
    object = obj;
}

Zune::Floattext &Zune::Floattext::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL Zune::Floattext::justify() const {
    return (BOOL) mGetAttr(MUIA_Floattext_Justify);
}

void Zune::Floattext::setJustify(BOOL value) {
    setAttr(MUIA_Floattext_Justify, (IPTR) value);
}

void Zune::Floattext::setSkipChars(std::string value) {
    setAttr(MUIA_Floattext_SkipChars, (IPTR) value.c_str());
}

void Zune::Floattext::setTabSize(LONG value) {
    setAttr(MUIA_Floattext_TabSize, (IPTR) value);
}

std::string Zune::Floattext::text() const {
    return (STRPTR) mGetAttr(MUIA_Floattext_Text);
}

void Zune::Floattext::setText(std::string value) {
    setAttr(MUIA_Floattext_Text, (IPTR) value.c_str());
}

Zune::Floattext::Floattext() : List() {}
