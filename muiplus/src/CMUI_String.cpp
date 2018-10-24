#include "include/CMUI_String.h"

CMUI_String::CMUI_String() : CMUI_Gadget() {
}

CMUI_String::CMUI_String(Object* obj) : CMUI_Gadget() {
    object = obj;
}

CMUI_String::CMUI_String(std::string label, LONG maxlen) : CMUI_Gadget() {
    object = MUI_MakeObject(MUIO_String, (IPTR) label.c_str(), (IPTR) maxlen);
}

CMUI_String& CMUI_String::operator=(Object* obj) {
    object = obj;
    return *this;
}

CMUI_String::operator IPTR() {
    return integer();
}

CMUI_String::operator const char * () {
    return contents().c_str();
}

std::string CMUI_String::accept() const {
    return (STRPTR) mGetAttr(MUIA_String_Accept);
}

void CMUI_String::setAccept(std::string value) {
    setAttr(MUIA_String_Accept, (IPTR) value.c_str());
}

std::string CMUI_String::acknowledge() const {
    return (STRPTR) mGetAttr(MUIA_String_Acknowledge);
}

BOOL CMUI_String::advanceOnCR() const {
    return (BOOL) mGetAttr(MUIA_String_AdvanceOnCR);
}

void CMUI_String::setAdvanceOnCR(BOOL value) {
    setAttr(MUIA_String_AdvanceOnCR, (IPTR) value);
}

Object * CMUI_String::attachedList() const {
    return (Object *) mGetAttr(MUIA_String_AttachedList);
}

void CMUI_String::setAttachedList(Object * value) {
    setAttr(MUIA_String_AttachedList, (IPTR) value);
}

LONG CMUI_String::bufferPos() const {
    return (LONG) mGetAttr(MUIA_String_BufferPos);
}

void CMUI_String::setBufferPos(LONG value) {
    setAttr(MUIA_String_BufferPos, (IPTR) value);
}

std::string CMUI_String::contents() const {
    return (STRPTR) mGetAttr(MUIA_String_Contents);
}

void CMUI_String::setContents(std::string value) {
    setAttr(MUIA_String_Contents, (IPTR) value.c_str());
}

LONG CMUI_String::displayPos() const {
    return (LONG) mGetAttr(MUIA_String_DisplayPos);
}

void CMUI_String::setDisplayPos(LONG value) {
    setAttr(MUIA_String_DisplayPos, (IPTR) value);
}

struct Hook * CMUI_String::editHook() const {
    return (struct Hook *) mGetAttr(MUIA_String_EditHook);
}

void CMUI_String::mSetEditHook(struct Hook * value) {
    setAttr(MUIA_String_EditHook, (IPTR) value);
}

LONG CMUI_String::format() const {
    return (LONG) mGetAttr(MUIA_String_Format);
}

IPTR CMUI_String::integer() const {
    return (IPTR) mGetAttr(MUIA_String_Integer);
}

void CMUI_String::setInteger(IPTR value) {
    setAttr(MUIA_String_Integer, (IPTR) value);
}

BOOL CMUI_String::lonelyEditHook() const {
    return (BOOL) mGetAttr(MUIA_String_LonelyEditHook);
}

void CMUI_String::setLonelyEditHook(BOOL value) {
    setAttr(MUIA_String_LonelyEditHook, (IPTR) value);
}

LONG CMUI_String::maxLen() const {
    return (LONG) mGetAttr(MUIA_String_MaxLen);
}

std::string CMUI_String::reject() const {
    return (STRPTR) mGetAttr(MUIA_String_Reject);
}

void CMUI_String::setReject(std::string value) {
    setAttr(MUIA_String_Reject, (IPTR) value.c_str());
}

BOOL CMUI_String::secret() const {
    return (BOOL) mGetAttr(MUIA_String_Secret);
}
