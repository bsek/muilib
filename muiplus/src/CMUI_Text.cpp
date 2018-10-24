#include "include/CMUI_Text.h"

CMUI_Text::CMUI_Text()
: CMUI_Area() {
}

CMUI_Text::CMUI_Text(Object* obj)
: CMUI_Area() {
    object = obj;
}

CMUI_Text& CMUI_Text::operator=(Object* obj) {
    object = obj;
    return *this;
}

CMUI_Text::operator const char * () {
    return (const char *) contents();
}

STRPTR CMUI_Text::contents() const {
    return (STRPTR) mGetAttr(MUIA_Text_Contents);
}

void CMUI_Text::setContents(std::string value) {
    setAttr(MUIA_Text_Contents, (IPTR) value.data());
}

STRPTR CMUI_Text::preParse() const {
    return (STRPTR) mGetAttr(MUIA_Text_PreParse);
}

void CMUI_Text::setPreParse(std::string value) {
    setAttr(MUIA_Text_PreParse, (IPTR) value.data());
}
