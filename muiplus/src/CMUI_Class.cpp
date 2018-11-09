#include "include/CMUI_Class.h"
#include <iostream>
#include <algorithm>

struct InstanceData {
    CMUI_Class *classObj;
};

ULONG generalDispatcher(struct IClass *cl, Object *obj, Msg msg){
    InstanceData *instanceData;

    if (msg->MethodID == OM_NEW) {
        obj = (Object *) DoSuperMethodA (cl, obj, msg);
        if (!obj) {
            return FALSE;   
        }
    }

    instanceData = (InstanceData *) INST_DATA(cl, obj);

    if (instanceData->classObj != nullptr) {
        return std::invoke(&CMUI_Class::handleDispatch, instanceData->classObj, cl, obj, msg);
    }

    return DoSuperMethodA (cl, obj, msg);
}

CMUI_Class::CMUI_Class() {
}


void CMUI_Class::setMcc(struct MUI_CustomClass *mcc) {
    this->mcc = mcc;
}

struct MUI_CustomClass *CMUI_Class::getMcc() const {
    return mcc;
}

void CMUI_Class::addEvent(CMUI_Object &obj, EventType eventType, std::function<void()> callback) {
    ULONG id = generateId();
    eventIds[id] = callback;

    if (eventType == PRESSED) {
        DoMethod(*obj, MUIM_Notify, MUIA_Pressed, FALSE, object, 1, id);
    }
}

bool CMUI_Class::hasEvent(ULONG eventId) {
    auto search = eventIds.find(eventId);
    if (search != eventIds.end()) {
        return true;
    }
    return false;
}

ULONG CMUI_Class::generateId() {
    auto val = (TAG_USER + 20);
    val += rand();
    return (ULONG) val;
}

const std::map<ULONG, std::function<void()>> &CMUI_Class::getEventIds() const {
    return eventIds;
}

struct MUI_CustomClass *
CMUI_Class::createCustomClass(ClassID classId) {
    std::cout << "Creating custom class with id:" << classId << std::endl;
    
    auto mcc = MUI_CreateCustomClass(NULL, classId, NULL, sizeof(InformationObject), (APTR) generalDispatcher);
    
    if (!mcc) {
        std::cout << "Cannot create custom class" << std::endl;
        exit(1);
    }
    
    this->object = (Object*) NewObject(mcc->mcc_Class, NULL, TAG_DONE);

    if (this->object) {
        // Save a reference to this class in the object´s instance data 
        InstanceData *instanceData = (InstanceData *) INST_DATA(mcc->mcc_Class, this->object);
        instanceData->objx = this;
    }

    std::cout << "Class created: " << mcc << std::endl;

    setMcc(mcc);
    return mcc;
}

struct MUI_CustomClass *
CMUI_Class::registerClassWithId(ClassID classId) {
    return createCustomClass(classId);
}


IPTR CMUI_Class::handleDraw(struct IClass *cl, Object *obj, Msg msg) {
    // std::cout << "HandleDraw" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleNew(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleNew" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleDispose(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleDispose" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleSet(struct IClass *cl, Object *obj, Msg msg) {
    // std::cout << "HandleSet" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleGet(struct IClass *cl, Object *obj, Msg msg) {
    //  std::cout << "HandleGet" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleSetup(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleSetup" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleCleanup(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleCleanup" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax *msg) {
    std::cout << "HandleAskMinMax" << std::endl;
    return DoSuperMethodA(cl, obj, (Msg) msg);
}

IPTR CMUI_Class::handleEvent(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleEvent" << std::endl;
    auto id = msg->MethodID;
    std::function<void()> callback = eventIds[id];
    callback();

    return DoSuperMethodA(cl, obj, msg);
}


ULONG CMUI_Class::handleDispatch(struct IClass *cl, Object *obj, Msg msg) {
    //std::cout << "HandleDispatch with MethodId: " << msg->MethodID << " obj: " << obj << std::endl;
    /*
     * Watch out for methods we do understand.
    */
    switch (msg->MethodID) {
        case MUIM_AskMinMax:
            return (IPTR) handleAskMinMax(cl, obj, (struct MUIP_AskMinMax *) msg);
        case MUIM_Cleanup:
            return (IPTR) handleCleanup(cl, obj, msg);
        case MUIM_Setup:
            return (IPTR) handleSetup(cl, obj, msg);
        case MUIM_Draw:
            return (IPTR) handleDraw(cl, obj, msg);
        case OM_GET:
            return (IPTR) handleGet(cl, obj, msg);
        case OM_SET:
            return (IPTR) handleSet(cl, obj, msg);
        case OM_DISPOSE:
            return (IPTR) handleDispose(cl, obj, msg);

    }

    if (hasEvent(msg->MethodID)) {
        return handleEvent(cl, obj, msg);
    }

    return DoSuperMethodA(cl, obj, msg);
}
