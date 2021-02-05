#include "include/Area.h"

#include <iostream>
#include <algorithm>
#include <SDI/SDI_compiler.h>
#include <SDI/SDI_hook.h>
#include <SDI/SDI_stdarg.h>

struct InstanceData {
    Area *classObj;
};

struct Data {
    ULONG methodId;
    IPTR tag;
    IPTR value;
};

IPTR generalDispatcher(struct IClass *cl, Object *obj, Msg msg) {
    if (msg->MethodID == OM_NEW) {
        struct TagItem *tags = ((struct opSet *) msg)->ops_AttrList;
        Area *clazz = (Area *) GetTagData(CUSTOM_MUI_CLASS, (IPTR) " ", tags);
        Object* instance = (Object*) std::invoke(&Area::handleDispatch, clazz, cl, obj, msg);

        // Save a reference to the class instance in the object´s instance data
        InstanceData *instanceData = (InstanceData *) INST_DATA(cl, instance);
        instanceData->classObj = clazz;

        return (IPTR) instance;
    }

    InstanceData *instanceData = (InstanceData *) INST_DATA(cl, obj);

    if (instanceData->classObj != nullptr) {
        return std::invoke(&Area::handleDispatch, instanceData->classObj, cl, obj, msg);
    }

    return DoSuperMethodA(cl, obj, msg);
}

Area::Area() {}

void Area::setFixWidth(LONG value) {
    setAttr(MUIA_FixWidth, (IPTR) value);
}

void Area::setFixHeight(LONG value) {
    setAttr(MUIA_FixHeight, (IPTR) value);
}

LONG Area::fixHeigth() const {
    return (LONG) mGetAttr(MUIA_FixHeight);
}

LONG Area::fixWidth() const {
    return (LONG) mGetAttr(MUIA_FixWidth);
}

void Area::setBackground(LONG value) {
    setAttr(MUIA_Background, (IPTR) value);
}

LONG Area::bottomEdge() const {
    return (LONG) mGetAttr(MUIA_BottomEdge);
}

Object * Area::contextMenu() const {
    return (Object *) mGetAttr(MUIA_ContextMenu);
}

void Area::setContextMenu(Object * value) {
    setAttr(MUIA_ContextMenu, (IPTR) value);
}

Object * Area::contextMenuTrigger() const {
    return (Object *) mGetAttr(MUIA_ContextMenuTrigger);
}

char Area::controlChar() const {
    return (char) mGetAttr(MUIA_ControlChar);
}

void Area::setControlChar(char value) {
    setAttr(MUIA_ControlChar, (IPTR) value);
}

LONG Area::cycleChain() const {
    return (LONG) mGetAttr(MUIA_CycleChain);
}

void Area::setCycleChain(LONG value) {
    setAttr(MUIA_CycleChain, (IPTR) value);
}

BOOL Area::disabled() const {
    return (BOOL) mGetAttr(MUIA_Disabled);
}

void Area::setDisabled(BOOL value) {
    setAttr(MUIA_Disabled, (IPTR) value);
}

BOOL Area::draggable() const {
    return (BOOL) mGetAttr(MUIA_Draggable);
}

void Area::setDraggable(BOOL value) {
    setAttr(MUIA_Draggable, (IPTR) value);
}

BOOL Area::dropable() const {
    return (BOOL) mGetAttr(MUIA_Dropable);
}

void Area::setDropable(BOOL value) {
    setAttr(MUIA_Dropable, (IPTR) value);
}

void Area::setFillArea(BOOL value) {
    setAttr(MUIA_FillArea, (IPTR) value);
}

struct TextFont * Area::font() const {
    return (struct TextFont *) mGetAttr(MUIA_Font);
}

LONG Area::height() const {
    return (LONG) mGetAttr(MUIA_Height);
}

LONG Area::horizDisappear() const {
    return (LONG) mGetAttr(MUIA_HorizDisappear);
}

void Area::setHorizDisappear(LONG value) {
    setAttr(MUIA_HorizDisappear, (IPTR) value);
}

WORD Area::horizWeight() const {
    return (WORD) mGetAttr(MUIA_HorizWeight);
}

void Area::setHorizWeight(WORD value) {
    setAttr(MUIA_HorizWeight, (IPTR) value);
}

LONG Area::innerBottom() const {
    return (LONG) mGetAttr(MUIA_InnerBottom);
}

LONG Area::innerLeft() const {
    return (LONG) mGetAttr(MUIA_InnerLeft);
}

LONG Area::innerRight() const {
    return (LONG) mGetAttr(MUIA_InnerRight);
}

LONG Area::innerTop() const {
    return (LONG) mGetAttr(MUIA_InnerTop);
}

LONG Area::leftEdge() const {
    return (LONG) mGetAttr(MUIA_LeftEdge);
}

BOOL Area::pressed() const {
    return (BOOL) mGetAttr(MUIA_Pressed);
}

LONG Area::rightEdge() const {
    return (LONG) mGetAttr(MUIA_RightEdge);
}

BOOL Area::selected() const {
    return (BOOL) mGetAttr(MUIA_Selected);
}

