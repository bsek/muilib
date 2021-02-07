#include "include/Window.h"
#include "include/Group.h"
#include "include/Notify.h"
#include "include/ZuneObject.h"

Zune::Window::Window() : group(nullptr) {}

Zune::Window::Window(LONG id) : group(nullptr) {
    Object *mui_win = MUI_NewObject(MUIC_Window,
                                    MUIA_Window_ID, id,
                                    MUIA_Window_AppWindow, TRUE,
                                    MUIA_Window_CloseGadget, TRUE,
                                    MUIA_Window_DepthGadget, TRUE,
                                    MUIA_Window_SizeGadget, TRUE,
                                    MUIA_Window_RootObject, *group,
                                    TAG_END);
    object = mui_win;
}

Zune::Window & Zune::Window::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL Zune::Window::activate() const {
    return (BOOL) mGetAttr(MUIA_Window_Activate);
}

void Zune::Window::setActivate(BOOL value) {
    setAttr(MUIA_Window_Activate, (IPTR) value);
}

Object * Zune::Window::activeObject() const {
    return (Object *) mGetAttr(MUIA_Window_ActiveObject);
}

void Zune::Window::setActiveObject(Object *value) {
    setAttr(MUIA_Window_ActiveObject, (IPTR) value);
}

LONG Zune::Window::altHeight() const {
    return (LONG) mGetAttr(MUIA_Window_AltHeight);
}

LONG Zune::Window::altLeftEdge() const {
    return (LONG) mGetAttr(MUIA_Window_AltLeftEdge);
}

LONG Zune::Window::altTopEdge() const {
    return (LONG) mGetAttr(MUIA_Window_AltTopEdge);
}

LONG Zune::Window::altWidth() const {
    return (LONG) mGetAttr(MUIA_Window_AltWidth);
}

BOOL Zune::Window::closeRequest() const {
    return (BOOL) mGetAttr(MUIA_Window_CloseRequest);
}

Object * Zune::Window::defaultObject() const {
    return (Object *) mGetAttr(MUIA_Window_DefaultObject);
}

void Zune::Window::setDefaultObject(Object *value) {
    setAttr(MUIA_Window_DefaultObject, (IPTR) value);
}

BOOL Zune::Window::fancyDrawing() const {
    return (BOOL) mGetAttr(MUIA_Window_FancyDrawing);
}

void Zune::Window::setFancyDrawing(BOOL value) {
    setAttr(MUIA_Window_FancyDrawing, (IPTR) value);
}

LONG Zune::Window::height() const {
    return (LONG) mGetAttr(MUIA_Window_Height);
}

IPTR Zune::Window::id() const {
    return (IPTR) mGetAttr(MUIA_Window_ID);
}

void Zune::Window::setID(IPTR value) {
    setAttr(MUIA_Window_ID, (IPTR) value);
}

struct InputEvent * Zune::Window::inputEvent() const {
    return (struct InputEvent *) mGetAttr(MUIA_Window_InputEvent);
}

BOOL Zune::Window::isSubWindow() const {
    return (BOOL) mGetAttr(MUIA_Window_IsSubWindow);
}

void Zune::Window::setIsSubWindow(BOOL value) {
    setAttr(MUIA_Window_IsSubWindow, (IPTR) value);
}

LONG Zune::Window::leftEdge() const {
    return (LONG) mGetAttr(MUIA_Window_LeftEdge);
}

IPTR Zune::Window::menuAction() const {
    return (IPTR) mGetAttr(MUIA_Window_MenuAction);
}

void Zune::Window::setMenuAction(IPTR value) {
    setAttr(MUIA_Window_MenuAction, (IPTR) value);
}

Object * Zune::Window::menustrip() const {
    return (Object *) mGetAttr(MUIA_Window_Menustrip);
}

Object * Zune::Window::mouseObject() const {
    return (Object *) mGetAttr(MUIA_Window_MouseObject);
}

void Zune::Window::setNoMenus(BOOL value) {
    setAttr(MUIA_Window_NoMenus, (IPTR) value);
}

BOOL Zune::Window::open() const {
    return (BOOL) mGetAttr(MUIA_Window_Open);
}

void Zune::Window::setOpen(BOOL value) {
    setAttr(MUIA_Window_Open, (IPTR) value);
}

