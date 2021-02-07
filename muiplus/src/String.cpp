#include "include/String.h"
#include "include/Area.h"
#include "include/ZuneObject.h"

Zune::String::String() : Area() {
}

Zune::String::String(Object* obj) : Area() {
    object = obj;
}

Zune::String::String(std::string label, LONG maxlen) : Area() {
    object = MUI_MakeObject(MUIO_String, (IPTR) label.c_str(), (IPTR) maxlen);
}

Zune::String& Zune::String::operator=(Object* obj) {
    object = obj;
    return *this;
}

Zune::String::operator IPTR() {
    return integer();
}

Zune::String::operator const char * () {
    return contents().c_str();
}

std::string Zune::String::accept() const {
    return (STRPTR) mGetAttr(MUIA_String_Accept);
}

void Zune::String::setAccept(std::string value) {
    setAttr(MUIA_String_Accept, (IPTR) value.c_str());
}

std::string Zune::String::acknowledge() const {
    return (STRPTR) mGetAttr(MUIA_String_Acknowledge);
}

BOOL Zune::String::advanceOnCR() const {
    return (BOOL) mGetAttr(MUIA_String_AdvanceOnCR);
}

void Zune::String::setAdvanceOnCR(BOOL value) {
    setAttr(MUIA_String_AdvanceOnCR, (IPTR) value);
}

Object * Zune::String::attachedList() const {
    return (Object *) mGetAttr(MUIA_String_AttachedList);
}

void Zune::String::setAttachedList(Object * value) {
    setAttr(MUIA_String_AttachedList, (IPTR) value);
}

LONG Zune::String::bufferPos() const {
    return (LONG) mGetAttr(MUIA_String_BufferPos);
}

void Zune::String::setBufferPos(LONG value) {
    setAttr(MUIA_String_BufferPos, (IPTR) value);
}

std::string Zune::String::contents() const {
    return (STRPTR) mGetAttr(MUIA_String_Contents);
}

void Zune::String::setContents(std::string value) {
    setAttr(MUIA_String_Contents, (IPTR) value.c_str());
}

LONG Zune::String::displayPos() const {
    return (LONG) mGetAttr(MUIA_String_DisplayPos);
}

void Zune::String::setDisplayPos(LONG value) {
    setAttr(MUIA_String_DisplayPos, (IPTR) value);
}

struct Hook * Zune::String::editHook() const {
    return (struct Hook *) mGetAttr(MUIA_String_EditHook);
}

void Zune::String::mSetEditHook(struct Hook * value) {
    setAttr(MUIA_String_EditHook, (IPTR) value);
}

LONG Zune::String::format() const {
    return (LONG) mGetAttr(MUIA_String_Format);
}

IPTR Zune::String::integer() const {
    return (IPTR) mGetAttr(MUIA_String_Integer);
}

void Zune::String::setInteger(IPTR value) {
    setAttr(MUIA_String_Integer, (IPTR) value);
}

BOOL Zune::String::lonelyEditHook() const {
    return (BOOL) mGetAttr(MUIA_String_LonelyEditHook);
}

void Zune::String::setLonelyEditHook(BOOL value) {
    setAttr(MUIA_String_LonelyEditHook, (IPTR) value);
}

LONG Zune::String::maxLen() const {
    return (LONG) mGetAttr(MUIA_String_MaxLen);
}

std::string Zune::String::reject() const {
    return (STRPTR) mGetAttr(MUIA_String_Reject);
}

void Zune::String::setReject(std::string value) {
    setAttr(MUIA_String_Reject, (IPTR) value.c_str());
}

BOOL Zune::String::secret() const {
    return (BOOL) mGetAttr(MUIA_String_Secret);
}
