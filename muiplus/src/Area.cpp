#include "include/Area.h"
#include "include/RootClass.h"
#include "include/Window.h"

#include <iostream>
#include <algorithm>
#include <SDI/SDI_hook.h>

struct InstanceData {
    Zune::Area *classObj;
};

struct Data {
    ULONG methodId;
    IPTR tag;
    IPTR value;
};

IPTR generalDispatcher(struct IClass *cl, Object *obj, Msg msg) {
    if (msg->MethodID == OM_NEW) {
        struct TagItem *tags = ((struct opSet *) msg)->ops_AttrList;
        Zune::Area *clazz = (Zune::Area *) GetTagData(Zune::CUSTOM_MUI_CLASS, (IPTR) " ", tags);
        Object *instance = (Object *) std::invoke(&Zune::Area::handleDispatch, clazz, cl, obj, msg);

        // Save a reference to the class instance in the object´s instance data
        InstanceData *instanceData = (InstanceData *) INST_DATA(cl, instance);
        instanceData->classObj = clazz;

        return (IPTR) instance;
    }

    InstanceData *instanceData = (InstanceData *) INST_DATA(cl, obj);

    if (instanceData->classObj != nullptr) {
        return std::invoke(&Zune::Area::handleDispatch, instanceData->classObj, cl, obj, msg);
    }

    return DoSuperMethodA(cl, obj, msg);
}

void Zune::Area::setBackground(LONG value) {
    setOrStore(MUIA_Background, (IPTR) value);
}

LONG Zune::Area::bottomEdge() const {
    return (LONG) mGetAttr(MUIA_BottomEdge);
}

Object *Zune::Area::contextMenu() const {
    return (Object *) mGetAttr(MUIA_ContextMenu);
}

void Zune::Area::setContextMenu(Object *value) {
    setOrStore(MUIA_ContextMenu, (IPTR) value);
}

Object * Zune::Area::contextMenuTrigger() const {
    return (Object *) mGetAttr(MUIA_ContextMenuTrigger);
}

void Zune::Area::setContextMenuTrigger(Object* value) {
    setOrStore(MUIA_ContextMenuTrigger, (IPTR) value);
}

char Zune::Area::controlChar() const {
    return (char) mGetAttr(MUIA_ControlChar);
}

void Zune::Area::setControlChar(char value) {
    setOrStore(MUIA_ControlChar, (IPTR) value);
}

LONG Zune::Area::cycleChain() const {
    return (LONG) mGetAttr(MUIA_CycleChain);
}

void Zune::Area::setCycleChain(LONG value) {
    setOrStore(MUIA_CycleChain, (IPTR) value);
}

BOOL Zune::Area::disabled() const {
    return (BOOL) mGetAttr(MUIA_Disabled);
}

void Zune::Area::setDisabled(BOOL value) {
    setOrStore(MUIA_Disabled, (IPTR) value);
}

BOOL Zune::Area::draggable() const {
    return (BOOL) mGetAttr(MUIA_Draggable);
}

void Zune::Area::setDraggable(BOOL value) {
    setOrStore(MUIA_Draggable, (IPTR) value);
}

BOOL Zune::Area::dropable() const {
    return (BOOL) mGetAttr(MUIA_Dropable);
}

void Zune::Area::setDropable(BOOL value) {
    setOrStore(MUIA_Dropable, (IPTR) value);
}

void Zune::Area::setFillArea(BOOL value) {
    setOrStore(MUIA_FillArea, (IPTR) value);
}

struct TextFont *Zune::Area::font() const {
    return (struct TextFont *) mGetAttr(MUIA_Font);
}

LONG Zune::Area::height() const {
    return (LONG) mGetAttr(MUIA_Height);
}

LONG Zune::Area::horizDisappear() const {
    return (LONG) mGetAttr(MUIA_HorizDisappear);
}

void Zune::Area::setHorizDisappear(LONG value) {
    setOrStore(MUIA_HorizDisappear, (IPTR) value);
}

WORD Zune::Area::horizWeight() const {
    return (WORD) mGetAttr(MUIA_HorizWeight);
}

void Zune::Area::setHorizWeight(WORD value) {
    setOrStore(MUIA_HorizWeight, (IPTR) value);
}

LONG Zune::Area::innerBottom() const {
    return (LONG) mGetAttr(MUIA_InnerBottom);
}

LONG Zune::Area::innerLeft() const {
    return (LONG) mGetAttr(MUIA_InnerLeft);
}

