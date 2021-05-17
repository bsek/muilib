#include "include/Application.h"
#include "include/RootClass.h"
#include "include/Window.h"

Zune::Application::Application() = default;

void Zune::Application::addWindow(Zune::Window &window){
    DoMethod(object, OM_ADDMEMBER, reinterpret_cast<IPTR>(window.getObject()));
}

void Zune::Application::removeWindow(Zune::Window &window){
    DoMethod(object, OM_REMMEMBER, reinterpret_cast<IPTR>(window.getObject()));
}

BOOL Zune::Application::active() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Application_Active));
}

void Zune::Application::setActive(BOOL value) {
    setOrStore(MUIA_Application_Active, static_cast<IPTR>(value));
}

std::string Zune::Application::author() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Application_Author));
}

std::string Zune::Application::base() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Application_Base));
}

CxObj *Zune::Application::broker() const {
    return reinterpret_cast<CxObj *>(mGetAttr(MUIA_Application_Broker));
}

struct Hook *Zune::Application::brokerHook() const {
    return reinterpret_cast<struct Hook*>(mGetAttr(MUIA_Application_BrokerHook));
}

void Zune::Application::setBrokerHook(struct Hook *value) {
    setOrStore(MUIA_Application_BrokerHook, reinterpret_cast<IPTR>(value));
}

struct MsgPort *Zune::Application::brokerPort() const {
    return (struct MsgPort *) mGetAttr(MUIA_Application_BrokerPort);
}

LONG Zune::Application::brokerPri() const {
    return static_cast<LONG>(mGetAttr(MUIA_Application_BrokerPri));
}

struct MUI_Command *Zune::Application::commands() const {
    return reinterpret_cast<struct MUI_Command*>(mGetAttr(MUIA_Application_Commands));
}

void Zune::Application::setCommands(struct MUI_Command *value) {
    setOrStore(MUIA_Application_Commands, reinterpret_cast<IPTR>(value));
}

std::string Zune::Application::copyright() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Application_Copyright));
}

std::string Zune::Application::description() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Application_Description));
}

IPTR Zune::Application::diskObject() const {
    return mGetAttr(MUIA_Application_DiskObject);
}

void Zune::Application::setDiskObject(struct DiskObject *value) {
    setOrStore(MUIA_Application_DiskObject, reinterpret_cast<IPTR>(value));
}

BOOL Zune::Application::doubleStart() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Application_DoubleStart));
}

void Zune::Application::setDropObject(Object *value) {
    setOrStore(MUIA_Application_DropObject, reinterpret_cast<IPTR>(value));
}

BOOL Zune::Application::forceQuit() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Application_ForceQuit));
}

std::string Zune::Application::helpFile() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Application_HelpFile));
}

void Zune::Application::setHelpFile(STRPTR value) {
    setOrStore(MUIA_Application_HelpFile, reinterpret_cast<IPTR>(value));
}

BOOL Zune::Application::iconified() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Application_Iconified));
}

void Zune::Application::setIconified(BOOL value) {
    setAttr(MUIA_Application_Iconified, static_cast<IPTR>(value));
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

void Zune::Application::setRexxHook(struct Hook *value) {
    setAttr(MUIA_Application_RexxHook, reinterpret_cast<IPTR>(value));
}

IPTR Zune::Application::rexxMsg() const {
    return mGetAttr(MUIA_Application_RexxMsg);
}

void Zune::Application::setRexxString(std::string &value) {
    setAttr(MUIA_Application_RexxString, reinterpret_cast<IPTR>(value.c_str()));
}

void Zune::Application::setSleep(BOOL value) {
    setAttr(MUIA_Application_Sleep, static_cast<IPTR>(value));
}

std::string Zune::Application::title() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Application_Title));
}

std::string Zune::Application::version() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Application_Version));
}
/*
struct List *Zune::Application::windowList() const {
    return (struct List *) mGetAttr(MUIA_Application_WindowList);
}
*/
IPTR Zune::Application::aboutMUI(Object *refwindow) {
    return DoMethod(object, MUIM_Application_AboutMUI, reinterpret_cast<IPTR>(refwindow));
}

