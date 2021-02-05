#include "include/Text.h"

Text::Text()
: Area() {
}

Text::Text(Object* obj)
: Area() {
    object = obj;
}

Text& Text::operator=(Object* obj) {
    object = obj;
    return *this;
}

Text::operator const char * () {
    return (const char *) contents();
}

STRPTR Text::contents() const {
    return (STRPTR) mGetAttr(MUIA_Text_Contents);
}

void Text::setContents(std::string value) {
    setAttr(MUIA_Text_Contents, (IPTR) value.data());
}

STRPTR Text::preParse() const {
    return (STRPTR) mGetAttr(MUIA_Text_PreParse);
}

void Text::setPreParse(std::string value) {
    setAttr(MUIA_Text_PreParse, (IPTR) value.data());
}
