#include <iostream>
#include <Text.h>
#include <Rectangle.h>
#include <Group.h>
#include "../zuneobject/Button.h"
#include "../zuneobject/Checkmark.h"
#include "../zuneobject/Cycle.h"
#include "../zuneclass/include/Balance.h"

#include "MainWindow.h"
#include "Scrollgroup.h"
#include "Window.h"

MainWindow::MainWindow(LONG id,
                       Zune::Application *app) : window(id), cycle() {
    std::cout << "MainWindow base const" << std::endl;
    window.create();
    mainGroup.create();
    topGroup.create();
    init();
}

MainWindow::MainWindow(LONG id) : window(id), cycle() {
    std::cout << "MainWindow base const" << std::endl;
    window.create();
    mainGroup.create();
    topGroup.create();
    init();
}

MainWindow::MainWindow(Zune::Window &win) : window(win.id()), cycle() {
    window.getClass().setObject(win.getObject());
    std::cout << "MainWindow cmui win const" << std::endl;
}

void MainWindow::init() {
    std::cout << "MainWindow init" << std::endl;

    std::string label{"This is a button"};


    ZuneObject::Button button{label};
    button.create();
  /*  Zune::Balance balance{};
    balance.setQuiet(TRUE);
    balance.setMaxWidth(200);
    balance.build();
    ZuneObject::Button button2{label};
    button2.create();

    topGroup.getClass().addMember(&button);
    topGroup.getClass().addMember(&balance); */
    topGroup.addMember(button);
    mainGroup.addMember(topGroup);

    std::string clabel{"This is a checkmark"};
    ZuneObject::Checkmark checkmark{clabel};
    checkmark.create();
    mainGroup.addMember(checkmark);

    std::string value1{"Option 1"};
    std::string value2{"Option 2"};
    std::string cycleLabel{""};
    std::initializer_list<char*> values = {"Valg1", "Valg2"};
    cycle.setEntries(values);
    cycle.create();
   // cycle.getClass().addEvent(&cycle.getClass(), Zune::EventType::SELECT, &cycle, &ZuneObject::Cycle::onEvent);
    mainGroup.addMember(cycle);

    window.addMember(mainGroup);
}

Zune::Window& MainWindow::getWindow() {
    return window.getClass();
}




