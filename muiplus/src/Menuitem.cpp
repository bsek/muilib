#include "include/Menuitem.h"

Menuitem::Menuitem(Object* obj)
: Family() {
    object = obj;
}

Menuitem::Menuitem(std::string label, std::string shortcut)
: Family() {
    object = MUI_MakeObject(MUIO_Menuitem, (IPTR) label.c_str(), (IPTR) shortcut.c_str());
}

Menuitem& Menuitem::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL Menuitem::checked() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Checked);
}

void Menuitem::setChecked(BOOL value) {
    setAttr(MUIA_Menuitem_Checked, (IPTR) value);
}

BOOL Menuitem::checkit() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Checkit);
}

void Menuitem::setCheckit(BOOL value) {
    setAttr(MUIA_Menuitem_Checkit, (IPTR) value);
}

BOOL Menuitem::commandString() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_CommandString);
}

void Menuitem::setCommandString(BOOL value) {
    setAttr(MUIA_Menuitem_CommandString, (IPTR) value);
}

BOOL Menuitem::enabled() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Enabled);
}

void Menuitem::setEnabled(BOOL value) {
    setAttr(MUIA_Menuitem_Enabled, (IPTR) value);
}

LONG Menuitem::exclude() const {
    return (LONG) mGetAttr(MUIA_Menuitem_Exclude);
}

void Menuitem::setExclude(LONG value) {
    setAttr(MUIA_Menuitem_Exclude, (IPTR) value);
}

std::string Menuitem::shortcut() const {
    return (STRPTR) mGetAttr(MUIA_Menuitem_Shortcut);
}

void Menuitem::setShortcut(std::string value) {
    setAttr(MUIA_Menuitem_Shortcut, (IPTR) value.c_str());
}

std::string Menuitem::title() const {
    return (STRPTR) mGetAttr(MUIA_Menuitem_Title);
}

void Menuitem::setTitle(std::string value) {
    setAttr(MUIA_Menuitem_Title, (IPTR) value.c_str());
}

BOOL Menuitem::toggle() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Toggle);
}

void Menuitem::setToggle(BOOL value) {
    setAttr(MUIA_Menuitem_Toggle, (IPTR) value);
}

struct MenuItem * Menuitem::trigger() const {
    return (struct MenuItem *) mGetAttr(MUIA_Menuitem_Trigger);
}

Menuitem::Menuitem() {}
