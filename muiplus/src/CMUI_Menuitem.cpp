#include "include/CMUI_Menuitem.h"

CMUI_Menuitem::CMUI_Menuitem(Object* obj)
: CMUI_Family() {
    object = obj;
}

CMUI_Menuitem::CMUI_Menuitem(std::string label, std::string shortcut)
: CMUI_Family() {
    object = MUI_MakeObject(MUIO_Menuitem, (IPTR) label.c_str(), (IPTR) shortcut.c_str());
}

CMUI_Menuitem& CMUI_Menuitem::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL CMUI_Menuitem::checked() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Checked);
}

void CMUI_Menuitem::setChecked(BOOL value) {
    setAttr(MUIA_Menuitem_Checked, (IPTR) value);
}

BOOL CMUI_Menuitem::checkit() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Checkit);
}

void CMUI_Menuitem::setCheckit(BOOL value) {
    setAttr(MUIA_Menuitem_Checkit, (IPTR) value);
}

BOOL CMUI_Menuitem::commandString() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_CommandString);
}

void CMUI_Menuitem::setCommandString(BOOL value) {
    setAttr(MUIA_Menuitem_CommandString, (IPTR) value);
}

BOOL CMUI_Menuitem::enabled() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Enabled);
}

void CMUI_Menuitem::setEnabled(BOOL value) {
    setAttr(MUIA_Menuitem_Enabled, (IPTR) value);
}

LONG CMUI_Menuitem::exclude() const {
    return (LONG) mGetAttr(MUIA_Menuitem_Exclude);
}

void CMUI_Menuitem::setExclude(LONG value) {
    setAttr(MUIA_Menuitem_Exclude, (IPTR) value);
}

std::string CMUI_Menuitem::shortcut() const {
    return (STRPTR) mGetAttr(MUIA_Menuitem_Shortcut);
}

void CMUI_Menuitem::setShortcut(std::string value) {
    setAttr(MUIA_Menuitem_Shortcut, (IPTR) value.c_str());
}

std::string CMUI_Menuitem::title() const {
    return (STRPTR) mGetAttr(MUIA_Menuitem_Title);
}

void CMUI_Menuitem::setTitle(std::string value) {
    setAttr(MUIA_Menuitem_Title, (IPTR) value.c_str());
}

BOOL CMUI_Menuitem::toggle() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Toggle);
}

void CMUI_Menuitem::setToggle(BOOL value) {
    setAttr(MUIA_Menuitem_Toggle, (IPTR) value);
}

struct MenuItem * CMUI_Menuitem::trigger() const {
    return (struct MenuItem *) mGetAttr(MUIA_Menuitem_Trigger);
}

CMUI_Menuitem::CMUI_Menuitem() {}
