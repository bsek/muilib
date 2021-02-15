#include "ZuneApplication.h"
#include <exec/types.h>
#include <proto/dos.h>
#include <proto/exec.h>
#include <libraries/mui.h>
#include <iostream>

ZuneApplication::ZuneApplication(Zune::Window& window, const std::string title)
        : app()
        , name(title) {
    std::cout << "ZuneApplication: title:" << title << std::endl;
    windowList.push_back(window);
    app.setWindow(window);
    app.setTitle(title);
    app.build();
}

ZuneApplication::ZuneApplication(Zune::Application& application, const std::string title)
        : app(application)
        , name(title) {}

Zune::Application & ZuneApplication::getAppObject() {
    return app;
}

void ZuneApplication::addWindow(Zune::Window &win) {
    windowList.push_back(win);
    app.addWindow(win);
}

BOOL ZuneApplication::areYouSure() {
    return (MUI_RequestA(app.getObject(), windowList.at(0).getObject(), 0, "Quit?", "_Yes|_No", "\33cAre you sure?", 0) == 0);
}

void ZuneApplication::exec() {
    auto mainWindow = std::move(windowList.at(0));

    mainWindow.setOpen(true);
    mainWindow.notify(MUIA_Window_CloseRequest, (IPTR) TRUE, (IPTR) app.getObject(), (IPTR) 2, MUIM_Application_ReturnID,
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