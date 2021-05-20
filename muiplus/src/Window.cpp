#include "include/Window.h"
#include "include/Group.h"
#include "include/Notify.h"
#include "include/RootClass.h"

Zune::Window::Window() {}

BOOL Zune::Window::activate() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Window_Activate));
}

void Zune::Window::setActivate(BOOL value) {
    setAttr(MUIA_Window_Activate, static_cast<IPTR>(value));
}

Object *Zune::Window::activeObject() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Window_ActiveObject));
}

void Zune::Window::setActiveObject(Object *value) {
    setAttr(MUIA_Window_ActiveObject, reinterpret_cast<IPTR>(value));
}

LONG Zune::Window::altHeight() const {
    return static_cast<LONG>(mGetAttr(MUIA_Window_AltHeight));
}

LONG Zune::Window::altLeftEdge() const {
    return static_cast<LONG>(mGetAttr(MUIA_Window_AltLeftEdge));
}

LONG Zune::Window::altTopEdge() const {
    return static_cast<LONG>(mGetAttr(MUIA_Window_AltTopEdge));
}

LONG Zune::Window::altWidth() const {
    return static_cast<LONG>(mGetAttr(MUIA_Window_AltWidth));
}

BOOL Zune::Window::closeRequest() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Window_CloseRequest));
}

Object *Zune::Window::defaultObject() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Window_DefaultObject));
}

void Zune::Window::setDefaultObject(Object *value) {
    setOrStore(MUIA_Window_DefaultObject, reinterpret_cast<IPTR>(value));
}

BOOL Zune::Window::fancyDrawing() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Window_FancyDrawing));
}

void Zune::Window::setFancyDrawing(BOOL value) {
    setAttr(MUIA_Window_FancyDrawing, static_cast<IPTR>(value));
}

LONG Zune::Window::height() const {
    return static_cast<LONG>(mGetAttr(MUIA_Window_Height));
}

IPTR Zune::Window::id() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Window_ID));
}

void Zune::Window::setID(IPTR value) {
    setOrStore(MUIA_Window_ID, static_cast<IPTR>(value));
}

struct InputEvent *Zune::Window::inputEvent() const {
    return reinterpret_cast<struct InputEvent *>(mGetAttr(MUIA_Window_InputEvent));
}

BOOL Zune::Window::isSubWindow() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Window_IsSubWindow));
}

void Zune::Window::setIsSubWindow(BOOL value) {
    setOrStore(MUIA_Window_IsSubWindow, static_cast<IPTR>(value));
}

LONG Zune::Window::leftEdge() const {
    return static_cast<LONG>(mGetAttr(MUIA_Window_LeftEdge));
}

IPTR Zune::Window::menuAction() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Window_MenuAction));
}

void Zune::Window::setMenuAction(IPTR value) {
    setOrStore(MUIA_Window_MenuAction, static_cast<IPTR>(value));
}

Object *Zune::Window::menustrip() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Window_Menustrip));
}

Object *Zune::Window::mouseObject() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Window_MouseObject));
}

void Zune::Window::setNoMenus(BOOL value) {
    setOrStore(MUIA_Window_NoMenus, static_cast<IPTR>(value));
}

BOOL Zune::Window::open() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Window_Open));
}

void Zune::Window::setOpen(BOOL value) {
    setAttr(MUIA_Window_Open, static_cast<IPTR>(value));
}

std::string Zune::Window::publicScreen() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Window_PublicScreen));
}

void Zune::Window::setPublicScreen(std::string& value) {
    setOrStore(MUIA_Window_PublicScreen, reinterpret_cast<IPTR>(value.c_str()));
}

void Zune::Window::setRefWindow(Object *value) {
    setOrStore(MUIA_Window_RefWindow, reinterpret_cast<IPTR>(value));
}

Object *Zune::Window::rootObject() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Window_RootObject));
}

void Zune::Window::setRootObject(Object *value) {
    setOrStore(MUIA_Window_RootObject, reinterpret_cast<IPTR>(value));
}

struct Screen *Zune::Window::screen() const {
    return reinterpret_cast<struct Screen *>(mGetAttr(MUIA_Window_Screen));
}

void Zune::Window::setScreen(struct Screen *value) {
    setOrStore(MUIA_Window_Screen, reinterpret_cast<IPTR>(value));
}

std::string Zune::Window::screenTitle() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Window_ScreenTitle));
}

void Zune::Window::setScreenTitle(std::string& value) {
    setOrStore(MUIA_Window_ScreenTitle, reinterpret_cast<IPTR>(value.c_str()));
}

BOOL Zune::Window::sleep() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Window_Sleep));
}

void Zune::Window::setSleep(BOOL value) {
    setAttr(MUIA_Window_Sleep, static_cast<IPTR>(value));
}

std::string Zune::Window::title() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Window_Title));
}

void Zune::Window::setTitle(std::string value) {
    setOrStore(MUIA_Window_Title, reinterpret_cast<IPTR>(value.c_str()));
}

LONG Zune::Window::topEdge() const {
    return static_cast<LONG>(mGetAttr(MUIA_Window_TopEdge));
}

BOOL Zune::Window::useBottomBorderScroller() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Window_UseBottomBorderScroller));
}

void Zune::Window::setUseBottomBorderScroller(BOOL value) {
    setOrStore(MUIA_Window_UseBottomBorderScroller, static_cast<IPTR>(value));
}