LONG Zune::Area::innerRight() const {
    return (LONG) mGetAttr(MUIA_InnerRight);
}

LONG Zune::Area::innerTop() const {
    return (LONG) mGetAttr(MUIA_InnerTop);
}

LONG Zune::Area::leftEdge() const {
    return (LONG) mGetAttr(MUIA_LeftEdge);
}

BOOL Zune::Area::pressed() const {
    return (BOOL) mGetAttr(MUIA_Pressed);
}

LONG Zune::Area::rightEdge() const {
    return (LONG) mGetAttr(MUIA_RightEdge);
}

BOOL Zune::Area::selected() const {
    return (BOOL) mGetAttr(MUIA_Selected);
}

void Zune::Area::setSelected(BOOL value) {
    setOrStore(MUIA_Selected, (IPTR) value);
}

STRPTR Zune::Area::shortHelp() const {
    return (STRPTR) mGetAttr(MUIA_ShortHelp);
}

void Zune::Area::setShortHelp(STRPTR value) {
    setOrStore(MUIA_ShortHelp, (IPTR) value);
}

BOOL Zune::Area::showMe() const {
    return (BOOL) mGetAttr(MUIA_ShowMe);
}

void Zune::Area::setShowMe(BOOL value) {
    setOrStore(MUIA_ShowMe, (IPTR) value);
}

LONG Zune::Area::timer() const {
    return (LONG) mGetAttr(MUIA_Timer);
}

LONG Zune::Area::topEdge() const {
    return (LONG) mGetAttr(MUIA_TopEdge);
}

LONG Zune::Area::vertDisappear() const {
    return (LONG) mGetAttr(MUIA_VertDisappear);
}

void Zune::Area::setVertDisappear(LONG value) {
    setOrStore(MUIA_VertDisappear, (IPTR) value);
}

WORD Zune::Area::vertWeight() const {
    return (WORD) mGetAttr(MUIA_VertWeight);
}

void Zune::Area::setVertWeight(WORD value) {
    setOrStore(MUIA_VertWeight, (IPTR) value);
}

LONG Zune::Area::width() const {
    return (LONG) mGetAttr(MUIA_Width);
}

struct Zune::Window *Zune::Area::window() const {
    return (struct Zune::Window *) mGetAttr(MUIA_Window);
}

Object *Zune::Area::windowObject() const {
    return (Object *) mGetAttr(MUIA_WindowObject);
}