void Area::setSelected(BOOL value) {
    setAttr(MUIA_Selected, (IPTR) value);
}

STRPTR Area::shortHelp() const {
    return (STRPTR) mGetAttr(MUIA_ShortHelp);
}

void Area::setShortHelp(STRPTR value) {
    setAttr(MUIA_ShortHelp, (IPTR) value);
}

BOOL Area::showMe() const {
    return (BOOL) mGetAttr(MUIA_ShowMe);
}

void Area::setShowMe(BOOL value) {
    setAttr(MUIA_ShowMe, (IPTR) value);
}

LONG Area::timer() const {
    return (LONG) mGetAttr(MUIA_Timer);
}

LONG Area::topEdge() const {
    return (LONG) mGetAttr(MUIA_TopEdge);
}

LONG Area::vertDisappear() const {
    return (LONG) mGetAttr(MUIA_VertDisappear);
}

void Area::setVertDisappear(LONG value) {
    setAttr(MUIA_VertDisappear, (IPTR) value);
}

WORD Area::vertWeight() const {
    return (WORD) mGetAttr(MUIA_VertWeight);
}

void Area::setVertWeight(WORD value) {
    setAttr(MUIA_VertWeight, (IPTR) value);
}

LONG Area::width() const {
    return (LONG) mGetAttr(MUIA_Width);
}

struct Window * Area::window() const {
    return (struct Window *) mGetAttr(MUIA_Window);
}

Object * Area::windowObject() const {
    return (Object *) mGetAttr(MUIA_WindowObject);
}

IPTR Area::handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax* msg) {
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleCleanup(Class *cl, Object *obj, Msg msg) {
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleContextMenuBuild(LONG mx, LONG my) {
    return DoMethod(object,MUIM_ContextMenuBuild, mx, my);
}

IPTR Area::handleContextMenuChoice(Object * item) {
    return DoMethod(object,MUIM_ContextMenuChoice, (IPTR)item);
}

IPTR Area::handleCreateBubble(LONG x, LONG y, char * txt, IPTR flags) {
    return DoMethod(object,MUIM_CreateBubble, x, y, txt, flags);
}

IPTR Area::handleCreateShortHelp(LONG mx, LONG my) {
    return DoMethod(object,MUIM_CreateShortHelp, mx, my);
}

IPTR Area::handleDeleteBubble(IPTR bubble) {
    return DoMethod(object,MUIM_DeleteBubble, bubble);
}

IPTR Area::handleDeleteShortHelp(STRPTR help) {
    return DoMethod(object,MUIM_DeleteShortHelp,  (IPTR)help);
}

IPTR Area::hide() {
    return DoMethod(object,MUIM_Hide);
}

IPTR Area::show() {
    return DoMethod(object,MUIM_Show);
}

Class * Area::registerClass() {
    return registerClassWithId((ClassID) MUIC_Area);
}

void Area::addEventHandler(struct MUI_EventHandlerNode &ehNode) {
    DoMethod(windowObject(), MUIM_Window_AddEventHandler, &ehNode);
}

void Area::removeEventHandler(struct MUI_EventHandlerNode &ehNode) {
    DoMethod(windowObject(), MUIM_Window_RemEventHandler, &ehNode);
}

void Area::setMcc(Class *mcc) {
    this->mcc = mcc;
}

Class *Area::getMcc() const {
    return mcc;
}

bool Area::hasEvent(ULONG eventId) {
    return (eventIds.find(eventId) != eventIds.end());
}

ULONG Area::generateId() {
    return EVENT_ID_START++;
}

Class *
Area::createCustomClass(ClassID classId) {
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
Area::registerClassWithId(ClassID classId) {
    return createCustomClass(classId);
}


IPTR Area::handleDraw(struct IClass *cl, Object *obj, struct MUIP_Draw *msg) {
    // std::cout << "HandleDraw" << std::endl;
    return DoSuperMethodA(cl, obj, (Msg) msg);
}

IPTR Area::handleNew(struct IClass *cl, Object *obj, struct opSet *msg) {
    std::cout << "HandleNew" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleDispose(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleDispose" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleSet(struct IClass *cl, Object *obj, struct opSet *msg) {
    std::cout << "HandleSet" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleGet(struct IClass *cl, Object *obj, struct opGet *msg) {
    std::cout << "HandleGet" << std::endl;
    printf("Message: %x\n", msg->opg_AttrID);
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleEvent(Class *cl, Object *obj, struct MUIP_HandleEvent* msg) {
    std::cout << "HandleEvent2" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleInput(Class *cl, Object *obj, struct MUIP_HandleInput* msg) {
    std::cout << "HandleInput2" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleSetup(Class *cl, Object *obj, struct MUI_RenderInfo* msg) {
    std::cout << "HandleSetup" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleDrawBackground(Class* cl, Object *obj, struct MUIP_DrawBackground* msg) {
    std::cout << "HandleDrawBackground" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Area::handleCustomEvent(struct IClass *cl, Object *obj, Msg msg) {
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

IPTR Area::handleDispatch(struct IClass *cl, Object *obj, Msg msg) {


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
