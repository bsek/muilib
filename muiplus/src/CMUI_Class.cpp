#include "include/CMUI_Class.h"
#include <iostream>
#include <algorithm>
#include <SDI/SDI_compiler.h>
#include <SDI/SDI_hook.h>
#include <SDI/SDI_stdarg.h>

struct InstanceData {
    CMUI_Class *classObj;
};

ULONG generalDispatcher(struct IClass *cl, Object *object, Msg msg) {
    Object* obj = object;

    if (msg->MethodID == OM_NEW) {
        struct TagItem *tags = ((struct opSet *)msg)->ops_AttrList;

        CMUI_Class *clazz = (CMUI_Class*) GetTagData(CUSTOM_MUI_CLASS, (IPTR)" ",tags);

        return std::invoke(&CMUI_Class::handleDispatch, clazz, cl, obj, msg);
    }

    InstanceData *instanceData = (InstanceData *) INST_DATA(cl, obj);

    if (instanceData->classObj != nullptr) {
        return std::invoke(&CMUI_Class::handleDispatch, instanceData->classObj, cl, obj, msg);
    }

    return DoSuperMethodA(cl, obj, msg);
}

CMUI_Class::CMUI_Class() {
}


void CMUI_Class::setMcc(struct MUI_CustomClass *mcc) {
    this->mcc = mcc;
}

struct MUI_CustomClass* CMUI_Class::getMcc() const {
    return mcc;
}


bool CMUI_Class::hasEvent(ULONG eventId) {
    return (eventIds.find(eventId) != eventIds.end());
}

ULONG CMUI_Class::generateId() {
    return EVENT_ID_START++;
}

struct MUI_CustomClass *
CMUI_Class::createCustomClass(ClassID classId) {
    auto mcc = MUI_CreateCustomClass(NULL, classId, NULL, sizeof(InstanceData), (APTR) generalDispatcher);

    if (!mcc) {
        std::cout << "Cannot create custom class" << std::endl;
        exit(1);
    }

    this->object = (Object*) NewObject(mcc->mcc_Class, NULL, CUSTOM_MUI_CLASS, (IPTR) this, TAG_DONE);

    if (this->object) {
        // Save a reference to this class in the object´s instance data
        InstanceData *instanceData = (InstanceData *) INST_DATA(mcc->mcc_Class, this->object);
        instanceData->classObj = this;
    }

    setMcc(mcc);
    return mcc;
}

struct MUI_CustomClass *
CMUI_Class::registerClassWithId(ClassID classId) {
    return createCustomClass(classId);
}


IPTR CMUI_Class::handleDraw(struct IClass *cl, Object *obj, struct MUIP_Draw *msg) {
    // std::cout << "HandleDraw" << std::endl;
    return DoSuperMethodA(cl, obj, (Msg)msg);
}

IPTR CMUI_Class::handleNew(struct IClass *cl, Object *obj, struct opSet *msg) {
    std::cout << "HandleNew" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleDispose(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleDispose" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleSet(struct IClass *cl, Object *obj, Msg msg) {
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleGet(struct IClass *cl, Object *obj, Msg msg) {
    //std::cout << "HandleGet" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleSetup(struct IClass *cl, Object *obj, Msg msg) {
    //std::cout << "HandleSetup" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleCleanup(struct IClass *cl, Object *obj, Msg msg) {
    //std::cout << "HandleCleanup" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Class::handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax *msg) {
    //std::cout << "HandleAskMinMax" << std::endl;
    return DoSuperMethodA(cl, obj, (Msg) msg);
}

struct Data {
    ULONG methodId;
    IPTR tag;
    IPTR value;
};

IPTR CMUI_Class::handleEvent(struct IClass *cl, Object *obj, Msg msg) {
    struct Data *data = (Data*)msg;

    auto id = data->tag;
    std::cout << "ID: " << id << std::endl;

    if (hasEvent(id)) {
        std::cout << "Found" << std::endl;
        auto event = (this->eventIds[id]);
        event->invoke();
    }


 /*   struct InstanceEvent *event = (struct InstanceEvent*) msg;
    IPTR text = event->text;
    std::cout << "HandleEvent " << " msg:" << event->eventId << " : " << event->methodId <<  " : " << text << std::endl;
    auto id = event->eventId;

    if (hasEvent(id)) {
        std::function<void(struct InstanceEvent*)> callback = eventIds[id];
        callback(event);
    }*/

    return DoSuperMethodA(cl, obj, (Msg)msg);
}

IPTR CMUI_Class::handleDispatch(struct IClass *cl, Object *obj, Msg msg) {
   // std::cout << "HandleDispatch with MethodId: " << msg->MethodID << " obj: " << obj << std::endl;
    /*
     * Watch out for methods we do understand.
    */
    switch (msg->MethodID) {
        case OM_NEW:
            return (IPTR) handleNew(cl, obj, (struct opSet *) msg);
        case MUIM_AskMinMax:
            return (IPTR) handleAskMinMax(cl, obj, (struct MUIP_AskMinMax *) msg);
        case MUIM_Cleanup:
            return (IPTR) handleCleanup(cl, obj, msg);
        case MUIM_Setup:
            return (IPTR) handleSetup(cl, obj, msg);
        case MUIM_Draw:
            return (IPTR) handleDraw(cl, obj, (struct MUIP_Draw *)msg);
        case OM_GET:
            return (IPTR) handleGet(cl, obj, msg);
        case OM_SET:
            return (IPTR) handleSet(cl, obj, msg);
        case OM_DISPOSE:
            return (IPTR) handleDispose(cl, obj, msg);
        case CUSTOM_EVENT:
            return (IPTR) handleEvent(cl, obj, msg);
    }

    return DoSuperMethodA(cl, obj, msg);
}
