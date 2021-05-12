#ifndef MIU_PLUS_AROS_ZUNEAPPLICATION_H
#define MIU_PLUS_AROS_ZUNEAPPLICATION_H

#include <exec/types.h>
#include <proto/intuition.h>
#include <vector>
#include <string>
#include <Application.h>
#include <Window.h>


class ZuneApplication {
private:
    Zune::Application app;
protected:
    std::vector<Zune::Window> windowList;
    const std::string& name;
public:
    ZuneApplication(Zune::Application& app, std::string title);
    ZuneApplication(Zune::Window& window, std::string title);

    BOOL areYouSure();
    void addWindow(Zune::Window &win);
    Zune::Application& getAppObject();

    void exec();
};


#endif