IPTR Zune::Application::addInputHandler(struct MUI_InputHandlerNode *ihnode) {
    return DoMethod(object, MUIM_Application_AddInputHandler, reinterpret_cast<IPTR>(ihnode));
}

IPTR Zune::Application::checkRefresh() {
    return DoMethod(object, MUIM_Application_CheckRefresh);
}

IPTR Zune::Application::inputBuffered() {
    return DoMethod(object, MUIM_Application_InputBuffered);
}

IPTR Zune::Application::load(std::string &name) {
    return DoMethod(object, MUIM_Application_Load, reinterpret_cast<IPTR>(name.c_str()));
}

IPTR Zune::Application::newInput(ULONG *signal) {
    return DoMethod(object, MUIM_Application_NewInput, reinterpret_cast<IPTR>(signal));
}

IPTR Zune::Application::openConfigWindow(IPTR flags) {
    return DoMethod(object, MUIM_Application_OpenConfigWindow, flags);
}

IPTR Zune::Application::remInputHandler(struct MUI_InputHandlerNode *ihnode) {
    return DoMethod(object, MUIM_Application_RemInputHandler, reinterpret_cast<IPTR>(ihnode));
}

IPTR Zune::Application::returnId(IPTR retid) {
    return DoMethod(object, MUIM_Application_ReturnID, retid);
}

IPTR Zune::Application::save(std::string &name) {
    return DoMethod(object, MUIM_Application_Save, reinterpret_cast<IPTR>(name.c_str()));
}

IPTR Zune::Application::setConfigItem(IPTR item, IPTR data) {
    return DoMethod(object, MUIM_Application_SetConfigItem, item, data);
}

IPTR Zune::Application::showHelp(Object *window, char *name, char *node, LONG line) {
    return DoMethod(object, MUIM_Application_ShowHelp, reinterpret_cast<IPTR>(window), 
                    reinterpret_cast<IPTR>(name), 
                    reinterpret_cast<IPTR>(node), 
                    static_cast<IPTR>(line));
}

void Zune::Application::setTitle(const std::string &title) {
    configmap[MUIA_Application_Title] = reinterpret_cast<IPTR>(title.c_str());
}

void Zune::Application::setAuthor(const std::string &author) {
    configmap[MUIA_Application_Author] = reinterpret_cast<IPTR>(author.c_str());
}

void Zune::Application::setBase(const std::string &base) {
    configmap[MUIA_Application_Base] = reinterpret_cast<IPTR>(base.c_str());
}

void Zune::Application::setVersion(const std::string &version) {
    configmap[MUIA_Application_Version] = reinterpret_cast<IPTR>(version.c_str());
}

void Zune::Application::setCopyright(const std::string &copyright) {
    configmap[MUIA_Application_Copyright] = reinterpret_cast<IPTR>(copyright.c_str());
}

void Zune::Application::setDescription(const std::string &description) {
    configmap[MUIA_Application_Description] = reinterpret_cast<IPTR>(description.c_str());
}

void Zune::Application::setBrokerPri(LONG brokerPri) {
    configmap[MUIA_Application_BrokerPri] = static_cast<IPTR>(brokerPri);
}

void Zune::Application::setSingleTask(BOOL singleTask) {
    configmap[MUIA_Application_SingleTask] = static_cast<IPTR>(singleTask);
}

void Zune::Application::setUseCommodities(BOOL useCommodities) {
    configmap[MUIA_Application_UseCommodities] = static_cast<IPTR>(useCommodities);
}

void Zune::Application::setUseRexx(BOOL useRexx) {
    configmap[MUIA_Application_UseRexx] = static_cast<IPTR>(useRexx);
}

void Zune::Application::setMenustrip(Zune::Menustrip &menustrip) {
    configmap[MUIA_Application_UseCommodities] = reinterpret_cast<IPTR>(menustrip.getObject());
}

void Zune::Application::setWindow(Zune::Window &initialWindow) {
    configmap[MUIA_Application_Window] = reinterpret_cast<IPTR>(initialWindow.getObject());
}

void Zune::Application::build() {
    RootClass::createObject(MUIC_Application);
}

Zune::Application::Application(Object *obj) {
    object = obj;
}





