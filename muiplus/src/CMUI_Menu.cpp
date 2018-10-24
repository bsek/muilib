#include "include/CMUI_Menu.h"

CMUI_Menu::CMUI_Menu()
: CMUI_Family() {
}

CMUI_Menu::CMUI_Menu(std::string title, BOOL copyStrings, BOOL menuEnable) {
    object = MUI_NewObject(MUIC_Menu, MUIA_Menu_Title, (IPTR) title.c_str(), MUIA_Menu_Enabled, (IPTR) menuEnable, TAG_END);
}

CMUI_Menu::CMUI_Menu(Object* obj)
: CMUI_Family() {
    object = obj;
}

CMUI_Menu& CMUI_Menu::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL CMUI_Menu::enabled(void) const {
    return (BOOL) mGetAttr(MUIA_Menu_Enabled);
}

void CMUI_Menu::setEnabled(BOOL value) {
    setAttr(MUIA_Menu_Enabled, (IPTR) value);
}

STRPTR CMUI_Menu::title(void) const {
    return (STRPTR) mGetAttr(MUIA_Menu_Title);
}

void CMUI_Menu::setTitle(STRPTR value) {
    setAttr(MUIA_Menu_Title, (IPTR) value);
}

