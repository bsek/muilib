#include "include/CMUI_Area.h"

#include <iostream>
#include <algorithm>
#include <SDI/SDI_compiler.h>
#include <SDI/SDI_hook.h>
#include <SDI/SDI_stdarg.h>

struct InstanceData {
    CMUI_Area *classObj;
};

struct Data {
    ULONG methodId;
    IPTR tag;
    IPTR value;
};

IPTR generalDispatcher(struct IClass *cl, Object *obj, Msg msg) {
    if (msg->MethodID == OM_NEW) {
        struct TagItem *tags = ((struct opSet *) msg)->ops_AttrList;
        CMUI_Area *clazz = (CMUI_Area *) GetTagData(CUSTOM_MUI_CLASS, (IPTR) " ", tags);
        Object* instance = (Object*) std::invoke(&CMUI_Area::handleDispatch, clazz, cl, obj, msg);

        // Save a reference to the class instance in the object´s instance data
        InstanceData *instanceData = (InstanceData *) INST_DATA(cl, instance);
        instanceData->classObj = clazz;

        return (IPTR) instance;
    }

    InstanceData *instanceData = (InstanceData *) INST_DATA(cl, obj);

    if (instanceData->classObj != nullptr) {
        return std::invoke(&CMUI_Area::handleDispatch, instanceData->classObj, cl, obj, msg);
    }

    return DoSuperMethodA(cl, obj, msg);
}

CMUI_Area::CMUI_Area() {}

void CMUI_Area::setFixWidth(LONG value) {
    setAttr(MUIA_FixWidth, (IPTR) value);
}

void CMUI_Area::setFixHeight(LONG value) {
    setAttr(MUIA_FixHeight, (IPTR) value);
}

LONG CMUI_Area::fixHeigth() const {
    return (LONG) mGetAttr(MUIA_FixHeight);
}

LONG CMUI_Area::fixWidth() const {
    return (LONG) mGetAttr(MUIA_FixWidth);
}

void CMUI_Area::setBackground(LONG value) {
    setAttr(MUIA_Background, (IPTR) value);
}

LONG CMUI_Area::bottomEdge() const {
    return (LONG) mGetAttr(MUIA_BottomEdge);
}

Object * CMUI_Area::contextMenu() const {
    return (Object *) mGetAttr(MUIA_ContextMenu);
}

void CMUI_Area::setContextMenu(Object * value) {
    setAttr(MUIA_ContextMenu, (IPTR) value);
}

Object * CMUI_Area::contextMenuTrigger() const {
    return (Object *) mGetAttr(MUIA_ContextMenuTrigger);
}

char CMUI_Area::controlChar() const {
    return (char) mGetAttr(MUIA_ControlChar);
}

void CMUI_Area::setControlChar(char value) {
    setAttr(MUIA_ControlChar, (IPTR) value);
}

LONG CMUI_Area::cycleChain() const {
    return (LONG) mGetAttr(MUIA_CycleChain);
}

void CMUI_Area::setCycleChain(LONG value) {
    setAttr(MUIA_CycleChain, (IPTR) value);
}

BOOL CMUI_Area::disabled() const {
    return (BOOL) mGetAttr(MUIA_Disabled);
}

void CMUI_Area::setDisabled(BOOL value) {
    setAttr(MUIA_Disabled, (IPTR) value);
}

BOOL CMUI_Area::draggable() const {
    return (BOOL) mGetAttr(MUIA_Draggable);
}

void CMUI_Area::setDraggable(BOOL value) {
    setAttr(MUIA_Draggable, (IPTR) value);
}

BOOL CMUI_Area::dropable() const {
    return (BOOL) mGetAttr(MUIA_Dropable);
}

void CMUI_Area::setDropable(BOOL value) {
    setAttr(MUIA_Dropable, (IPTR) value);
}

void CMUI_Area::setFillArea(BOOL value) {
    setAttr(MUIA_FillArea, (IPTR) value);
}

struct TextFont * CMUI_Area::font() const {
    return (struct TextFont *) mGetAttr(MUIA_Font);
}

LONG CMUI_Area::height() const {
    return (LONG) mGetAttr(MUIA_Height);
}

LONG CMUI_Area::horizDisappear() const {
    return (LONG) mGetAttr(MUIA_HorizDisappear);
}

void CMUI_Area::setHorizDisappear(LONG value) {
    setAttr(MUIA_HorizDisappear, (IPTR) value);
}

