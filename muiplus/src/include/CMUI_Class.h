#ifndef CMUI_CLASS_H
#define CMUI_CLASS_H

#include <map>
#include <functional>
#include "CMUI_Notify.h"
#include "CMUI_Object.h"

enum EventType {
    PRESSED,
    CHECK
};

class CMUI_Class : public CMUI_Notify {
private:
    std::map<ULONG, std::function<void()>> eventIds;
    ULONG generateId();
    struct MUI_CustomClass* mcc;
    Object *classObj;

    struct MUI_CustomClass *createCustomClass(ClassID classId);
public:
    CMUI_Class();
    struct MUI_CustomClass * getMcc() const;
    void setMcc(struct MUI_CustomClass* mcc);

    const std::map<ULONG, std::function<void()>> &getEventIds() const;

    virtual ULONG handleDispatch(Class* cl, Object *object, Msg msg);
    virtual IPTR handleDraw(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleNew(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleDispose(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleSet(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleGet(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleSetup(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleCleanup(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax* msg);
    virtual IPTR handleEvent(Class *cl, Object *obj, Msg msg);

    void addEvent(CMUI_Object &obj, EventType eventType, std::function<void()>);
    bool hasEvent(ULONG eventId);

    struct MUI_CustomClass *registerClassWithId(ClassID classId);
    virtual struct MUI_CustomClass *registerClass() = 0;
};


#endif
