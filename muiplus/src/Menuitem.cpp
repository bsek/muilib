#include "include/Menuitem.h"
#include "include/RootClass.h"

Zune::Menuitem::Menuitem(Object *obj) {
    object = obj;
}

BOOL Zune::Menuitem::checked() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Menuitem_Checked));
}

void Zune::Menuitem::setChecked(BOOL value) {
    setOrStore(MUIA_Menuitem_Checked, static_cast<IPTR>(value));
}

BOOL Zune::Menuitem::checkit() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Menuitem_Checkit));
}

void Zune::Menuitem::setCheckit(BOOL value) {
    setOrStore(MUIA_Menuitem_Checkit, static_cast<IPTR>(value));
}

BOOL Zune::Menuitem::commandString() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Menuitem_CommandString));
}

void Zune::Menuitem::setCommandString(BOOL value) {
    setOrStore(MUIA_Menuitem_CommandString, static_cast<IPTR>(value));
}

BOOL Zune::Menuitem::enabled() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Menuitem_Enabled));
}

void Zune::Menuitem::setEnabled(BOOL value) {
    setOrStore(MUIA_Menuitem_Enabled, static_cast<IPTR>(value));
}

LONG Zune::Menuitem::exclude() const {
    return static_cast<LONG>(mGetAttr(MUIA_Menuitem_Exclude));
}

void Zune::Menuitem::setExclude(LONG value) {
    setOrStore(MUIA_Menuitem_Exclude, static_cast<IPTR>(value));
}

std::string Zune::Menuitem::shortcut() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Menuitem_Shortcut));
}

void Zune::Menuitem::setShortcut(std::string &value) {
    setOrStore(MUIA_Menuitem_Shortcut, reinterpret_cast<IPTR>(value.c_str()));
}

std::string Zune::Menuitem::title() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Menuitem_Title));
}

void Zune::Menuitem::setTitle(std::string &value) {
    setOrStore(MUIA_Menuitem_Title, reinterpret_cast<IPTR>(value.c_str()));
}

BOOL Zune::Menuitem::toggle() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Menuitem_Toggle));
}

void Zune::Menuitem::setToggle(BOOL value) {
    setOrStore(MUIA_Menuitem_Toggle, static_cast<IPTR>(value));
}

struct MenuItem *Zune::Menuitem::trigger() const {
    return reinterpret_cast<struct MenuItem *>(mGetAttr(MUIA_Menuitem_Trigger));
}

Zune::Menuitem::Menuitem() = default;

void Zune::Menuitem::build() {
    RootClass::createObject(MUIC_Menuitem);
}

struct NewMenu *Zune::Menuitem::newMenu() const {
    return reinterpret_cast<struct NewMenu*>(mGetAttr(MUIA_Menuitem_NewMenu));
}