WORD CMUI_Area::horizWeight() const {
    return (WORD) mGetAttr(MUIA_HorizWeight);
}

void CMUI_Area::setHorizWeight(WORD value) {
    setAttr(MUIA_HorizWeight, (IPTR) value);
}

LONG CMUI_Area::innerBottom() const {
    return (LONG) mGetAttr(MUIA_InnerBottom);
}

LONG CMUI_Area::innerLeft() const {
    return (LONG) mGetAttr(MUIA_InnerLeft);
}

LONG CMUI_Area::innerRight() const {
    return (LONG) mGetAttr(MUIA_InnerRight);
}

LONG CMUI_Area::innerTop() const {
    return (LONG) mGetAttr(MUIA_InnerTop);
}

LONG CMUI_Area::leftEdge() const {
    return (LONG) mGetAttr(MUIA_LeftEdge);
}

BOOL CMUI_Area::pressed() const {
    return (BOOL) mGetAttr(MUIA_Pressed);
}

LONG CMUI_Area::rightEdge() const {
    return (LONG) mGetAttr(MUIA_RightEdge);
}

BOOL CMUI_Area::selected() const {
    return (BOOL) mGetAttr(MUIA_Selected);
}

void CMUI_Area::setSelected(BOOL value) {
    setAttr(MUIA_Selected, (IPTR) value);
}

STRPTR CMUI_Area::shortHelp() const {
    return (STRPTR) mGetAttr(MUIA_ShortHelp);
}

void CMUI_Area::setShortHelp(STRPTR value) {
    setAttr(MUIA_ShortHelp, (IPTR) value);
}

BOOL CMUI_Area::showMe() const {
    return (BOOL) mGetAttr(MUIA_ShowMe);
}

void CMUI_Area::setShowMe(BOOL value) {
    setAttr(MUIA_ShowMe, (IPTR) value);
}

LONG CMUI_Area::timer() const {
    return (LONG) mGetAttr(MUIA_Timer);
}

LONG CMUI_Area::topEdge() const {
    return (LONG) mGetAttr(MUIA_TopEdge);
}

LONG CMUI_Area::vertDisappear() const {
    return (LONG) mGetAttr(MUIA_VertDisappear);
}

void CMUI_Area::setVertDisappear(LONG value) {
    setAttr(MUIA_VertDisappear, (IPTR) value);
}

WORD CMUI_Area::vertWeight() const {
    return (WORD) mGetAttr(MUIA_VertWeight);
}

void CMUI_Area::setVertWeight(WORD value) {
    setAttr(MUIA_VertWeight, (IPTR) value);
}

LONG CMUI_Area::width() const {
    return (LONG) mGetAttr(MUIA_Width);
}

struct Window * CMUI_Area::window() const {
    return (struct Window *) mGetAttr(MUIA_Window);
}

Object * CMUI_Area::windowObject() const {
    return (Object *) mGetAttr(MUIA_WindowObject);
}

