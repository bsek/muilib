#include "include/Notify.h"
#include <iostream>
#include <list>

Notify::Notify() : Object() {
}

Object * Notify::mApplicationObject() const {
    return (Object *) mGetAttr(MUIA_ApplicationObject);
}

struct AppMessage * Notify::appMessage() const {
    return (struct AppMessage *) mGetAttr(MUIA_AppMessage);
}

LONG Notify::helpLine() const {
    return (LONG) mGetAttr(MUIA_HelpLine);
}

void Notify::setHelpLine(LONG value) {
    setAttr(MUIA_HelpLine, (IPTR) value);
}

STRPTR Notify::helpNode() const {
    return (STRPTR) mGetAttr(MUIA_HelpNode);
}

void Notify::setHelpNode(STRPTR value) {
    setAttr(MUIA_HelpNode, (IPTR) value);
}

void Notify::setNoNotify(BOOL value) {
    setAttr(MUIA_NoNotify, (IPTR) value);
}

IPTR Notify::objectID() const {
    return (IPTR) mGetAttr(MUIA_ObjectID);
}

void Notify::setObjectID(IPTR value) {
    setAttr(MUIA_ObjectID, (IPTR) value);
}

Object* Notify::parent() const {
    return (Object *) mGetAttr(MUIA_Parent);
}

LONG Notify::revision() const {
    return (LONG) mGetAttr(MUIA_Revision);
}

IPTR Notify::userData() const {
    return (IPTR) mGetAttr(MUIA_UserData);
}

void Notify::setUserData(IPTR value) {
    setAttr(MUIA_UserData, value);
}

LONG Notify::version() const {
    return (LONG) mGetAttr(MUIA_Version);
}

IPTR Notify::exportDataspace(Object *dataspace) {
    return DoMethod(object,MUIM_Export, (IPTR)dataspace);
}

IPTR Notify::findUData(IPTR udata) {
    return DoMethod(object,MUIM_FindUData, udata);
}

IPTR Notify::getConfigItem(IPTR id, IPTR *storage) {
    return DoMethod(object,MUIM_GetConfigItem, id, storage);
}

IPTR Notify::getUData(IPTR udata, IPTR attr, IPTR *storage) {
    return DoMethod(object,MUIM_GetUData, udata, attr, storage);
}

IPTR Notify::importDataspace(Object *dataspace) {
    return DoMethod(object,MUIM_Import, (IPTR)dataspace);
}

IPTR Notify::killNotify(IPTR TrigAttr) {
    return DoMethod(object,MUIM_KillNotify, TrigAttr);
}

IPTR Notify::killNotifyObj(IPTR TrigAttr, Object *dest) {
    return DoMethod(object,MUIM_KillNotifyObj, TrigAttr, dest);
}

IPTR Notify::multiSet(std::vector<IPTR> obj) {
    auto p = createTagListFromVector<IPTR>(obj, 1);
    p.get()[0] = MUIM_MultiSet;

    return DoMethodA(object, (Msg) p.get());
}

IPTR Notify::set(IPTR attr, IPTR val) {
    return DoMethod(object,MUIM_Set, attr, val);
}

IPTR Notify::setUData(IPTR udata, IPTR attr, IPTR val) {
    return DoMethod(object,MUIM_SetUData, udata, attr, val);
}

IPTR Notify::setUDataOnce(IPTR udata, IPTR attr, IPTR val) {
    return DoMethod(object,MUIM_SetUDataOnce, udata, attr, val);
}

IPTR Notify::writeLong(IPTR val, IPTR *memory) {
    return DoMethod(object,MUIM_WriteLong, val, memory);
}

IPTR Notify::writeString(char *str, char *memory) {
    return DoMethod(object,MUIM_WriteString, (IPTR)str, memory);
}

