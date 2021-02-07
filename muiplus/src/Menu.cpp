#include "include/Menu.h"
#include "include/Family.h"
#include "include/ZuneObject.h"

Zune::Menu::Menu()
        : Zune::Family() {
}

Zune::Menu::Menu(std::string title, BOOL copyStrings, BOOL menuEnable) {
    object = MUI_NewObject(MUIC_Menu, MUIA_Menu_Title, (IPTR) title.c_str(), MUIA_Menu_Enabled, (IPTR) menuEnable,
                           TAG_END);
}

Zune::Menu::Menu(Object *obj)
        : Zune::Family() {
    object = obj;
}

Zune::Menu &Zune::Menu::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL Zune::Menu::enabled(void) const {
    return (BOOL) mGetAttr(MUIA_Menu_Enabled);
}

void Zune::Menu::setEnabled(BOOL value) {
    setAttr(MUIA_Menu_Enabled, (IPTR) value);
}

STRPTR Zune::Menu::title(void) const {
    return (STRPTR) mGetAttr(MUIA_Menu_Title);
}

void Zune::Menu::setTitle(STRPTR value) {
    setAttr(MUIA_Menu_Title, (IPTR) value);
}