STRPTR Zune::Window::publicScreen() const {
    return (STRPTR) mGetAttr(MUIA_Window_PublicScreen);
}

void Zune::Window::setPublicScreen(STRPTR value) {
    setAttr(MUIA_Window_PublicScreen, (IPTR) value);
}

void Zune::Window::setRefWindow(Object *value) {
    setAttr(MUIA_Window_RefWindow, (IPTR) value);
}

Object * Zune::Window::rootObject() const {
    return (Object *) mGetAttr(MUIA_Window_RootObject);
}

void Zune::Window::setRootObject(Object * value) {
    setAttr(MUIA_Window_RootObject, (IPTR) value);
}

struct Screen * Zune::Window::screen() const {
    return (struct Screen *) mGetAttr(MUIA_Window_Screen);
}

void Zune::Window::setScreen(struct Screen *value) {
    setAttr(MUIA_Window_Screen, (IPTR) value);
}

STRPTR Zune::Window::screenTitle() const {
    return (STRPTR) mGetAttr(MUIA_Window_ScreenTitle);
}

void Zune::Window::setScreenTitle(STRPTR value) {
    setAttr(MUIA_Window_ScreenTitle, (IPTR) value);
}

BOOL Zune::Window::sleep() const {
    return (BOOL) mGetAttr(MUIA_Window_Sleep);
}

void Zune::Window::setSleep(BOOL value) {
    setAttr(MUIA_Window_Sleep, (IPTR) value);
}

STRPTR Zune::Window::title() const {
    return (STRPTR) mGetAttr(MUIA_Window_Title);
}

void Zune::Window::setTitle(std::string value) {
    setAttr(MUIA_Window_Title, (IPTR) value.c_str());
}

LONG Zune::Window::topEdge() const {
    return (LONG) mGetAttr(MUIA_Window_TopEdge);
}

BOOL Zune::Window::useBottomBorderScroller() const {
    return (BOOL) mGetAttr(MUIA_Window_UseBottomBorderScroller);
}

void Zune::Window::setUseBottomBorderScroller(BOOL value) {
    setAttr(MUIA_Window_UseBottomBorderScroller, (IPTR) value);
}

BOOL Zune::Window::useLeftBorderScroller() const {
    return (BOOL) mGetAttr(MUIA_Window_UseLeftBorderScroller);
}

void Zune::Window::setUseLeftBorderScroller(BOOL value) {
    setAttr(MUIA_Window_UseLeftBorderScroller, (IPTR) value);
}

BOOL Zune::Window::useRightBorderScroller() const {
    return (BOOL) mGetAttr(MUIA_Window_UseRightBorderScroller);
}

void Zune::Window::setUseRightBorderScroller(BOOL value) {
    setAttr(MUIA_Window_UseRightBorderScroller, (IPTR) value);
}

LONG Zune::Window::width() const {
    return (LONG) mGetAttr(MUIA_Window_Width);
}

struct Zune::Window * Zune::Window::window() const {
    return (struct Zune::Window *) mGetAttr(MUIA_Window_Window);
}

IPTR Zune::Window::addEventHandler(struct MUI_EventHandlerNode *ehnode) {
    return DoMethod(object,MUIM_Window_AddEventHandler, (IPTR)ehnode);
}

IPTR Zune::Window::remEventHandler(struct MUI_EventHandlerNode *ehnode) {
    return DoMethod(object,MUIM_Window_RemEventHandler, (IPTR)ehnode);
}

IPTR Zune::Window::mScreenToBack() {
    return DoMethod(object,MUIM_Window_ScreenToBack);
}

IPTR Zune::Window::mScreenToFront() {
    return DoMethod(object,MUIM_Window_ScreenToFront);
}

IPTR Zune::Window::snapshot(LONG flags) {
    return DoMethod(object,MUIM_Window_Snapshot, (IPTR)flags);
}

IPTR Zune::Window::toBack() {
    return DoMethod(object,MUIM_Window_ToBack);
}

IPTR Zune::Window::toFront() {
    return DoMethod(object,MUIM_Window_ToFront);
}

void Zune::Window::addChildToGroup(Object *obj) {
    group.addMember(obj);
}

