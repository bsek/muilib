#ifndef MIU_PLUS_AROS_MAINWINDOW_H
#define MIU_PLUS_AROS_MAINWINDOW_H


#include <Window.h>
#include <Application.h>
#include "Buttons.h"
#include "ImageArea.h"
#include "SourceEditor.h"
#include <Scrollgroup.h>
#include <VGroup.h>

class MainWindow {
private:
    Buttons buttons;
    ImageArea *imageArea;
    SourceEditor *sourceEditor;
    Window window;
    Scrollgroup *scrollgroup;
    VGroup mainGroup;
    Application *application;
public:
    MainWindow(Window &win);
    MainWindow(LONG id);
    MainWindow(LONG id, Application *app);

    void init();

    Window &getWindow();
};


#endif //MIU_PLUS_AROS_MAINWINDOW_H
