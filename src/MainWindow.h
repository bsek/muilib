#ifndef MIU_PLUS_AROS_MAINWINDOW_H
#define MIU_PLUS_AROS_MAINWINDOW_H


#include <CMUI_Window.h>
#include <Application.h>
#include "Buttons.h"
#include "ImageArea.h"
#include <CMUI_Scrollgroup.h>
#include <CMUI_VGroup.h>

class MainWindow {
private:
    Buttons buttons;
    ImageArea *imageArea;
    CMUI_Window window;
    CMUI_Scrollgroup *scrollgroup;
    CMUI_VGroup mainGroup;
public:
    MainWindow(CMUI_Window &win);
    MainWindow(LONG id);

    void init();

    CMUI_Window &getWindow();
};


#endif //MIU_PLUS_AROS_MAINWINDOW_H
