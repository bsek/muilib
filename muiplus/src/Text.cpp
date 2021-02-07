#include "include/Text.h"
#include "include/ZuneObject.h"

Zune::Text::Text()
: Area() {
}

Zune::Text::Text(Object* obj)
: Area() {
    object = obj;
}

Zune::Text& Zune::Text::operator=(Object* obj) {
    object = obj;
    return *this;
}

Zune::Text::operator const char * () {
    return (const char *) contents();
}

STRPTR Zune::Text::contents() const {
    return (STRPTR) mGetAttr(MUIA_Text_Contents);
}

void Zune::Text::setContents(std::string value) {
    setAttr(MUIA_Text_Contents, (IPTR) value.data());
}

STRPTR Zune::Text::preParse() const {
    return (STRPTR) mGetAttr(MUIA_Text_PreParse);
}

void Zune::Text::setPreParse(std::string value) {
    setAttr(MUIA_Text_PreParse, (IPTR) value.data());
}
