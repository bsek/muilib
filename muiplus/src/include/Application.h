#ifndef MIU_PLUS_AROS_APPLICATION_H
#define MIU_PLUS_AROS_APPLICATION_H


#include <proto/intuition.h>
#include <vector>
#include <string>
#include "CMUI_Application.h"
#include "CMUI_Window.h"


class Application {
private:
    CMUI_Application app;
protected:
    std::vector<CMUI_Window> windowList;
    const std::string& name;
public:
    Application(CMUI_Application& app, const std::string&& title);
    Application(Object* object, const std::string&& title);
    Application(CMUI_Window& window, const std::string&& title);

    BOOL areYouSure();
    void addWindow(const CMUI_Window &win);
    Object* getAppObject();

    void exec();
};


#endif
