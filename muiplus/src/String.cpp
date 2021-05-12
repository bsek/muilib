#include "include/String.h"
#include "include/RootClass.h"

Zune::String::String() = default;

Zune::String::String(Object *obj)  {
    object = obj;
}

std::string Zune::String::accept() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_String_Accept));
}

void Zune::String::setAccept(std::string& value) {
    setOrStore(MUIA_String_Accept, reinterpret_cast<IPTR>(value.c_str()));
}

std::string Zune::String::acknowledge() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_String_Acknowledge));
}

BOOL Zune::String::advanceOnCR() const {
    return static_cast<BOOL>(mGetAttr(MUIA_String_AdvanceOnCR));
}

void Zune::String::setAdvanceOnCR(BOOL value) {
    setOrStore(MUIA_String_AdvanceOnCR, static_cast<IPTR>(value));
}

Object *Zune::String::attachedList() const {
    return reinterpret_cast<Object *>(mGetAttr(MUIA_String_AttachedList));
}

void Zune::String::setAttachedList(Object *value) {
    setOrStore(MUIA_String_AttachedList, reinterpret_cast<IPTR>(value));
}

LONG Zune::String::bufferPos() const {
    return static_cast<LONG>(mGetAttr(MUIA_String_BufferPos));
}

void Zune::String::setBufferPos(LONG value) {
    setAttr(MUIA_String_BufferPos, static_cast<IPTR>(value));
}

std::string Zune::String::contents() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_String_Contents));
}

void Zune::String::setContents(std::string& value) {
    setOrStore(MUIA_String_Contents, reinterpret_cast<IPTR>(value.c_str()));
}

LONG Zune::String::displayPos() const {
    return static_cast<LONG>(mGetAttr(MUIA_String_DisplayPos));
}

void Zune::String::setDisplayPos(LONG value) {
    setAttr(MUIA_String_DisplayPos, static_cast<IPTR>(value));
}

struct Hook *Zune::String::editHook() const {
    return reinterpret_cast<struct Hook *>(mGetAttr(MUIA_String_EditHook));
}

void Zune::String::mSetEditHook(struct Hook *value) {
    setOrStore(MUIA_String_EditHook, reinterpret_cast<IPTR>(value));
}

LONG Zune::String::format() const {
    return static_cast<LONG>(mGetAttr(MUIA_String_Format));
}

void Zune::String::setFormat(LONG value) {
    configmap[MUIA_String_Format] = static_cast<IPTR>(value);
}

ULONG Zune::String::integer() const {
    return static_cast<ULONG>(mGetAttr(MUIA_String_Integer));
}

void Zune::String::setInteger(ULONG value) {
    setOrStore(MUIA_String_Integer, static_cast<IPTR>(value));
}

BOOL Zune::String::lonelyEditHook() const {
    return static_cast<BOOL>(mGetAttr(MUIA_String_LonelyEditHook));
}

void Zune::String::setLonelyEditHook(BOOL value) {
    setAttr(MUIA_String_LonelyEditHook, static_cast<IPTR>(value));
}

LONG Zune::String::maxLen() const {
    return static_cast<LONG>(mGetAttr(MUIA_String_MaxLen));
}

void Zune::String::setMaxLen(LONG value) {
    configmap[MUIA_String_MaxLen] = static_cast<IPTR>(value);
}

std::string Zune::String::reject() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_String_Reject));
}

void Zune::String::setReject(std::string& value) {
    setOrStore(MUIA_String_Reject, reinterpret_cast<IPTR>(value.c_str()));
}

BOOL Zune::String::secret() const {
    return static_cast<BOOL>(mGetAttr(MUIA_String_Secret));
}

void Zune::String::setSecret(BOOL value) {
    configmap[MUIA_String_Secret] = static_cast<IPTR>(value);
}

void Zune::String::build() {
    RootClass::createObject(MUIC_String);
}
