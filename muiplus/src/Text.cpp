#include "include/Text.h"
#include "include/RootClass.h"

Zune::Text::Text() = default;

Zune::Text::Text(Object *obj) {
    this->object = obj;
}

std::string Zune::Text::contents() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Text_Contents));
}

void Zune::Text::setContents(std::string& value) {
    setOrStore(MUIA_Text_Contents, reinterpret_cast<IPTR>(value.c_str()));
}

std::string Zune::Text::preParse() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Text_PreParse));
}

void Zune::Text::setHiChar(BYTE character) {
    configmap[MUIA_Text_HiChar] = static_cast<IPTR>(character);
}

void Zune::Text::setHiCharIdx(BYTE character) {
    configmap[MUIA_Text_HiCharIdx] = static_cast<IPTR>(character);
}

void Zune::Text::setMax(BOOL value) {
    configmap[MUIA_Text_SetMax] = static_cast<BOOL>(value);
}

void Zune::Text::setMin(BOOL value) {
    configmap[MUIA_Text_SetMin] = static_cast<BOOL>(value);
}

void Zune::Text::setVMax(BOOL value) {
    configmap[MUIA_Text_SetVMax] = static_cast<BOOL>(value);
}

void Zune::Text::setPreParse(std::string &value) {
    setOrStore(MUIA_Text_PreParse, reinterpret_cast<IPTR>(value.c_str()));
}

void Zune::Text::build() {
    RootClass::createObject(MUIC_Text);
}
