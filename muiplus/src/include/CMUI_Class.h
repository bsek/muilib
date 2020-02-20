#ifndef CMUI_CLASS_H
#define CMUI_CLASS_H

#include <map>
#include <functional>
#include "CMUI_Notify.h"
#include "ActionCommand.h"
//#include "CMUI_Object.h"

enum EventType {
    PRESSED,
    CHECK,
    SELECT,
    ACTIVE
};

#define CUSTOM_EVENT (TAG_USER + 20)
#define CUSTOM_MUI_CLASS (TAG_USER + 21)
#define CUSTOM_ACTION_COMMAND (TAG_USER + 22)

class CMUI_Class : public CMUI_Notify {
private:
    std::map<ULONG, void (CMUI_Class::*)() > eventIds;
    ULONG generateId();
    struct MUI_CustomClass* mcc;
    Object *classObj;

    struct MUI_CustomClass *createCustomClass(ClassID classId);
public:
    CMUI_Class();
    struct MUI_CustomClass * getMcc() const;
    void setMcc(struct MUI_CustomClass* mcc);

    const std::map<ULONG, void (CMUI_Class::*)()> &getEventIds() const;

    virtual IPTR handleDispatch(Class* cl, Object *object, Msg msg);
    virtual IPTR handleDraw(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleNew(Class *cl, Object *obj, struct opSet *msg);
    virtual IPTR handleDispose(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleSet(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleGet(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleSetup(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleCleanup(Class *cl, Object *obj, Msg msg);
    virtual IPTR handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax* msg);
    virtual IPTR handleEvent(Class *cl, Object *obj, Msg msg);

    template<typename T>
    void addEvent(Object *obj, EventType eventType, void (T::*)());//std::function<void(struct InstanceEvent*)>);
 //   bool hasEvent(ULONG eventId);

    struct MUI_CustomClass *registerClassWithId(ClassID classId);
    virtual struct MUI_CustomClass *registerClass() = 0;
};

template<typename T>
void CMUI_Class::addEvent(Object* obj, EventType eventType, void (T::*method)()) {//std::function<void(struct InstanceEvent*)> callback) {
    ULONG id = generateId();
    //eventIds[id] = method;

    if (eventType == EventType::PRESSED) {
        std::cerr << "Setting up pressed event:" << CUSTOM_EVENT << ": COMMAND: " << CUSTOM_ACTION_COMMAND << " : " << method << " on " << object << '\n';
        DoMethod(obj, MUIM_Notify, MUIA_Pressed, FALSE, object, 4, (ULONG)CUSTOM_EVENT, (ULONG)CUSTOM_ACTION_COMMAND, (IPTR)id , (IPTR)TAG_DONE);
    }
/*
    if (eventType == EventType::ACTIVE) {
        std::cerr << "Setting up active event:" << CUSTOM_EVENT << ":" << id << " on " << object << '\n';
        DoMethod(obj, MUIM_Notify, MUIA_Cycle_Active, MUIV_EveryTime, object, 3, CUSTOM_EVENT, id, MUIV_TriggerValue);
    }
*/
}


//OM_NEW; /* you dont know anything about display environment here */
//{
//MUIM_Setup;      /* information about display, still no window */
//MUIM_AskMinMax;  /* tell me your min/max dimensions */
//[ window is opened here ]
//{
//MUIM_Show;    /* add yourself to the window, don't yet draw */
//{
//MUIM_Draw;     /* draw yourself */
//}
//MUIM_Hide;    /* remove yourself from the window */
//}
//[ window is closed here ]
//MUIM_Cleanup;    /* free any display dependant data */
//}
//OM_DISPOSE; /* kill yourself completely */

#endif
