#ifndef CMUI_NOTIFY_H
#define	CMUI_NOTIFY_H

#include "CMUI_Object.h"
#include <initializer_list>

class CMUI_Notify : public CMUI_Object {
public:
    Object *mApplicationObject() const;
    struct AppMessage * appMessage() const;
    LONG helpLine() const;
    void setHelpLine(LONG value);
    STRPTR helpNode() const;
    void setHelpNode(STRPTR value);
    void setNoNotify(BOOL value);
    IPTR objectID() const;
    void setObjectID(IPTR value);
    Object * parent() const;
    LONG revision() const;
    IPTR userData() const;
    void setUserData(IPTR value);
    LONG version() const;
    template<typename... Args>
    IPTR mCallHook(struct Hook *Hook, Args... params);
    IPTR exportDataspace(Object *dataspace);
    IPTR findUData(IPTR udata);
    IPTR getConfigItem(IPTR id, IPTR *storage);
    IPTR getUData(IPTR udata, IPTR attr, IPTR *storage);
    IPTR importDataspace(Object *dataspace);
    IPTR killNotify(IPTR TrigAttr);
    IPTR killNotifyObj(IPTR TrigAttr, Object *dest);
    IPTR multiSet(std::vector<IPTR> obj);
    template<typename... Args>
    IPTR noNotifySet(IPTR attr, char *format, Args... val);
    template<typename... Args>
    IPTR notify(Args... params);
    IPTR set(IPTR attr, IPTR val);
    template<typename... Args>
    IPTR setAsString(IPTR attr, char *format, Args... val);
    IPTR setUData(IPTR udata, IPTR attr, IPTR val);
    IPTR setUDataOnce(IPTR udata, IPTR attr, IPTR val);
    IPTR writeLong(IPTR val, IPTR *memory);
    IPTR writeString(char *str, char *memory);
protected:
    CMUI_Notify();
};

template<typename... Args>
IPTR CMUI_Notify::mCallHook(struct Hook *Hook, Args... params) {
    auto p = createTagListFromVector<IPTR>({params...}, 2);
    p.get()[0] = MUIM_CallHook;
    p.get()[1] = (IPTR)Hook;

    return DoMethodA(object, (Msg) p.get());
}

template<typename... Args>
IPTR CMUI_Notify::noNotifySet(IPTR attr, char *format, Args... val) {
    auto p = createTagListFromVector<IPTR>({val...}, 3);
    p.get()[0] = MUIM_NoNotifySet;
    p.get()[1] = attr;
    p.get()[2] = (IPTR)format;

    return DoMethodA(object, (Msg) p.get());
}

template<typename... Args>
IPTR CMUI_Notify::setAsString(IPTR attr, char *format, Args... val) {
    auto p = createTagListFromVector<IPTR>({val...}, 3);
    p.get()[0] = MUIM_SetAsString;
    p.get()[1] = attr;
    p.get()[2] = (IPTR)format;

    return DoMethodA(object, (Msg) p.get());
}

template<typename... Args>
IPTR CMUI_Notify::notify(Args... params) {
    auto p = createTagListFromVector<IPTR>({params...}, 1);
    p.get()[0] = MUIM_Notify;

    return DoMethodA(object, (Msg) p.get());
}

#endif	/* CMUI_NOTIFY_H */

