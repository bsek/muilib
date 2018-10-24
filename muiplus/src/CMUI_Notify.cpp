#include "include/CMUI_Notify.h"
#include <iostream>
#include <list>

CMUI_Notify::CMUI_Notify() : CMUI_Object() {
}

Object * CMUI_Notify::mApplicationObject() const {
    return (Object *) mGetAttr(MUIA_ApplicationObject);
}

struct AppMessage * CMUI_Notify::appMessage() const {
    return (struct AppMessage *) mGetAttr(MUIA_AppMessage);
}

LONG CMUI_Notify::helpLine() const {
    return (LONG) mGetAttr(MUIA_HelpLine);
}

void CMUI_Notify::setHelpLine(LONG value) {
    setAttr(MUIA_HelpLine, (IPTR) value);
}

STRPTR CMUI_Notify::helpNode() const {
    return (STRPTR) mGetAttr(MUIA_HelpNode);
}

void CMUI_Notify::setHelpNode(STRPTR value) {
    setAttr(MUIA_HelpNode, (IPTR) value);
}

void CMUI_Notify::setNoNotify(BOOL value) {
    setAttr(MUIA_NoNotify, (IPTR) value);
}

IPTR CMUI_Notify::objectID() const {
    return (IPTR) mGetAttr(MUIA_ObjectID);
}

void CMUI_Notify::setObjectID(IPTR value) {
    setAttr(MUIA_ObjectID, (IPTR) value);
}

Object* CMUI_Notify::parent() const {
    return (Object *) mGetAttr(MUIA_Parent);
}

LONG CMUI_Notify::revision() const {
    return (LONG) mGetAttr(MUIA_Revision);
}

IPTR CMUI_Notify::userData() const {
    return (IPTR) mGetAttr(MUIA_UserData);
}

void CMUI_Notify::setUserData(IPTR value) {
    setAttr(MUIA_UserData, value);
}

LONG CMUI_Notify::version() const {
    return (LONG) mGetAttr(MUIA_Version);
}

IPTR CMUI_Notify::exportDataspace(Object *dataspace) {
    return DoMethod(object,MUIM_Export, (IPTR)dataspace);
}

IPTR CMUI_Notify::findUData(IPTR udata) {
    return DoMethod(object,MUIM_FindUData, udata);
}

IPTR CMUI_Notify::getConfigItem(IPTR id, IPTR *storage) {
    return DoMethod(object,MUIM_GetConfigItem, id, storage);
}

IPTR CMUI_Notify::getUData(IPTR udata, IPTR attr, IPTR *storage) {
    return DoMethod(object,MUIM_GetUData, udata, attr, storage);
}

IPTR CMUI_Notify::importDataspace(Object *dataspace) {
    return DoMethod(object,MUIM_Import, (IPTR)dataspace);
}

IPTR CMUI_Notify::killNotify(IPTR TrigAttr) {
    return DoMethod(object,MUIM_KillNotify, TrigAttr);
}

IPTR CMUI_Notify::killNotifyObj(IPTR TrigAttr, Object *dest) {
    return DoMethod(object,MUIM_KillNotifyObj, TrigAttr, dest);
}

IPTR CMUI_Notify::multiSet(std::vector<IPTR> obj) {
    auto p = createTagListFromVector<IPTR>(obj, 1);
    p.get()[0] = MUIM_MultiSet;

    return DoMethodA(object, (Msg) p.get());
}

IPTR CMUI_Notify::set(IPTR attr, IPTR val) {
    return DoMethod(object,MUIM_Set, attr, val);
}

IPTR CMUI_Notify::setUData(IPTR udata, IPTR attr, IPTR val) {
    return DoMethod(object,MUIM_SetUData, udata, attr, val);
}

IPTR CMUI_Notify::setUDataOnce(IPTR udata, IPTR attr, IPTR val) {
    return DoMethod(object,MUIM_SetUDataOnce, udata, attr, val);
}

IPTR CMUI_Notify::writeLong(IPTR val, IPTR *memory) {
    return DoMethod(object,MUIM_WriteLong, val, memory);
}

IPTR CMUI_Notify::writeString(char *str, char *memory) {
    return DoMethod(object,MUIM_WriteString, (IPTR)str, memory);
}

