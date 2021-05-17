#include "include/Boopsi.h"
#include "include/RootClass.h"

Zune::Boopsi::Boopsi(Object *obj) {
    object = obj;
}

struct IClass *Zune::Boopsi::getClass() const {
    return reinterpret_cast<struct IClass *>(mGetAttr(MUIA_Boopsi_Class));
}

void Zune::Boopsi::setClass(struct IClass *value) {
    setOrStore(MUIA_Boopsi_Class, reinterpret_cast<IPTR>(value));
}

char *Zune::Boopsi::classID() const {
    return reinterpret_cast<char *>(mGetAttr(MUIA_Boopsi_ClassID));
}

void Zune::Boopsi::setClassID(std::string& value) {
    setOrStore(MUIA_Boopsi_ClassID, reinterpret_cast<IPTR>(value.c_str()));
}

IPTR Zune::Boopsi::maxHeight() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Boopsi_MaxHeight));
}

void Zune::Boopsi::setMaxHeight(IPTR value) {
    setOrStore(MUIA_Boopsi_MaxHeight, static_cast<IPTR>(value));
}

IPTR Zune::Boopsi::maxWidth() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Boopsi_MaxWidth));
}

void Zune::Boopsi::setMaxWidth(IPTR value) {
    setOrStore(MUIA_Boopsi_MaxWidth, static_cast<IPTR>(value));
}

IPTR Zune::Boopsi::minHeight() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Boopsi_MinHeight));
}

void Zune::Boopsi::setMinHeight(IPTR value) {
    setOrStore(MUIA_Boopsi_MinHeight, static_cast<IPTR>(value));
}

IPTR Zune::Boopsi::minWidth() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Boopsi_MinWidth));
}

void Zune::Boopsi::setMinWidth(IPTR value) {
    setOrStore(MUIA_Boopsi_MinWidth, static_cast<IPTR>(value));
}

Object *Zune::Boopsi::boopsiObject() const {
    return reinterpret_cast<Object *>(mGetAttr(MUIA_Boopsi_Object));
}

IPTR Zune::Boopsi::tagDrawInfo() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Boopsi_TagDrawInfo));
}

void Zune::Boopsi::setTagDrawInfo(IPTR value) {
    setOrStore(MUIA_Boopsi_TagDrawInfo, static_cast<IPTR>(value));
}

IPTR Zune::Boopsi::tagScreen() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Boopsi_TagScreen));
}

void Zune::Boopsi::setTagScreen(IPTR value) {
    setOrStore(MUIA_Boopsi_TagScreen, static_cast<IPTR>(value));
}

IPTR Zune::Boopsi::tagWindow() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Boopsi_TagWindow));
}

void Zune::Boopsi::setTagWindow(IPTR value) {
    setOrStore(MUIA_Boopsi_TagWindow, static_cast<IPTR>(value));
}

void Zune::Boopsi::setSmart(BOOL smart) {
    configmap[MUIA_Boopsi_Smart] = static_cast<IPTR>(smart);
}

void Zune::Boopsi::setRemember(ULONG value) {
    configmap[MUIA_Boopsi_Remember] = static_cast<IPTR>(value);
}

void Zune::Boopsi::build() {
    RootClass::createObject(MUIC_Boopsi);
}

Zune::Boopsi::Boopsi() = default;