IPTR CMUI_Area::handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax* msg) {
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleCleanup(Class *cl, Object *obj, Msg msg) {
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleContextMenuBuild(LONG mx, LONG my) {
    return DoMethod(object,MUIM_ContextMenuBuild, mx, my);
}

IPTR CMUI_Area::handleContextMenuChoice(Object * item) {
    return DoMethod(object,MUIM_ContextMenuChoice, (IPTR)item);
}

IPTR CMUI_Area::handleCreateBubble(LONG x, LONG y, char * txt, IPTR flags) {
    return DoMethod(object,MUIM_CreateBubble, x, y, txt, flags);
}

IPTR CMUI_Area::handleCreateShortHelp(LONG mx, LONG my) {
    return DoMethod(object,MUIM_CreateShortHelp, mx, my);
}

IPTR CMUI_Area::handleDeleteBubble(IPTR bubble) {
    return DoMethod(object,MUIM_DeleteBubble, bubble);
}

IPTR CMUI_Area::handleDeleteShortHelp(STRPTR help) {
    return DoMethod(object,MUIM_DeleteShortHelp,  (IPTR)help);
}

IPTR CMUI_Area::hide() {
    return DoMethod(object,MUIM_Hide);
}

IPTR CMUI_Area::show() {
    return DoMethod(object,MUIM_Show);
}

Class * CMUI_Area::registerClass() {
    return registerClassWithId((ClassID) MUIC_Area);
}

void CMUI_Area::addEventHandler(struct MUI_EventHandlerNode &ehNode) {
    DoMethod(windowObject(), MUIM_Window_AddEventHandler, &ehNode);
}

void CMUI_Area::removeEventHandler(struct MUI_EventHandlerNode &ehNode) {
    DoMethod(windowObject(), MUIM_Window_RemEventHandler, &ehNode);
}

void CMUI_Area::setMcc(Class *mcc) {
    this->mcc = mcc;
}

Class *CMUI_Area::getMcc() const {
    return mcc;
}

bool CMUI_Area::hasEvent(ULONG eventId) {
    return (eventIds.find(eventId) != eventIds.end());
}

ULONG CMUI_Area::generateId() {
    return EVENT_ID_START++;
}

Class *
CMUI_Area::createCustomClass(ClassID classId) {
    auto mcc = MUI_CreateCustomClass(NULL, classId, NULL, sizeof(InstanceData), (APTR) generalDispatcher);

    if (!mcc) {
        std::cout << "Cannot create custom class" << std::endl;
        exit(RETURN_ERROR);
    }

    Object *object = (Object *) NewObject(mcc->mcc_Class, NULL, CUSTOM_MUI_CLASS, (IPTR) this, TAG_DONE);

    if (!object) {
        std::cerr << "Failed to create MUI object" << std::endl;
        exit(RETURN_ERROR);
    }

    this->object = object;
    setMcc(mcc->mcc_Class);
    return mcc->mcc_Class;
}

Class *
CMUI_Area::registerClassWithId(ClassID classId) {
    return createCustomClass(classId);
}


IPTR CMUI_Area::handleDraw(struct IClass *cl, Object *obj, struct MUIP_Draw *msg) {
    // std::cout << "HandleDraw" << std::endl;
    return DoSuperMethodA(cl, obj, (Msg) msg);
}

IPTR CMUI_Area::handleNew(struct IClass *cl, Object *obj, struct opSet *msg) {
    std::cout << "HandleNew" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleDispose(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleDispose" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleSet(struct IClass *cl, Object *obj, struct opSet *msg) {
    std::cout << "HandleSet" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleGet(struct IClass *cl, Object *obj, struct opGet *msg) {
    std::cout << "HandleGet" << std::endl;
    printf("Message: %x\n", msg->opg_AttrID);
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleEvent(Class *cl, Object *obj, struct MUIP_HandleEvent* msg) {
    std::cout << "HandleEvent2" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleInput(Class *cl, Object *obj, struct MUIP_HandleInput* msg) {
    std::cout << "HandleInput2" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleSetup(Class *cl, Object *obj, struct MUI_RenderInfo* msg) {
    std::cout << "HandleSetup" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleDrawBackground(Class* cl, Object *obj, struct MUIP_DrawBackground* msg) {
    std::cout << "HandleDrawBackground" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR CMUI_Area::handleCustomEvent(struct IClass *cl, Object *obj, Msg msg) {
    struct Data *data = (Data *) msg;

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

    return DoSuperMethodA(cl, obj, (Msg) msg);
}

IPTR CMUI_Area::handleDispatch(struct IClass *cl, Object *obj, Msg msg) {


    std::cout << "HandleDispatch with MethodId: " << msg->MethodID << " obj: " << obj << std::endl;

    // printf("HandleDispatch with MethodID: %x\n", msg->MethodID);
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
            return (IPTR) handleSetup(cl, obj, (struct MUI_RenderInfo *) msg);
        case MUIM_Draw:
            return (IPTR) handleDraw(cl, obj, (struct MUIP_Draw *) msg);
        case OM_GET:
            return (IPTR) handleGet(cl, obj, (struct opGet *) msg);
        case OM_SET:
            return (IPTR) handleSet(cl, obj, (struct opSet *) msg);
        case OM_DISPOSE:
            return (IPTR) handleDispose(cl, obj, msg);
        case MUIM_HandleEvent:
            return (IPTR) handleEvent(cl, obj, (struct MUIP_HandleEvent *) msg);
        case MUIM_HandleInput:
            return (IPTR) handleInput(cl, obj, (struct MUIP_HandleInput *) msg);
        case MUIM_DrawBackground:
            return (IPTR) handleDrawBackground(cl, obj, (struct MUIP_DrawBackground *) msg);
        case CUSTOM_EVENT:
            return (IPTR) handleCustomEvent(cl, obj, msg);

            printf("REFRESH");
            break;
    }

    return DoSuperMethodA(cl, obj, msg);
}
