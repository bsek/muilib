#include "include/Menuitem.h"
#include "include/Family.h"
#include "include/RootClass.h"

Zune::Menuitem::Menuitem(Object *obj)
        : Family() {
    object = obj;
}

Zune::Menuitem::Menuitem(std::string label, std::string shortcut)
        : Family() {
    object = MUI_MakeObject(MUIO_Menuitem, (IPTR) label.c_str(), (IPTR) shortcut.c_str());
}

Zune::Menuitem &Zune::Menuitem::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL Zune::Menuitem::checked() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Checked);
}

void Zune::Menuitem::setChecked(BOOL value) {
    setAttr(MUIA_Menuitem_Checked, (IPTR) value);
}

BOOL Zune::Menuitem::checkit() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Checkit);
}

void Zune::Menuitem::setCheckit(BOOL value) {
    setAttr(MUIA_Menuitem_Checkit, (IPTR) value);
}

BOOL Zune::Menuitem::commandString() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_CommandString);
}

void Zune::Menuitem::setCommandString(BOOL value) {
    setAttr(MUIA_Menuitem_CommandString, (IPTR) value);
}

BOOL Zune::Menuitem::enabled() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Enabled);
}

void Zune::Menuitem::setEnabled(BOOL value) {
    setAttr(MUIA_Menuitem_Enabled, (IPTR) value);
}

LONG Zune::Menuitem::exclude() const {
    return (LONG) mGetAttr(MUIA_Menuitem_Exclude);
}

void Zune::Menuitem::setExclude(LONG value) {
    setAttr(MUIA_Menuitem_Exclude, (IPTR) value);
}

std::string Zune::Menuitem::shortcut() const {
    return (STRPTR) mGetAttr(MUIA_Menuitem_Shortcut);
}

void Zune::Menuitem::setShortcut(std::string value) {
    setAttr(MUIA_Menuitem_Shortcut, (IPTR) value.c_str());
}

std::string Zune::Menuitem::title() const {
    return (STRPTR) mGetAttr(MUIA_Menuitem_Title);
}

void Zune::Menuitem::setTitle(std::string value) {
    setAttr(MUIA_Menuitem_Title, (IPTR) value.c_str());
}

BOOL Zune::Menuitem::toggle() const {
    return (BOOL) mGetAttr(MUIA_Menuitem_Toggle);
}

void Zune::Menuitem::setToggle(BOOL value) {
    setAttr(MUIA_Menuitem_Toggle, (IPTR) value);
}

struct MenuItem *Zune::Menuitem::trigger() const {
    return (struct MenuItem *) mGetAttr(MUIA_Menuitem_Trigger);
}

Zune::Menuitem::Menuitem() {}
