#include "include/Scrollgroup.h"
#include "include/RootClass.h"

Zune::Scrollgroup::Scrollgroup() = default;

Zune::Scrollgroup::Scrollgroup(Object *obj) {
    object = obj;
}

Object *Zune::Scrollgroup::horizBar() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Scrollgroup_HorizBar));
}

Object *Zune::Scrollgroup::vertBar() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Scrollgroup_VertBar));
}

void Zune::Scrollgroup::setContents(Zune::Virtgroup& vg) {
    setOrStore(MUIA_Scrollgroup_Contents, reinterpret_cast<IPTR>(vg.getObject()));
}

void Zune::Scrollgroup::setContents(Object *obj) {
    setOrStore(MUIA_Scrollgroup_Contents, reinterpret_cast<IPTR>(obj));
}

Zune::Virtgroup Zune::Scrollgroup::contents() const {
    Zune::Virtgroup vg{};
    auto* obj = reinterpret_cast<Object*>(mGetAttr(MUIA_Scrollgroup_Contents));
    vg.setObject(obj);
    return vg;
}

BOOL Zune::Scrollgroup::noHorizBar() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Scrollgroup_NoHorizBar));
}

BOOL Zune::Scrollgroup::noVertBar() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Scrollgroup_NoVertBar));
}

void Zune::Scrollgroup::setNoHorizBar(BOOL value) {
    setOrStore(MUIA_Scrollgroup_NoHorizBar, value);
}

void Zune::Scrollgroup::setNoVertBar(BOOL value) {
    setOrStore(MUIA_Scrollgroup_NoVertBar, value);
}

void Zune::Scrollgroup::setUseWinBorder(BOOL value) {
    configmap[MUIA_Scrollgroup_UseWinBorder] = static_cast<IPTR>(value);
}

void Zune::Scrollgroup::setFreeHoriz(BOOL value) {
    configmap[MUIA_Scrollgroup_FreeHoriz] = static_cast<IPTR>(value);
}

void Zune::Scrollgroup::setFreeVert(BOOL value) {
    configmap[MUIA_Scrollgroup_FreeVert] = static_cast<IPTR>(value);
}

BOOL Zune::Scrollgroup::autoBars() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Scrollgroup_AutoBars));
}

void Zune::Scrollgroup::setAutoBars(BOOL value) {
    setOrStore(MUIA_Scrollgroup_AutoBars, value);
}

void Zune::Scrollgroup::build() {
    RootClass::createObject(MUIC_Scrollgroup);
}