BOOL Zune::Window::useLeftBorderScroller() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Window_UseLeftBorderScroller));
}

void Zune::Window::setUseLeftBorderScroller(BOOL value) {
    setOrStore(MUIA_Window_UseLeftBorderScroller, static_cast<IPTR>(value));
}

BOOL Zune::Window::useRightBorderScroller() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Window_UseRightBorderScroller));
}

void Zune::Window::setUseRightBorderScroller(BOOL value) {
    setOrStore(MUIA_Window_UseRightBorderScroller, static_cast<IPTR>(value));
}

LONG Zune::Window::width() const {
    return static_cast<LONG>(mGetAttr(MUIA_Window_Width));
}

struct Zune::Window *Zune::Window::window() const {
    return reinterpret_cast<struct Zune::Window *>(mGetAttr(MUIA_Window_Window));
}

IPTR Zune::Window::addEventHandler(struct MUI_EventHandlerNode *ehnode) {
    return DoMethod(object, MUIM_Window_AddEventHandler, reinterpret_cast<IPTR>(ehnode));
}

IPTR Zune::Window::remEventHandler(struct MUI_EventHandlerNode *ehnode) {
    return DoMethod(object, MUIM_Window_RemEventHandler, reinterpret_cast<IPTR>(ehnode));
}

IPTR Zune::Window::mScreenToBack() {
    return DoMethod(object, MUIM_Window_ScreenToBack);
}

IPTR Zune::Window::mScreenToFront() {
    return DoMethod(object, MUIM_Window_ScreenToFront);
}

IPTR Zune::Window::snapshot(LONG flags) {
    return DoMethod(object, MUIM_Window_Snapshot, static_cast<IPTR>(flags));
}

IPTR Zune::Window::toBack() {
    return DoMethod(object, MUIM_Window_ToBack);
}

IPTR Zune::Window::toFront() {
    return DoMethod(object, MUIM_Window_ToFront);
}

void Zune::Window::setBackdrop(BOOL backdrop) {
    configmap[MUIA_Window_Backdrop] = static_cast<IPTR>(backdrop);
}

void Zune::Window::setBorderless(BOOL borderless) {
    configmap[MUIA_Window_Borderless] = static_cast<IPTR>(borderless);
}

void Zune::Window::setAppWindow(BOOL appWindow) {
    configmap[MUIA_Window_AppWindow] = static_cast<IPTR>(appWindow);
}

void Zune::Window::setCloseGadget(BOOL closeGadget) {
    configmap[MUIA_Window_CloseGadget] = static_cast<IPTR>(closeGadget);
}

void Zune::Window::setDepthGadget(BOOL depthGadget) {
    configmap[MUIA_Window_DepthGadget] = static_cast<IPTR>(depthGadget);
}

void Zune::Window::setSizeGadget(BOOL sizeGadget) {
    configmap[MUIA_Window_SizeGadget] = static_cast<IPTR>(sizeGadget);
}

void Zune::Window::setSizeRight(BOOL sizeRight) {
    configmap[MUIA_Window_SizeRight] = static_cast<IPTR>(sizeRight);
}

void Zune::Window::setDragBar(BOOL dragBar) {
    configmap[MUIA_Window_DragBar] = static_cast<IPTR>(dragBar);
}

void Zune::Window::setAltHeight(LONG altHeight) {
    configmap[MUIA_Window_AltHeight] = static_cast<IPTR>(altHeight);
}

void Zune::Window::setAltLeftEdge(LONG altLeftEdge) {
    configmap[MUIA_Window_AltLeftEdge] = static_cast<IPTR>(altLeftEdge);
}

void Zune::Window::setAltTopEdge(LONG altTopEdge) {
    configmap[MUIA_Window_AltTopEdge] = static_cast<IPTR>(altTopEdge);
}

void Zune::Window::setAltWidth(LONG altWidth) {
    configmap[MUIA_Window_AltWidth] = static_cast<IPTR>(altWidth);
}

void Zune::Window::build() {
    RootClass::createObject(MUIC_Window);
}

void Zune::Window::setWidth(LONG value) {
    configmap[MUIA_Window_Width] = static_cast<IPTR>(value);
}

void Zune::Window::setNeedMouseObject(BOOL value) {
    configmap[MUIA_Window_NeedsMouseObject] = static_cast<IPTR>(value);
}

void Zune::Window::setLeftEdge(LONG leftEdge) {
    configmap[MUIA_LeftEdge] = static_cast<IPTR>(leftEdge);
}

void Zune::Window::setHeight(LONG height) {
    configmap[MUIA_Height] = static_cast<IPTR>(height);
}

void Zune::Window::setTopEdge(LONG value) {
    configmap[MUIA_TopEdge] = static_cast<LONG>(value);
}

void Zune::Window::setEraseArea(BOOL doErase) {
    configmap[MUIA_Window_EraseArea] = static_cast<BOOL>(doErase);
}

void Zune::Window::setWindowToolBox(BOOL toolbox) {
    configmap[MUIA_Window_ToolBox] = static_cast<BOOL>(toolbox);
}

void Zune::Window::setZoomGadget(BOOL enable) {
    configmap[MUIA_Window_ZoomGadget] = static_cast<BOOL>(enable);
}

void Zune::Window::setMenustrip(Object *obj) {
    configmap[MUIA_Window_Menustrip] = reinterpret_cast<IPTR>(obj);
}