IPTR Zune::Area::handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax *msg) {
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleCleanup(Class *cl, Object *obj, Msg msg) {
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleContextMenuBuild(LONG mx, LONG my) {
    return DoMethod(object, MUIM_ContextMenuBuild, mx, my);
}

IPTR Zune::Area::handleContextMenuChoice(Object *item) {
    return DoMethod(object, MUIM_ContextMenuChoice, (IPTR) item);
}

IPTR Zune::Area::handleCreateBubble(LONG x, LONG y, char *txt, IPTR flags) {
    return DoMethod(object, MUIM_CreateBubble, x, y, txt, flags);
}

IPTR Zune::Area::handleCreateShortHelp(LONG mx, LONG my) {
    return DoMethod(object, MUIM_CreateShortHelp, mx, my);
}

IPTR Zune::Area::handleDeleteBubble(IPTR bubble) {
    return DoMethod(object, MUIM_DeleteBubble, bubble);
}

IPTR Zune::Area::handleDeleteShortHelp(STRPTR help) {
    return DoMethod(object, MUIM_DeleteShortHelp, (IPTR) help);
}

IPTR Zune::Area::hide() {
    return DoMethod(object, MUIM_Hide);
}

IPTR Zune::Area::show() {
    return DoMethod(object, MUIM_Show);
}

Class *Zune::Area::registerClass() {
    return registerClassWithId((ClassID) MUIC_Area);
}

void Zune::Area::addEventHandler(struct MUI_EventHandlerNode &ehNode) {
    DoMethod(windowObject(), MUIM_Window_AddEventHandler, &ehNode);
}

void Zune::Area::removeEventHandler(struct MUI_EventHandlerNode &ehNode) {
    DoMethod(windowObject(), MUIM_Window_RemEventHandler, &ehNode);
}

void Zune::Area::setMcc(Class *mcc) {
    this->mcc = mcc;
}

Class *Zune::Area::getMcc() const {
    return mcc;
}

bool Zune::Area::hasEvent(ULONG eventId) {
    return (eventIds.find(eventId) != eventIds.end());
}

ULONG Zune::Area::generateId() {
    return EVENT_ID_START++;
}

Class *
Zune::Area::createCustomClass(ClassID classId) {
    std::cerr << "Creating custom class" << std::endl;
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
Zune::Area::registerClassWithId(ClassID classId) {
    return createCustomClass(classId);
}


IPTR Zune::Area::handleDraw(struct IClass *cl, Object *obj, struct MUIP_Draw *msg) {
    // std::cout << "HandleDraw" << std::endl;
    return DoSuperMethodA(cl, obj, (Msg) msg);
}

IPTR Zune::Area::handleNew(struct IClass *cl, Object *obj, struct opSet *msg) {
    std::cout << "HandleNew" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleDispose(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleDispose" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleSet(struct IClass *cl, Object *obj, struct opSet *msg) {
    std::cout << "HandleSet" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleGet(struct IClass *cl, Object *obj, struct opGet *msg) {
    std::cout << "HandleGet" << std::endl;
    printf("Message: %x\n", msg->opg_AttrID);
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleEvent(Class *cl, Object *obj, struct MUIP_HandleEvent *msg) {
    std::cout << "HandleEvent2" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleInput(Class *cl, Object *obj, struct MUIP_HandleInput *msg) {
    std::cout << "HandleInput2" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleSetup(Class *cl, Object *obj, struct MUI_RenderInfo *msg) {
    std::cout << "HandleSetup" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleDrawBackground(Class *cl, Object *obj, struct MUIP_DrawBackground *msg) {
    std::cout << "HandleDrawBackground" << std::endl;
    return DoSuperMethodA(cl, obj, msg);
}

IPTR Zune::Area::handleCustomEvent(struct IClass *cl, Object *obj, Msg msg) {
    struct Data *data = (Data *) msg;

    auto id = data->tag;

    if (hasEvent(id)) {
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

IPTR Zune::Area::handleDispatch(struct IClass *cl, Object *obj, Msg msg) {
    std::cout << "HandleDispatch with MethodId: " << msg->MethodID << " object: " << obj << std::endl;

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

Zune::Area::Area() {}

void Zune::Area::setFixHeight(long value) {
    setOrStore(MUIA_FixHeight, value);
}

void Zune::Area::setFixHeightText(std::string text) {
    setOrStore(MUIA_FixHeightTxt, (IPTR) text.c_str());
}

void Zune::Area::setFixWidth(long value) {
    setOrStore(MUIA_FixWidth, (IPTR) value);
}

void Zune::Area::setFixWidthText(std::string text) {
    setOrStore(MUIA_FixWidthTxt, (IPTR) text.c_str());
}

void Zune::Area::setFont(struct TextFont *font) {
    setOrStore(MUIA_Font, (IPTR) font);
}

void Zune::Area::setFrame(long frame) {
    configmap[MUIA_Frame] = (IPTR) frame;
}

void Zune::Area::setFramePhantomHoriz(bool value) {
    configmap[MUIA_FramePhantomHoriz] = (IPTR) value;
}

void Zune::Area::setFrameTitle(std::string title) {
    setOrStore(MUIA_FrameTitle, (IPTR) title.c_str());
}

void Zune::Area::setInnerBottom(long value) {
    configmap[MUIA_InnerBottom] = (IPTR) value;
}

void Zune::Area::setInnerLeft(long value) {
    configmap[MUIA_InnerLeft] = (IPTR) value;
}

void Zune::Area::setInnerRight(long value) {
    configmap[MUIA_InnerRight] = (IPTR) value;
}

void Zune::Area::setInnerTop(long value) {
    configmap[MUIA_InnerTop] = (IPTR) value;
}

void Zune::Area::setInputMode(long inputMode) {
    configmap[MUIA_InputMode] = (IPTR) inputMode;
}

void Zune::Area::setMaxHeight(long height) {
    configmap[MUIA_MaxHeight] = (IPTR) height;
}

void Zune::Area::setMaxWidth(long width) {
    configmap[MUIA_MaxWidth] = (IPTR) width;
}

void Zune::Area::setShowSelState(bool value) {
    configmap[MUIA_ShowSelState] = (IPTR) value;
}

void Zune::Area::setWeight(long value) {
    configmap[MUIA_Weight] = (IPTR) value;
}

void Zune::Area::build() {
    RootClass::createObject(MUIC_Area);
}

Zune::Area::Area(Object* obj) {
    object = obj;
}
