#include "include/CMUI_Window.h"
#include "include/CMUI_VGroup.h"

CMUI_Window::CMUI_Window() : CMUI_Notify() {}

CMUI_Window::CMUI_Window(LONG id)
: CMUI_Notify() {
    Object *mui_win = MUI_NewObject(MUIC_Window,
                                    MUIA_Window_ID, id,
                                    MUIA_Window_CloseGadget, TRUE,
                                    MUIA_Window_DepthGadget, TRUE,
                                    MUIA_Window_SizeGadget, TRUE,
                                    MUIA_Window_RootObject, *hGroup,
                                    TAG_END);
    object = mui_win;
}

CMUI_Window::CMUI_Window(const CMUI_Window &win) : hGroup(win.hGroup) {
    object = win.object;
}


CMUI_Window::CMUI_Window(CMUI_Window &&win) : hGroup(nullptr) {
    hGroup = win.hGroup;
    object = win.object;

    win.hGroup = nullptr;
    win.object = nullptr;
}

CMUI_Window::CMUI_Window(Object * obj) {
    object = obj;
}

CMUI_Window & CMUI_Window::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL CMUI_Window::activate() const {
    return (BOOL) mGetAttr(MUIA_Window_Activate);
}

void CMUI_Window::setActivate(BOOL value) {
    setAttr(MUIA_Window_Activate, (IPTR) value);
}

Object * CMUI_Window::activeObject() const {
    return (Object *) mGetAttr(MUIA_Window_ActiveObject);
}

void CMUI_Window::setActiveObject(Object *value) {
    setAttr(MUIA_Window_ActiveObject, (IPTR) value);
}

LONG CMUI_Window::altHeight() const {
    return (LONG) mGetAttr(MUIA_Window_AltHeight);
}

LONG CMUI_Window::altLeftEdge() const {
    return (LONG) mGetAttr(MUIA_Window_AltLeftEdge);
}

LONG CMUI_Window::altTopEdge() const {
    return (LONG) mGetAttr(MUIA_Window_AltTopEdge);
}

LONG CMUI_Window::altWidth() const {
    return (LONG) mGetAttr(MUIA_Window_AltWidth);
}

BOOL CMUI_Window::closeRequest() const {
    return (BOOL) mGetAttr(MUIA_Window_CloseRequest);
}

Object * CMUI_Window::defaultObject() const {
    return (Object *) mGetAttr(MUIA_Window_DefaultObject);
}

void CMUI_Window::setDefaultObject(Object *value) {
    setAttr(MUIA_Window_DefaultObject, (IPTR) value);
}

BOOL CMUI_Window::fancyDrawing() const {
    return (BOOL) mGetAttr(MUIA_Window_FancyDrawing);
}

void CMUI_Window::setFancyDrawing(BOOL value) {
    setAttr(MUIA_Window_FancyDrawing, (IPTR) value);
}

LONG CMUI_Window::height() const {
    return (LONG) mGetAttr(MUIA_Window_Height);
}

IPTR CMUI_Window::id() const {
    return (IPTR) mGetAttr(MUIA_Window_ID);
}

void CMUI_Window::setID(IPTR value) {
    setAttr(MUIA_Window_ID, (IPTR) value);
}

struct InputEvent * CMUI_Window::inputEvent() const {
    return (struct InputEvent *) mGetAttr(MUIA_Window_InputEvent);
}

BOOL CMUI_Window::isSubWindow() const {
    return (BOOL) mGetAttr(MUIA_Window_IsSubWindow);
}

void CMUI_Window::setIsSubWindow(BOOL value) {
    setAttr(MUIA_Window_IsSubWindow, (IPTR) value);
}

LONG CMUI_Window::leftEdge() const {
    return (LONG) mGetAttr(MUIA_Window_LeftEdge);
}

IPTR CMUI_Window::menuAction() const {
    return (IPTR) mGetAttr(MUIA_Window_MenuAction);
}

void CMUI_Window::setMenuAction(IPTR value) {
    setAttr(MUIA_Window_MenuAction, (IPTR) value);
}

Object * CMUI_Window::menustrip() const {
    return (Object *) mGetAttr(MUIA_Window_Menustrip);
}

Object * CMUI_Window::mouseObject() const {
    return (Object *) mGetAttr(MUIA_Window_MouseObject);
}

void CMUI_Window::setNoMenus(BOOL value) {
    setAttr(MUIA_Window_NoMenus, (IPTR) value);
}

