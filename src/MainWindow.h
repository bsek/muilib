#ifndef MIU_PLUS_AROS_MAINWINDOW_H
#define MIU_PLUS_AROS_MAINWINDOW_H


#include <Window.h>
#include <Application.h>
#include "Buttons.h"
#include "ImageArea.h"
#include "SourceEditor.h"
#include <Scrollgroup.h>
#include <Group.h>

class MainWindow {
private:
    Buttons buttons;
    ImageArea *imageArea;
    SourceEditor *sourceEditor;
    Zune::Window window;
    Zune::Scrollgroup *scrollgroup;
    Zune::Group mainGroup;
    Zune::Application *application;
public:
    MainWindow(Zune::Window &win);
    MainWindow(LONG id);
    MainWindow(LONG id, Zune::Application *app);

    void init();

    Zune::Window &getWindow();
};


#endif //MIU_PLUS_AROS_MAINWINDOW_H
