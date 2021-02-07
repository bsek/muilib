#include "include/Application.h"
#include "include/Notify.h"
#include "include/ZuneObject.h"
#include "include/Window.h"

Zune::Application::Application(Zune::Window &initialWindow) {
    object = MUI_NewObject(MUIC_Application, SubWindow, *initialWindow, TAG_END);
}

Zune::Application::Application(Object* obj)
: Zune::Notify() {
    object = obj;
}

Zune::Application & Zune::Application::operator=(Object * obj) {
    object = obj;
    return *this;
}

void Zune::Application::addWindow(Object *window) {
    DoMethod(object,OM_ADDMEMBER, (IPTR)window);
}

void Zune::Application::removeWindow(Object *window) {
    DoMethod(object,OM_REMMEMBER, (IPTR)window);
}

BOOL Zune::Application::active() const {
    return (BOOL) mGetAttr(MUIA_Application_Active);
}

void Zune::Application::setActive(BOOL value) {
    setAttr(MUIA_Application_Active, (IPTR) value);
}

STRPTR Zune::Application::author() const {
    return (STRPTR) mGetAttr(MUIA_Application_Author);
}

STRPTR Zune::Application::base() const {
    return (STRPTR) mGetAttr(MUIA_Application_Base);
}

CxObj * Zune::Application::broker() const {
    return (CxObj *) mGetAttr(MUIA_Application_Broker);
}

struct Hook * Zune::Application::brokerHook() const {
    return (struct Hook *) mGetAttr(MUIA_Application_BrokerHook);
}

void Zune::Application::setBrokerHook(struct Hook * value) {
    setAttr(MUIA_Application_BrokerHook, (IPTR) value);
}

struct MsgPort * Zune::Application::brokerPort() const {
    return (struct MsgPort *) mGetAttr(MUIA_Application_BrokerPort);
}

LONG Zune::Application::brokerPri() const {
    return (LONG) mGetAttr(MUIA_Application_BrokerPri);
}

struct MUI_Command * Zune::Application::commands() const {
    return (struct MUI_Command *) mGetAttr(MUIA_Application_Commands);
}

void Zune::Application::setCommands(struct MUI_Command * value) {
    setAttr(MUIA_Application_Commands, (IPTR) value);
}

STRPTR Zune::Application::copyright() const {
    return (STRPTR) mGetAttr(MUIA_Application_Copyright);
}

STRPTR Zune::Application::description() const {
    return (STRPTR) mGetAttr(MUIA_Application_Description);
}

IPTR Zune::Application::diskObject() const {
    return mGetAttr(MUIA_Application_DiskObject);
}

void Zune::Application::setDiskObject(struct DiskObject * value) {
    setAttr(MUIA_Application_DiskObject, (IPTR) value);
}

BOOL Zune::Application::doubleStart() const {
    return (BOOL) mGetAttr(MUIA_Application_DoubleStart);
}

void Zune::Application::setDropObject(Object * value) {
    setAttr(MUIA_Application_DropObject, (IPTR) value);
}

BOOL Zune::Application::forceQuit() const {
    return (BOOL) mGetAttr(MUIA_Application_ForceQuit);
}

STRPTR Zune::Application::helpFile() const {
    return (STRPTR) mGetAttr(MUIA_Application_HelpFile);
}

void Zune::Application::setHelpFile(STRPTR value) {
    setAttr(MUIA_Application_HelpFile, (IPTR) value);
}

BOOL Zune::Application::iconified() const {
    return (BOOL) mGetAttr(MUIA_Application_Iconified);
}

void Zune::Application::setIconified(BOOL value) {
    setAttr(MUIA_Application_Iconified, (IPTR) value);
}

IPTR Zune::Application::menuAction() const {
    return mGetAttr(MUIA_Application_MenuAction);
}

IPTR Zune::Application::menuHelp() const {
    return mGetAttr(MUIA_Application_MenuHelp);
}

IPTR Zune::Application::rexxHook() const {
    return mGetAttr(MUIA_Application_RexxHook);
}

void Zune::Application::setRexxHook(struct Hook * value) {
    setAttr(MUIA_Application_RexxHook, (IPTR) value);
}

IPTR Zune::Application::rexxMsg() const {
    return mGetAttr(MUIA_Application_RexxMsg);
}

void Zune::Application::setRexxString(STRPTR value) {
    setAttr(MUIA_Application_RexxString, (IPTR) value);
}

void Zune::Application::setSleep(BOOL value) {
    setAttr(MUIA_Application_Sleep, (IPTR) value);
}

STRPTR Zune::Application::title() const {
    return (STRPTR) mGetAttr(MUIA_Application_Title);
}

STRPTR Zune::Application::version() const {
    return (STRPTR) mGetAttr(MUIA_Application_Version);
}

struct List * Zune::Application::windowList() const {
    return (struct List *) mGetAttr(MUIA_Application_WindowList);
}

IPTR Zune::Application::aboutMUI(Object * refwindow) {
    return DoMethod(object,MUIM_Application_AboutMUI, (IPTR)refwindow);
}

IPTR Zune::Application::addInputHandler(struct MUI_InputHandlerNode * ihnode) {
    return DoMethod(object,MUIM_Application_AddInputHandler, (IPTR)ihnode);
}

IPTR Zune::Application::checkRefresh() {
    return DoMethod(object,MUIM_Application_CheckRefresh);
}

IPTR Zune::Application::inputBuffered() {
    return DoMethod(object,MUIM_Application_InputBuffered);
}

IPTR Zune::Application::load(STRPTR name) {
    return DoMethod(object,MUIM_Application_Load, (IPTR)name);
}

IPTR Zune::Application::newInput(ULONG * signal) {
    return DoMethod(object,MUIM_Application_NewInput, signal);
}

IPTR Zune::Application::openConfigWindow(IPTR flags) {
    return DoMethod(object,MUIM_Application_OpenConfigWindow, (IPTR)flags);
}

IPTR Zune::Application::pushMethod(Object * dest, std::vector<IPTR> count) {
    auto p = createTagListFromVector<IPTR>(count, 2);
    p.get()[0] = MUIM_Application_PushMethod;
    p.get()[1] = (IPTR)dest;

    return DoMethodA(object, (Msg)p.get());
}

IPTR Zune::Application::remInputHandler(struct MUI_InputHandlerNode * ihnode) {
    return DoMethod(object,MUIM_Application_RemInputHandler, (IPTR)ihnode);
}

IPTR Zune::Application::returnId(IPTR retid) {
    return DoMethod(object,MUIM_Application_ReturnID, retid);
}

IPTR Zune::Application::save(STRPTR name) {
    return DoMethod(object,MUIM_Application_Save, (IPTR)name);
}

IPTR Zune::Application::setConfigItem(IPTR item, IPTR data) {
    return DoMethod(object,MUIM_Application_SetConfigItem, item, data);
}

IPTR Zune::Application::showHelp(Object *window, char *name, char *node, LONG line) {
    return DoMethod(object,MUIM_Application_ShowHelp, (IPTR)window, name, node, line);
}

Zune::Application::Application() {}



