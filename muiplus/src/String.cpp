#include "include/String.h"

String::String() : Gadget() {
}

String::String(Object* obj) : Gadget() {
    object = obj;
}

String::String(std::string label, LONG maxlen) : Gadget() {
    object = MUI_MakeObject(MUIO_String, (IPTR) label.c_str(), (IPTR) maxlen);
}

String& String::operator=(Object* obj) {
    object = obj;
    return *this;
}

String::operator IPTR() {
    return integer();
}

String::operator const char * () {
    return contents().c_str();
}

std::string String::accept() const {
    return (STRPTR) mGetAttr(MUIA_String_Accept);
}

void String::setAccept(std::string value) {
    setAttr(MUIA_String_Accept, (IPTR) value.c_str());
}

std::string String::acknowledge() const {
    return (STRPTR) mGetAttr(MUIA_String_Acknowledge);
}

BOOL String::advanceOnCR() const {
    return (BOOL) mGetAttr(MUIA_String_AdvanceOnCR);
}

void String::setAdvanceOnCR(BOOL value) {
    setAttr(MUIA_String_AdvanceOnCR, (IPTR) value);
}

Object * String::attachedList() const {
    return (Object *) mGetAttr(MUIA_String_AttachedList);
}

void String::setAttachedList(Object * value) {
    setAttr(MUIA_String_AttachedList, (IPTR) value);
}

LONG String::bufferPos() const {
    return (LONG) mGetAttr(MUIA_String_BufferPos);
}

void String::setBufferPos(LONG value) {
    setAttr(MUIA_String_BufferPos, (IPTR) value);
}

std::string String::contents() const {
    return (STRPTR) mGetAttr(MUIA_String_Contents);
}

void String::setContents(std::string value) {
    setAttr(MUIA_String_Contents, (IPTR) value.c_str());
}

LONG String::displayPos() const {
    return (LONG) mGetAttr(MUIA_String_DisplayPos);
}

void String::setDisplayPos(LONG value) {
    setAttr(MUIA_String_DisplayPos, (IPTR) value);
}

struct Hook * String::editHook() const {
    return (struct Hook *) mGetAttr(MUIA_String_EditHook);
}

void String::mSetEditHook(struct Hook * value) {
    setAttr(MUIA_String_EditHook, (IPTR) value);
}

LONG String::format() const {
    return (LONG) mGetAttr(MUIA_String_Format);
}

IPTR String::integer() const {
    return (IPTR) mGetAttr(MUIA_String_Integer);
}

void String::setInteger(IPTR value) {
    setAttr(MUIA_String_Integer, (IPTR) value);
}

BOOL String::lonelyEditHook() const {
    return (BOOL) mGetAttr(MUIA_String_LonelyEditHook);
}

void String::setLonelyEditHook(BOOL value) {
    setAttr(MUIA_String_LonelyEditHook, (IPTR) value);
}

LONG String::maxLen() const {
    return (LONG) mGetAttr(MUIA_String_MaxLen);
}

std::string String::reject() const {
    return (STRPTR) mGetAttr(MUIA_String_Reject);
}

void String::setReject(std::string value) {
    setAttr(MUIA_String_Reject, (IPTR) value.c_str());
}

BOOL String::secret() const {
    return (BOOL) mGetAttr(MUIA_String_Secret);
}
