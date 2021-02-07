#include "Application.h"
#include <exec/types.h>
#include <proto/dos.h>
#include <proto/exec.h>
#include <libraries/mui.h>
#include <iostream>

Application::Application(Zune::Window& window, const std::string title)
        : app(window)
        , name(title) {
    std::cout << "Application: title:" << title << std::endl;
    windowList.push_back(window);
}

Application::Application(Zune::Application& application, const std::string title)
        : app(application)
        , name(title) {}

Application::Application(Object* object, const std::string title) : app(object), name(title) {
    std::cout << "Applicaition object const" << std::endl;
    app.set(MUIA_Application_Title, (IPTR) title.c_str());
}

Object* Application::getAppObject() {
    return Application::app.operator*();
}

void Application::addWindow(const Zune::Window &win) {
    windowList.push_back(win);
    app.addWindow(*win);
}

BOOL Application::areYouSure() {
    return (MUI_RequestA(*app, windowList.at(0).operator*(), 0, "Quit?", "_Yes|_No", "\33cAre you sure?", 0) == 0);
}

void Application::exec() {
    auto mainWindow = std::move(windowList.at(0));

    mainWindow.setOpen(true);
    mainWindow.notify(MUIA_Window_CloseRequest, (IPTR) TRUE, (IPTR) *(app), (IPTR) 2, MUIM_Application_ReturnID,
                      MUIM_Application_ReturnID);

    ULONG sigs = 0;
    BOOL running = TRUE;

    while (running) {
        switch (app.newInput(&sigs)) {
            case MUIM_Application_ReturnID:
                running = areYouSure();
                break;
        }

        if (sigs) {
            sigs = Wait(sigs | SIGBREAKF_CTRL_C);
            if (sigs & SIGBREAKF_CTRL_C)
                break;
        }
    }
    app.dispose();

    std::cout << "DONE!" << std::endl;
}