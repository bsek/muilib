#include "include/CMUI_Area.h"

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

IPTR CMUI_Area::askMinMax(struct MUI_MinMax * MinMaxInfo) {
    return DoMethod(object,MUIM_AskMinMax, (IPTR)MinMaxInfo);
}

IPTR CMUI_Area::cleanup() {
    return DoMethod(object,MUIM_Cleanup);
}

IPTR CMUI_Area::contextMenuBuild(LONG mx, LONG my) {
    return DoMethod(object,MUIM_ContextMenuBuild, mx, my);
}

IPTR CMUI_Area::contextMenuChoice(Object * item) {
    return DoMethod(object,MUIM_ContextMenuChoice, (IPTR)item);
}

IPTR CMUI_Area::createBubble(LONG x, LONG y, char * txt, IPTR flags) {
    return DoMethod(object,MUIM_CreateBubble, x, y, txt, flags);
}

IPTR CMUI_Area::createShortHelp(LONG mx, LONG my) {
    return DoMethod(object,MUIM_CreateShortHelp, mx, my);
}

IPTR CMUI_Area::deleteBubble(IPTR bubble) {
    return DoMethod(object,MUIM_DeleteBubble, bubble);
}

IPTR CMUI_Area::deleteShortHelp(STRPTR help) {
    return DoMethod(object,MUIM_DeleteShortHelp,  (IPTR)help);
}

IPTR CMUI_Area::dragBegin(Object * obj) {
    return DoMethod(object,MUIM_DragBegin,  (IPTR)obj);
}

IPTR CMUI_Area::dragDrop(Object * obj, LONG x, LONG y) {
    return DoMethod(object,MUIM_DragDrop, (IPTR)obj, x, y);
}

IPTR CMUI_Area::dragFinish(Object * obj) {
    return DoMethod(object,MUIM_DragFinish, (IPTR)obj);
}

IPTR CMUI_Area::dragQuery(Object * obj) {
    return DoMethod(object,MUIM_DragQuery, (IPTR)obj);
}

IPTR CMUI_Area::dragReport(Object * obj, LONG x, LONG y, LONG update) {
    return DoMethod(object,MUIM_DragReport, (IPTR)obj, x, y, update);
}

IPTR CMUI_Area::draw(IPTR flags) {
    return DoMethod(object,MUIM_Draw, flags);
}

IPTR CMUI_Area::drawBackground(LONG left, LONG top, LONG width, LONG height, LONG xoffset, LONG yoffset, LONG flags) {
    return DoMethod(object,MUIM_DrawBackground, left, top, width, height, xoffset, yoffset, flags);
}

IPTR CMUI_Area::handleEvent(struct IntuiMessage * imsg, LONG muikey) {
    return DoMethod(object,MUIM_HandleEvent, (IPTR)imsg, muikey);
}

IPTR CMUI_Area::handleInput(struct IntuiMessage * imsg, LONG muikey) {
    return DoMethod(object,MUIM_HandleInput, (IPTR)imsg, muikey);
}

IPTR CMUI_Area::hide() {
    return DoMethod(object,MUIM_Hide);
}

IPTR CMUI_Area::setup(struct MUI_RenderInfo * RenderInfo) {
    return DoMethod(object,MUIM_Setup, (IPTR)RenderInfo);
}

IPTR CMUI_Area::show() {
    return DoMethod(object,MUIM_Show);
}

void CMUI_Area::setMaxWidth(LONG value) {
    DoMethod(object, MUIA_MaxWidth, value);
}

void CMUI_Area::setFixWidth(LONG value) {
    DoMethod(object, MUIA_FixWidth, value);
}

void CMUI_Area::setFixHeight(LONG value) {
    DoMethod(object, MUIA_FixHeight, value);
}

struct MUI_CustomClass * CMUI_Area::registerClass() {
    return registerClassWithId((ClassID) MUIC_Area);
}

CMUI_Area::CMUI_Area() {}
