#include "include/Menu.h"

Menu::Menu()
: Family() {
}

Menu::Menu(std::string title, BOOL copyStrings, BOOL menuEnable) {
    object = MUI_NewObject(MUIC_Menu, MUIA_Menu_Title, (IPTR) title.c_str(), MUIA_Menu_Enabled, (IPTR) menuEnable, TAG_END);
}

Menu::Menu(Object* obj)
: Family() {
    object = obj;
}

Menu& Menu::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL Menu::enabled(void) const {
    return (BOOL) mGetAttr(MUIA_Menu_Enabled);
}

void Menu::setEnabled(BOOL value) {
    setAttr(MUIA_Menu_Enabled, (IPTR) value);
}

STRPTR Menu::title(void) const {
    return (STRPTR) mGetAttr(MUIA_Menu_Title);
}

void Menu::setTitle(STRPTR value) {
    setAttr(MUIA_Menu_Title, (IPTR) value);
}

