#include "include/CMUI_Floattext.h"

CMUI_Floattext::CMUI_Floattext(std::string text, std::string skipChars, LONG tabSize, BOOL justify)
: CMUI_List() {
    object = MUI_NewObject(MUIC_Floattext, MUIA_Floattext_Text, text.c_str(), MUIA_Floattext_SkipChars, skipChars.c_str(),
            MUIA_Floattext_TabSize, tabSize, MUIA_Floattext_Justify, justify);
}

CMUI_Floattext::CMUI_Floattext(Object* obj)
: CMUI_List() {
    object = obj;
}

CMUI_Floattext& CMUI_Floattext::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL CMUI_Floattext::justify() const
{
	 return (BOOL) mGetAttr(MUIA_Floattext_Justify);
}

void CMUI_Floattext::setJustify(BOOL value)
{
    setAttr(MUIA_Floattext_Justify, (IPTR) value);
}

void CMUI_Floattext::setSkipChars(STRPTR value)
{
    setAttr(MUIA_Floattext_SkipChars, (IPTR) value);
}

void CMUI_Floattext::setTabSize(LONG value)
{
    setAttr(MUIA_Floattext_TabSize, (IPTR) value);
}

std::string CMUI_Floattext::text() const
{
	 return (STRPTR) mGetAttr(MUIA_Floattext_Text);
}

void CMUI_Floattext::setText(std::string value)
{
    setAttr(MUIA_Floattext_Text, (IPTR) value.c_str());
}

CMUI_Floattext::CMUI_Floattext() : CMUI_List() {}
