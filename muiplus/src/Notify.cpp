#include "include/Notify.h"
#include "include/RootClass.h"
#include <list>

Zune::Notify::Notify() : RootClass() {
}

Object *Zune::Notify::applicationObject() const {
    return (Object *) mGetAttr(MUIA_ApplicationObject);
}

struct AppMessage * Zune::Notify::appMessage() const {
    return reinterpret_cast<AppMessage*>(mGetAttr(MUIA_AppMessage));
}

LONG Zune::Notify::helpLine() const {
    return static_cast<LONG>(mGetAttr(MUIA_HelpLine));
}

void Zune::Notify::setHelpLine(LONG value) {
    setOrStore(MUIA_HelpLine, static_cast<IPTR>(value));
}

std::string Zune::Notify::helpNode() const {
    return (STRPTR) mGetAttr(MUIA_HelpNode);
}

void Zune::Notify::setHelpNode(std::string &value) {
    setOrStore(MUIA_HelpNode, reinterpret_cast<IPTR>(value.c_str()));
}

void Zune::Notify::setNoNotify(BOOL value) {
    setAttr(MUIA_NoNotify, static_cast<IPTR>(value));
}

ULONG Zune::Notify::objectID() const {
    return static_cast<ULONG>(mGetAttr(MUIA_ObjectID));
}

void Zune::Notify::setObjectID(ULONG value) {
    setOrStore(MUIA_ObjectID, (IPTR) value);
}

Object *Zune::Notify::parent() const {
    return reinterpret_cast<Object *>(mGetAttr(MUIA_Parent));
}

LONG Zune::Notify::revision() const {
    return static_cast<LONG>(mGetAttr(MUIA_Revision));
}

ULONG Zune::Notify::userData() const {
    return static_cast<ULONG>(mGetAttr(MUIA_UserData));
}

void Zune::Notify::setUserData(ULONG value) {
    setOrStore(MUIA_UserData, static_cast<IPTR>(value));
}

LONG Zune::Notify::version() const {
    return static_cast<LONG>(mGetAttr(MUIA_Version));
}

IPTR Zune::Notify::exportDataspace(Object *dataspace) {
    return DoMethod(object, MUIM_Export, reinterpret_cast<IPTR>(dataspace));
}

IPTR Zune::Notify::findUData(IPTR udata) {
    return DoMethod(object, MUIM_FindUData, udata);
}

IPTR Zune::Notify::getConfigItem(ULONG id, IPTR *storage) {
    return DoMethod(object, MUIM_GetConfigItem, static_cast<IPTR>(id), reinterpret_cast<IPTR>(storage));
}

IPTR Zune::Notify::getUData(ULONG udata, ULONG attr, IPTR *storage) {
    return DoMethod(object, MUIM_GetUData, static_cast<IPTR>(udata), static_cast<IPTR>(attr), reinterpret_cast<IPTR>(storage));
}

IPTR Zune::Notify::importDataspace(Object *dataspace) {
    return DoMethod(object, MUIM_Import, reinterpret_cast<IPTR>(dataspace));
}

IPTR Zune::Notify::killNotify(ULONG TrigAttr) {
    return DoMethod(object, MUIM_KillNotify, static_cast<IPTR>(TrigAttr));
}

IPTR Zune::Notify::killNotifyObj(ULONG TrigAttr, Object *dest) {
    return DoMethod(object, MUIM_KillNotifyObj, static_cast<IPTR>(TrigAttr), reinterpret_cast<IPTR>(dest));
}

IPTR Zune::Notify::set(ULONG attr, IPTR val) {
    return DoMethod(object, MUIM_Set, static_cast<IPTR>(attr), val);
}

IPTR Zune::Notify::setUData(IPTR udata, ULONG attr, IPTR val) {
    return DoMethod(object, MUIM_SetUData, udata, static_cast<IPTR>(attr), val);
}

IPTR Zune::Notify::setUDataOnce(IPTR udata, ULONG attr, IPTR val) {
    return DoMethod(object, MUIM_SetUDataOnce, udata, static_cast<IPTR>(attr), val);
}

IPTR Zune::Notify::writeLong(ULONG val, ULONG *memory) {
    return DoMethod(object, MUIM_WriteLong, static_cast<IPTR>(val), reinterpret_cast<IPTR>(memory));
}

IPTR Zune::Notify::writeString(char *str, char *memory) {
    return DoMethod(object, MUIM_WriteString, reinterpret_cast<IPTR>(str), reinterpret_cast<IPTR>(memory));
}

Zune::Notify::Notify(Object *obj) {
    object = obj;
}

