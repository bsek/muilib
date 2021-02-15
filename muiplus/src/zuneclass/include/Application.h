#ifndef APPLICATION_H
#define APPLICATION_H

#include <map>

#include "Notify.h"
#include "Window.h"
#include "ZuneList.h"
#include "Menustrip.h"
#include "RootClass.h"

namespace Zune {
    class Application : public Zune::Notify {

    public:
        Application();

        BOOL active() const;

        BOOL doubleStart() const;

        BOOL forceQuit() const;

        BOOL iconified() const;

        CxObj *broker() const;

        IPTR aboutMUI(Object *refwindow);

        IPTR addInputHandler(struct MUI_InputHandlerNode *ihnode);

        IPTR checkRefresh();

        IPTR diskObject() const;

        IPTR inputBuffered();

        IPTR load(STRPTR name);

        IPTR menuAction() const;

        IPTR menuHelp() const;

        IPTR newInput(ULONG *signal);

        IPTR openConfigWindow(IPTR flags);

        IPTR pushMethod(Object *dest, std::vector<IPTR> count);

        IPTR remInputHandler(struct MUI_InputHandlerNode *ihnode);

        IPTR returnId(IPTR retid);

        IPTR rexxHook() const;

        IPTR rexxMsg() const;

        IPTR save(STRPTR name);

        IPTR setConfigItem(IPTR item, IPTR data);

        IPTR showHelp(Object *window, char *name, char *node, LONG line);

        LONG brokerPri() const;

        STRPTR author() const;

        STRPTR base() const;

        STRPTR copyright() const;

        STRPTR description() const;

        STRPTR helpFile() const;

        STRPTR title() const;

        STRPTR version() const;

        struct Hook *brokerHook() const;

        struct List *windowList() const;

        struct MUI_Command *commands() const;

        struct MsgPort *brokerPort() const;

        void addWindow(Zune::Window &window);

        void removeWindow(Zune::Window &window);

        void setActive(BOOL value);

        void setAuthor(const std::string &author);

        void setBase(const std::string &base);

        void setBrokerHook(struct Hook *value);

        void setBrokerPri(long brokerPri);

        void setCommands(struct MUI_Command *value);

        void setCopyright(const std::string &copyright);

        void setDescription(const std::string &description);

        void setDiskObject(struct DiskObject *value);

        void setDropObject(Object *value);

        void setHelpFile(STRPTR value);

        void setIconified(BOOL value);

        void setWindow(Window &initialWindow);

        void setMenustrip(Menustrip &menustrip);

        void setRexxHook(struct Hook *value);

        void setRexxString(STRPTR value);

        void setSingleTask(bool singleTask);

        void setSleep(BOOL value);

        void setTitle(const std::string &title);

        void setUseCommodities(bool useCommodities);

        void setUseRexx(bool useRexx);

        void setVersion(const std::string &version);

        void build() override;
    };
}
#endif
