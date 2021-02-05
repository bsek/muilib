#include "include/Application.h"

Application::Application(Window &initialWindow) {
    object = MUI_NewObject(MUIC_Application, SubWindow, *initialWindow, TAG_END);
}

Application::Application(Object* obj)
: Notify() {
    object = obj;
}

Application & Application::operator=(Object * obj) {
    object = obj;
    return *this;
}

void Application::addWindow(Object *window) {
    DoMethod(object,OM_ADDMEMBER, (IPTR)window);
}

void Application::removeWindow(Object *window) {
    DoMethod(object,OM_REMMEMBER, (IPTR)window);
}

BOOL Application::active() const {
    return (BOOL) mGetAttr(MUIA_Application_Active);
}

void Application::setActive(BOOL value) {
    setAttr(MUIA_Application_Active, (IPTR) value);
}

STRPTR Application::author() const {
    return (STRPTR) mGetAttr(MUIA_Application_Author);
}

STRPTR Application::base() const {
    return (STRPTR) mGetAttr(MUIA_Application_Base);
}

CxObj * Application::broker() const {
    return (CxObj *) mGetAttr(MUIA_Application_Broker);
}

struct Hook * Application::brokerHook() const {
    return (struct Hook *) mGetAttr(MUIA_Application_BrokerHook);
}

void Application::setBrokerHook(struct Hook * value) {
    setAttr(MUIA_Application_BrokerHook, (IPTR) value);
}

struct MsgPort * Application::brokerPort() const {
    return (struct MsgPort *) mGetAttr(MUIA_Application_BrokerPort);
}

LONG Application::brokerPri() const {
    return (LONG) mGetAttr(MUIA_Application_BrokerPri);
}

struct MUI_Command * Application::commands() const {
    return (struct MUI_Command *) mGetAttr(MUIA_Application_Commands);
}

void Application::setCommands(struct MUI_Command * value) {
    setAttr(MUIA_Application_Commands, (IPTR) value);
}

STRPTR Application::copyright() const {
    return (STRPTR) mGetAttr(MUIA_Application_Copyright);
}

STRPTR Application::description() const {
    return (STRPTR) mGetAttr(MUIA_Application_Description);
}

struct DiskObject * Application::diskObject() const {
    return (struct DiskObject *) mGetAttr(MUIA_Application_DiskObject);
}

void Application::setDiskObject(struct DiskObject * value) {
    setAttr(MUIA_Application_DiskObject, (IPTR) value);
}

BOOL Application::doubleStart() const {
    return (BOOL) mGetAttr(MUIA_Application_DoubleStart);
}

void Application::setDropObject(Object * value) {
    setAttr(MUIA_Application_DropObject, (IPTR) value);
}

BOOL Application::forceQuit() const {
    return (BOOL) mGetAttr(MUIA_Application_ForceQuit);
}

STRPTR Application::helpFile() const {
    return (STRPTR) mGetAttr(MUIA_Application_HelpFile);
}

void Application::setHelpFile(STRPTR value) {
    setAttr(MUIA_Application_HelpFile, (IPTR) value);
}

BOOL Application::iconified() const {
    return (BOOL) mGetAttr(MUIA_Application_Iconified);
}

void Application::setIconified(BOOL value) {
    setAttr(MUIA_Application_Iconified, (IPTR) value);
}

IPTR Application::menuAction() const {
    return mGetAttr(MUIA_Application_MenuAction);
}

IPTR Application::menuHelp() const {
    return mGetAttr(MUIA_Application_MenuHelp);
}

struct Hook * Application::rexxHook() const {
    return (struct Hook *) mGetAttr(MUIA_Application_RexxHook);
}

void Application::setRexxHook(struct Hook * value) {
    setAttr(MUIA_Application_RexxHook, (IPTR) value);
}

struct RxMsg * Application::rexxMsg() const {
    return (struct RxMsg *) mGetAttr(MUIA_Application_RexxMsg);
}

void Application::setRexxString(STRPTR value) {
    setAttr(MUIA_Application_RexxString, (IPTR) value);
}

void Application::setSleep(BOOL value) {
    setAttr(MUIA_Application_Sleep, (IPTR) value);
}

STRPTR Application::title() const {
    return (STRPTR) mGetAttr(MUIA_Application_Title);
}

STRPTR Application::version() const {
    return (STRPTR) mGetAttr(MUIA_Application_Version);
}

struct List * Application::windowList() const {
    return (struct List *) mGetAttr(MUIA_Application_WindowList);
}

IPTR Application::aboutMUI(Object * refwindow) {
    return DoMethod(object,MUIM_Application_AboutMUI, (IPTR)refwindow);
}

IPTR Application::addInputHandler(struct MUI_InputHandlerNode * ihnode) {
    return DoMethod(object,MUIM_Application_AddInputHandler, (IPTR)ihnode);
}

IPTR Application::checkRefresh() {
    return DoMethod(object,MUIM_Application_CheckRefresh);
}

IPTR Application::inputBuffered() {
    return DoMethod(object,MUIM_Application_InputBuffered);
}

IPTR Application::load(STRPTR name) {
    return DoMethod(object,MUIM_Application_Load, (IPTR)name);
}

IPTR Application::newInput(ULONG * signal) {
    return DoMethod(object,MUIM_Application_NewInput, signal);
}

IPTR Application::openConfigWindow(IPTR flags) {
    return DoMethod(object,MUIM_Application_OpenConfigWindow, (IPTR)flags);
}

IPTR Application::pushMethod(Object * dest, std::vector<IPTR> count) {
    auto p = createTagListFromVector<IPTR>(count, 2);
    p.get()[0] = MUIM_Application_PushMethod;
    p.get()[1] = (IPTR)dest;

    return DoMethodA(object, (Msg)p.get());
}

IPTR Application::remInputHandler(struct MUI_InputHandlerNode * ihnode) {
    return DoMethod(object,MUIM_Application_RemInputHandler, (IPTR)ihnode);
}

IPTR Application::returnId(IPTR retid) {
    return DoMethod(object,MUIM_Application_ReturnID, retid);
}

IPTR Application::save(STRPTR name) {
    return DoMethod(object,MUIM_Application_Save, (IPTR)name);
}

IPTR Application::setConfigItem(IPTR item, IPTR data) {
    return DoMethod(object,MUIM_Application_SetConfigItem, item, data);
}

IPTR Application::showHelp(Object *window, char *name, char *node, LONG line) {
    return DoMethod(object,MUIM_Application_ShowHelp, (IPTR)window, name, node, line);
}

Application::Application() {}



