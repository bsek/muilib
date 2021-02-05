#include "include/Floattext.h"

Floattext::Floattext(std::string text, std::string skipChars, LONG tabSize, BOOL justify)
: List() {
    object = MUI_NewObject(MUIC_Floattext, MUIA_Floattext_Text, text.c_str(), MUIA_Floattext_SkipChars, skipChars.c_str(),
            MUIA_Floattext_TabSize, tabSize, MUIA_Floattext_Justify, justify);
}

Floattext::Floattext(Object* obj)
: List() {
    object = obj;
}

Floattext& Floattext::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL Floattext::justify() const
{
	 return (BOOL) mGetAttr(MUIA_Floattext_Justify);
}

void Floattext::setJustify(BOOL value)
{
    setAttr(MUIA_Floattext_Justify, (IPTR) value);
}

void Floattext::setSkipChars(STRPTR value)
{
    setAttr(MUIA_Floattext_SkipChars, (IPTR) value);
}

void Floattext::setTabSize(LONG value)
{
    setAttr(MUIA_Floattext_TabSize, (IPTR) value);
}

std::string Floattext::text() const
{
	 return (STRPTR) mGetAttr(MUIA_Floattext_Text);
}

void Floattext::setText(std::string value)
{
    setAttr(MUIA_Floattext_Text, (IPTR) value.c_str());
}

Floattext::Floattext() : List() {}
