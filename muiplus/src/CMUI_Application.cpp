#include "include/CMUI_Application.h"

CMUI_Application::CMUI_Application(CMUI_Window &initialWindow) {
    object = MUI_NewObject(MUIC_Application, SubWindow, *initialWindow, TAG_END);
}

CMUI_Application::CMUI_Application(Object* obj)
: CMUI_Notify() {
    object = obj;
}

CMUI_Application & CMUI_Application::operator=(Object * obj) {
    object = obj;
    return *this;
}

void CMUI_Application::addWindow(Object *window) {
    DoMethod(object,OM_ADDMEMBER, (IPTR)window);
}

void CMUI_Application::removeWindow(Object *window) {
    DoMethod(object,OM_REMMEMBER, (IPTR)window);
}

BOOL CMUI_Application::active() const {
    return (BOOL) mGetAttr(MUIA_Application_Active);
}

void CMUI_Application::setActive(BOOL value) {
    setAttr(MUIA_Application_Active, (IPTR) value);
}

STRPTR CMUI_Application::author() const {
    return (STRPTR) mGetAttr(MUIA_Application_Author);
}

STRPTR CMUI_Application::base() const {
    return (STRPTR) mGetAttr(MUIA_Application_Base);
}

CxObj * CMUI_Application::broker() const {
    return (CxObj *) mGetAttr(MUIA_Application_Broker);
}

struct Hook * CMUI_Application::brokerHook() const {
    return (struct Hook *) mGetAttr(MUIA_Application_BrokerHook);
}

void CMUI_Application::setBrokerHook(struct Hook * value) {
    setAttr(MUIA_Application_BrokerHook, (IPTR) value);
}

struct MsgPort * CMUI_Application::brokerPort() const {
    return (struct MsgPort *) mGetAttr(MUIA_Application_BrokerPort);
}

LONG CMUI_Application::brokerPri() const {
    return (LONG) mGetAttr(MUIA_Application_BrokerPri);
}

struct MUI_Command * CMUI_Application::commands() const {
    return (struct MUI_Command *) mGetAttr(MUIA_Application_Commands);
}

void CMUI_Application::setCommands(struct MUI_Command * value) {
    setAttr(MUIA_Application_Commands, (IPTR) value);
}

STRPTR CMUI_Application::copyright() const {
    return (STRPTR) mGetAttr(MUIA_Application_Copyright);
}

STRPTR CMUI_Application::description() const {
    return (STRPTR) mGetAttr(MUIA_Application_Description);
}

struct DiskObject * CMUI_Application::diskObject() const {
    return (struct DiskObject *) mGetAttr(MUIA_Application_DiskObject);
}

void CMUI_Application::setDiskObject(struct DiskObject * value) {
    setAttr(MUIA_Application_DiskObject, (IPTR) value);
}

BOOL CMUI_Application::doubleStart() const {
    return (BOOL) mGetAttr(MUIA_Application_DoubleStart);
}

void CMUI_Application::setDropObject(Object * value) {
    setAttr(MUIA_Application_DropObject, (IPTR) value);
}

BOOL CMUI_Application::forceQuit() const {
    return (BOOL) mGetAttr(MUIA_Application_ForceQuit);
}

STRPTR CMUI_Application::helpFile() const {
    return (STRPTR) mGetAttr(MUIA_Application_HelpFile);
}

void CMUI_Application::setHelpFile(STRPTR value) {
    setAttr(MUIA_Application_HelpFile, (IPTR) value);
}

BOOL CMUI_Application::iconified() const {
    return (BOOL) mGetAttr(MUIA_Application_Iconified);
}

void CMUI_Application::setIconified(BOOL value) {
    setAttr(MUIA_Application_Iconified, (IPTR) value);
}

IPTR CMUI_Application::menuAction() const {
    return mGetAttr(MUIA_Application_MenuAction);
}

IPTR CMUI_Application::menuHelp() const {
    return mGetAttr(MUIA_Application_MenuHelp);
}

struct Hook * CMUI_Application::rexxHook() const {
    return (struct Hook *) mGetAttr(MUIA_Application_RexxHook);
}

void CMUI_Application::setRexxHook(struct Hook * value) {
    setAttr(MUIA_Application_RexxHook, (IPTR) value);
}

struct RxMsg * CMUI_Application::rexxMsg() const {
    return (struct RxMsg *) mGetAttr(MUIA_Application_RexxMsg);
}

void CMUI_Application::setRexxString(STRPTR value) {
    setAttr(MUIA_Application_RexxString, (IPTR) value);
}

void CMUI_Application::setSleep(BOOL value) {
    setAttr(MUIA_Application_Sleep, (IPTR) value);
}

STRPTR CMUI_Application::title() const {
    return (STRPTR) mGetAttr(MUIA_Application_Title);
}

STRPTR CMUI_Application::version() const {
    return (STRPTR) mGetAttr(MUIA_Application_Version);
}

struct List * CMUI_Application::windowList() const {
    return (struct List *) mGetAttr(MUIA_Application_WindowList);
}

IPTR CMUI_Application::aboutMUI(Object * refwindow) {
    return DoMethod(object,MUIM_Application_AboutMUI, (IPTR)refwindow);
}

IPTR CMUI_Application::addInputHandler(struct MUI_InputHandlerNode * ihnode) {
    return DoMethod(object,MUIM_Application_AddInputHandler, (IPTR)ihnode);
}

IPTR CMUI_Application::checkRefresh() {
    return DoMethod(object,MUIM_Application_CheckRefresh);
}

IPTR CMUI_Application::inputBuffered() {
    return DoMethod(object,MUIM_Application_InputBuffered);
}

IPTR CMUI_Application::load(STRPTR name) {
    return DoMethod(object,MUIM_Application_Load, (IPTR)name);
}

IPTR CMUI_Application::newInput(ULONG * signal) {
    return DoMethod(object,MUIM_Application_NewInput, signal);
}

IPTR CMUI_Application::openConfigWindow(IPTR flags) {
    return DoMethod(object,MUIM_Application_OpenConfigWindow, (IPTR)flags);
}

IPTR CMUI_Application::pushMethod(Object * dest, std::vector<IPTR> count) {
    auto p = createTagListFromVector<IPTR>(count, 2);
    p.get()[0] = MUIM_Application_PushMethod;
    p.get()[1] = (IPTR)dest;

    return DoMethodA(object, (Msg)p.get());
}

IPTR CMUI_Application::remInputHandler(struct MUI_InputHandlerNode * ihnode) {
    return DoMethod(object,MUIM_Application_RemInputHandler, (IPTR)ihnode);
}

IPTR CMUI_Application::returnId(IPTR retid) {
    return DoMethod(object,MUIM_Application_ReturnID, retid);
}

IPTR CMUI_Application::save(STRPTR name) {
    return DoMethod(object,MUIM_Application_Save, (IPTR)name);
}

IPTR CMUI_Application::setConfigItem(IPTR item, IPTR data) {
    return DoMethod(object,MUIM_Application_SetConfigItem, item, data);
}

IPTR CMUI_Application::showHelp(Object *window, char *name, char *node, LONG line) {
    return DoMethod(object,MUIM_Application_ShowHelp, (IPTR)window, name, node, line);
}

CMUI_Application::CMUI_Application() {}



