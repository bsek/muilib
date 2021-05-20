#include "include/Menu.h"
#include "include/Family.h"
#include "include/RootClass.h"

Zune::Menu::Menu() = default;

Zune::Menu::Menu(Object *obj) {
    object = obj;
}

BOOL Zune::Menu::enabled() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Menu_Enabled));
}

void Zune::Menu::setEnabled(BOOL value) {
    setOrStore(MUIA_Menu_Enabled, static_cast<IPTR>(value));
}

std::string Zune::Menu::title() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Menu_Title));
}

void Zune::Menu::setTitle(STRPTR value) {
    setOrStore(MUIA_Menu_Title, reinterpret_cast<IPTR>(value));
}

void Zune::Menu::setTitle(std::string &value) {
    setOrStore(MUIA_Menu_Title, reinterpret_cast<IPTR>(value.c_str()));
}

void Zune::Menu::build() {
    RootClass::createObject(MUIC_Menu);
}

