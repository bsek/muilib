#ifndef MIU_PLUS_AROS_APPLICATION_H
#define MIU_PLUS_AROS_APPLICATION_H

#include <exec/types.h>
#include <proto/intuition.h>
#include <vector> 
#include <string>
#include <Application.h>
#include <Window.h>


class Application {
private:
    Application app;
protected:
    std::vector<Window> windowList;
    const std::string& name;
public:
    Application(Application& app, const std::string&& title);
    Application(Object* object, const std::string&& title);
    Application(Window& window, const std::string&& title);

    BOOL areYouSure();
    void addWindow(const Window &win);
    Object* getAppObject();

    void exec();
};


#endif
