#include "include/Notify.h"
#include "include/ZuneObject.h"
#include <iostream>
#include <list>

Zune::Notify::Notify() : ZuneObject() {
}

Object *Zune::Notify::mApplicationObject() const {
    return (Object *) mGetAttr(MUIA_ApplicationObject);
}

IPTR Zune::Notify::appMessage() const {
    return mGetAttr(MUIA_AppMessage);
}

LONG Zune::Notify::helpLine() const {
    return (LONG) mGetAttr(MUIA_HelpLine);
}

void Zune::Notify::setHelpLine(LONG value) {
    setAttr(MUIA_HelpLine, (IPTR) value);
}

STRPTR Zune::Notify::helpNode() const {
    return (STRPTR) mGetAttr(MUIA_HelpNode);
}

void Zune::Notify::setHelpNode(STRPTR value) {
    setAttr(MUIA_HelpNode, (IPTR) value);
}

void Zune::Notify::setNoNotify(BOOL value) {
    setAttr(MUIA_NoNotify, (IPTR) value);
}

IPTR Zune::Notify::objectID() const {
    return (IPTR) mGetAttr(MUIA_ObjectID);
}

void Zune::Notify::setObjectID(IPTR value) {
    setAttr(MUIA_ObjectID, (IPTR) value);
}

Object *Zune::Notify::parent() const {
    return (Object *) mGetAttr(MUIA_Parent);
}

LONG Zune::Notify::revision() const {
    return (LONG) mGetAttr(MUIA_Revision);
}

IPTR Zune::Notify::userData() const {
    return (IPTR) mGetAttr(MUIA_UserData);
}

void Zune::Notify::setUserData(IPTR value) {
    setAttr(MUIA_UserData, value);
}

LONG Zune::Notify::version() const {
    return (LONG) mGetAttr(MUIA_Version);
}

IPTR Zune::Notify::exportDataspace(Object *dataspace) {
    return DoMethod(object, MUIM_Export, (IPTR) dataspace);
}

IPTR Zune::Notify::findUData(IPTR udata) {
    return DoMethod(object, MUIM_FindUData, udata);
}

IPTR Zune::Notify::getConfigItem(IPTR id, IPTR *storage) {
    return DoMethod(object, MUIM_GetConfigItem, id, storage);
}

IPTR Zune::Notify::getUData(IPTR udata, IPTR attr, IPTR *storage) {
    return DoMethod(object, MUIM_GetUData, udata, attr, storage);
}

IPTR Zune::Notify::importDataspace(Object *dataspace) {
    return DoMethod(object, MUIM_Import, (IPTR) dataspace);
}

IPTR Zune::Notify::killNotify(IPTR TrigAttr) {
    return DoMethod(object, MUIM_KillNotify, TrigAttr);
}

IPTR Zune::Notify::killNotifyObj(IPTR TrigAttr, Object *dest) {
    return DoMethod(object, MUIM_KillNotifyObj, TrigAttr, dest);
}

IPTR Zune::Notify::multiSet(std::vector<IPTR> obj) {
    auto p = createTagListFromVector<IPTR>(obj, 1);
    p.get()[0] = MUIM_MultiSet;

    return DoMethodA(object, (Msg) p.get());
}

IPTR Zune::Notify::set(IPTR attr, IPTR val) {
    return DoMethod(object, MUIM_Set, attr, val);
}

IPTR Zune::Notify::setUData(IPTR udata, IPTR attr, IPTR val) {
    return DoMethod(object, MUIM_SetUData, udata, attr, val);
}

IPTR Zune::Notify::setUDataOnce(IPTR udata, IPTR attr, IPTR val) {
    return DoMethod(object, MUIM_SetUDataOnce, udata, attr, val);
}

IPTR Zune::Notify::writeLong(IPTR val, IPTR *memory) {
    return DoMethod(object, MUIM_WriteLong, val, memory);
}

IPTR Zune::Notify::writeString(char *str, char *memory) {
    return DoMethod(object, MUIM_WriteString, (IPTR) str, memory);
}

