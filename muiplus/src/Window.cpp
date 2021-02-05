#include "include/Window.h"
#include "include/VGroup.h"

Window::Window() : Notify() {}

Window::Window(LONG id)
: Notify() {
    Object *mui_win = MUI_NewObject(MUIC_Window,
                                    MUIA_Window_ID, id,
                                    MUIA_Window_AppWindow, TRUE,
                                    MUIA_Window_CloseGadget, TRUE,
                                    MUIA_Window_DepthGadget, TRUE,
                                    MUIA_Window_SizeGadget, TRUE,
                                    MUIA_Window_RootObject, *hGroup,
                                    TAG_END);
    object = mui_win;
}

Window::Window(const Window &win) : hGroup(win.hGroup) {
    object = win.object;
}


Window::Window(Window &&win) : hGroup(nullptr) {
    hGroup = win.hGroup;
    object = win.object;

    win.hGroup = nullptr;
    win.object = nullptr;
}

Window::Window(Object * obj) {
    object = obj;
}

Window & Window::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL Window::activate() const {
    return (BOOL) mGetAttr(MUIA_Window_Activate);
}

void Window::setActivate(BOOL value) {
    setAttr(MUIA_Window_Activate, (IPTR) value);
}

Object * Window::activeObject() const {
    return (Object *) mGetAttr(MUIA_Window_ActiveObject);
}

void Window::setActiveObject(Object *value) {
    setAttr(MUIA_Window_ActiveObject, (IPTR) value);
}

LONG Window::altHeight() const {
    return (LONG) mGetAttr(MUIA_Window_AltHeight);
}

LONG Window::altLeftEdge() const {
    return (LONG) mGetAttr(MUIA_Window_AltLeftEdge);
}

LONG Window::altTopEdge() const {
    return (LONG) mGetAttr(MUIA_Window_AltTopEdge);
}

LONG Window::altWidth() const {
    return (LONG) mGetAttr(MUIA_Window_AltWidth);
}

BOOL Window::closeRequest() const {
    return (BOOL) mGetAttr(MUIA_Window_CloseRequest);
}

Object * Window::defaultObject() const {
    return (Object *) mGetAttr(MUIA_Window_DefaultObject);
}

void Window::setDefaultObject(Object *value) {
    setAttr(MUIA_Window_DefaultObject, (IPTR) value);
}

BOOL Window::fancyDrawing() const {
    return (BOOL) mGetAttr(MUIA_Window_FancyDrawing);
}

void Window::setFancyDrawing(BOOL value) {
    setAttr(MUIA_Window_FancyDrawing, (IPTR) value);
}

LONG Window::height() const {
    return (LONG) mGetAttr(MUIA_Window_Height);
}

IPTR Window::id() const {
    return (IPTR) mGetAttr(MUIA_Window_ID);
}

void Window::setID(IPTR value) {
    setAttr(MUIA_Window_ID, (IPTR) value);
}

struct InputEvent * Window::inputEvent() const {
    return (struct InputEvent *) mGetAttr(MUIA_Window_InputEvent);
}

BOOL Window::isSubWindow() const {
    return (BOOL) mGetAttr(MUIA_Window_IsSubWindow);
}

void Window::setIsSubWindow(BOOL value) {
    setAttr(MUIA_Window_IsSubWindow, (IPTR) value);
}

LONG Window::leftEdge() const {
    return (LONG) mGetAttr(MUIA_Window_LeftEdge);
}

IPTR Window::menuAction() const {
    return (IPTR) mGetAttr(MUIA_Window_MenuAction);
}

void Window::setMenuAction(IPTR value) {
    setAttr(MUIA_Window_MenuAction, (IPTR) value);
}

Object * Window::menustrip() const {
    return (Object *) mGetAttr(MUIA_Window_Menustrip);
}

Object * Window::mouseObject() const {
    return (Object *) mGetAttr(MUIA_Window_MouseObject);
}

void Window::setNoMenus(BOOL value) {
    setAttr(MUIA_Window_NoMenus, (IPTR) value);
}

