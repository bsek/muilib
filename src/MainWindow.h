#ifndef MIU_PLUS_AROS_MAINWINDOW_H
#define MIU_PLUS_AROS_MAINWINDOW_H


#include <Window.h>
#include <Application.h>
#include "SourceEditor.h"
#include <Scrollgroup.h>
#include <HorizontalGroup.h>
#include <VerticalGroup.h>
#include "../zuneobject/Button.h"
#include "../zuneobject/Checkmark.h"
#include "../zuneobject/Cycle.h"
#include "../zuneobject/Window.h"

class MainWindow {
private:
/*
    Buttons buttons;
    ImageArea *imageArea;
    SourceEditor *sourceEditor;
    Zune::Scrollgroup *scrollgroup;
*/
    ZuneObject::Window window;
    ZuneObject::Cycle cycle;
    ZuneObject::HorizontalGroup topGroup{};
    ZuneObject::VerticalGroup mainGroup{};
/* 
    Zune::Application *application;
*/
public:
    MainWindow(Zune::Window &win);
    MainWindow(LONG id);
    MainWindow(LONG id, Zune::Application *app);

    void init();

    Zune::Window &getWindow();
};


#endif //MIU_PLUS_AROS_MAINWINDOW_H