BOOL CMUI_Window::open() const {
    return (BOOL) mGetAttr(MUIA_Window_Open);
}

void CMUI_Window::setOpen(BOOL value) {
    setAttr(MUIA_Window_Open, (IPTR) value);
}

STRPTR CMUI_Window::publicScreen() const {
    return (STRPTR) mGetAttr(MUIA_Window_PublicScreen);
}

void CMUI_Window::setPublicScreen(STRPTR value) {
    setAttr(MUIA_Window_PublicScreen, (IPTR) value);
}

void CMUI_Window::setRefWindow(Object *value) {
    setAttr(MUIA_Window_RefWindow, (IPTR) value);
}

Object * CMUI_Window::rootObject() const {
    return (Object *) mGetAttr(MUIA_Window_RootObject);
}

void CMUI_Window::setRootObject(Object * value) {
    setAttr(MUIA_Window_RootObject, (IPTR) value);
}

struct Screen * CMUI_Window::screen() const {
    return (struct Screen *) mGetAttr(MUIA_Window_Screen);
}

void CMUI_Window::setScreen(struct Screen *value) {
    setAttr(MUIA_Window_Screen, (IPTR) value);
}

STRPTR CMUI_Window::screenTitle() const {
    return (STRPTR) mGetAttr(MUIA_Window_ScreenTitle);
}

void CMUI_Window::setScreenTitle(STRPTR value) {
    setAttr(MUIA_Window_ScreenTitle, (IPTR) value);
}

BOOL CMUI_Window::sleep() const {
    return (BOOL) mGetAttr(MUIA_Window_Sleep);
}

void CMUI_Window::setSleep(BOOL value) {
    setAttr(MUIA_Window_Sleep, (IPTR) value);
}

STRPTR CMUI_Window::title() const {
    return (STRPTR) mGetAttr(MUIA_Window_Title);
}

void CMUI_Window::setTitle(std::string value) {
    setAttr(MUIA_Window_Title, (IPTR) value.c_str());
}

LONG CMUI_Window::topEdge() const {
    return (LONG) mGetAttr(MUIA_Window_TopEdge);
}

BOOL CMUI_Window::useBottomBorderScroller() const {
    return (BOOL) mGetAttr(MUIA_Window_UseBottomBorderScroller);
}

void CMUI_Window::setUseBottomBorderScroller(BOOL value) {
    setAttr(MUIA_Window_UseBottomBorderScroller, (IPTR) value);
}

BOOL CMUI_Window::useLeftBorderScroller() const {
    return (BOOL) mGetAttr(MUIA_Window_UseLeftBorderScroller);
}

void CMUI_Window::setUseLeftBorderScroller(BOOL value) {
    setAttr(MUIA_Window_UseLeftBorderScroller, (IPTR) value);
}

BOOL CMUI_Window::useRightBorderScroller() const {
    return (BOOL) mGetAttr(MUIA_Window_UseRightBorderScroller);
}

void CMUI_Window::setUseRightBorderScroller(BOOL value) {
    setAttr(MUIA_Window_UseRightBorderScroller, (IPTR) value);
}

LONG CMUI_Window::width() const {
    return (LONG) mGetAttr(MUIA_Window_Width);
}

struct Window * CMUI_Window::window() const {
    return (struct Window *) mGetAttr(MUIA_Window_Window);
}

IPTR CMUI_Window::addEventHandler(struct MUI_EventHandlerNode *ehnode) {
    return DoMethod(object,MUIM_Window_AddEventHandler, (IPTR)ehnode);
}

IPTR CMUI_Window::remEventHandler(struct MUI_EventHandlerNode *ehnode) {
    return DoMethod(object,MUIM_Window_RemEventHandler, (IPTR)ehnode);
}

IPTR CMUI_Window::mScreenToBack() {
    return DoMethod(object,MUIM_Window_ScreenToBack);
}

IPTR CMUI_Window::mScreenToFront() {
    return DoMethod(object,MUIM_Window_ScreenToFront);
}

IPTR CMUI_Window::snapshot(LONG flags) {
    return DoMethod(object,MUIM_Window_Snapshot, (IPTR)flags);
}

IPTR CMUI_Window::toBack() {
    return DoMethod(object,MUIM_Window_ToBack);
}

IPTR CMUI_Window::toFront() {
    return DoMethod(object,MUIM_Window_ToFront);
}

void CMUI_Window::addChildToGroup(Object *obj) {
    hGroup.addMember(obj);
}