BOOL Window::open() const {
    return (BOOL) mGetAttr(MUIA_Window_Open);
}

void Window::setOpen(BOOL value) {
    setAttr(MUIA_Window_Open, (IPTR) value);
}

STRPTR Window::publicScreen() const {
    return (STRPTR) mGetAttr(MUIA_Window_PublicScreen);
}

void Window::setPublicScreen(STRPTR value) {
    setAttr(MUIA_Window_PublicScreen, (IPTR) value);
}

void Window::setRefWindow(Object *value) {
    setAttr(MUIA_Window_RefWindow, (IPTR) value);
}

Object * Window::rootObject() const {
    return (Object *) mGetAttr(MUIA_Window_RootObject);
}

void Window::setRootObject(Object * value) {
    setAttr(MUIA_Window_RootObject, (IPTR) value);
}

struct Screen * Window::screen() const {
    return (struct Screen *) mGetAttr(MUIA_Window_Screen);
}

void Window::setScreen(struct Screen *value) {
    setAttr(MUIA_Window_Screen, (IPTR) value);
}

STRPTR Window::screenTitle() const {
    return (STRPTR) mGetAttr(MUIA_Window_ScreenTitle);
}

void Window::setScreenTitle(STRPTR value) {
    setAttr(MUIA_Window_ScreenTitle, (IPTR) value);
}

BOOL Window::sleep() const {
    return (BOOL) mGetAttr(MUIA_Window_Sleep);
}

void Window::setSleep(BOOL value) {
    setAttr(MUIA_Window_Sleep, (IPTR) value);
}

STRPTR Window::title() const {
    return (STRPTR) mGetAttr(MUIA_Window_Title);
}

void Window::setTitle(std::string value) {
    setAttr(MUIA_Window_Title, (IPTR) value.c_str());
}

LONG Window::topEdge() const {
    return (LONG) mGetAttr(MUIA_Window_TopEdge);
}

BOOL Window::useBottomBorderScroller() const {
    return (BOOL) mGetAttr(MUIA_Window_UseBottomBorderScroller);
}

void Window::setUseBottomBorderScroller(BOOL value) {
    setAttr(MUIA_Window_UseBottomBorderScroller, (IPTR) value);
}

BOOL Window::useLeftBorderScroller() const {
    return (BOOL) mGetAttr(MUIA_Window_UseLeftBorderScroller);
}

void Window::setUseLeftBorderScroller(BOOL value) {
    setAttr(MUIA_Window_UseLeftBorderScroller, (IPTR) value);
}

BOOL Window::useRightBorderScroller() const {
    return (BOOL) mGetAttr(MUIA_Window_UseRightBorderScroller);
}

void Window::setUseRightBorderScroller(BOOL value) {
    setAttr(MUIA_Window_UseRightBorderScroller, (IPTR) value);
}

LONG Window::width() const {
    return (LONG) mGetAttr(MUIA_Window_Width);
}

struct Window * Window::window() const {
    return (struct Window *) mGetAttr(MUIA_Window_Window);
}

IPTR Window::addEventHandler(struct MUI_EventHandlerNode *ehnode) {
    return DoMethod(object,MUIM_Window_AddEventHandler, (IPTR)ehnode);
}

IPTR Window::remEventHandler(struct MUI_EventHandlerNode *ehnode) {
    return DoMethod(object,MUIM_Window_RemEventHandler, (IPTR)ehnode);
}

IPTR Window::mScreenToBack() {
    return DoMethod(object,MUIM_Window_ScreenToBack);
}

IPTR Window::mScreenToFront() {
    return DoMethod(object,MUIM_Window_ScreenToFront);
}

IPTR Window::snapshot(LONG flags) {
    return DoMethod(object,MUIM_Window_Snapshot, (IPTR)flags);
}

IPTR Window::toBack() {
    return DoMethod(object,MUIM_Window_ToBack);
}

IPTR Window::toFront() {
    return DoMethod(object,MUIM_Window_ToFront);
}

void Window::addChildToGroup(Object *obj) {
    hGroup.addMember(obj);
}

