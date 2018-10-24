#include <iostream>
#include <CMUI_Checkmark.h>
#include <CMUI_Button.h>
#include <CMUI_HGroup.h>
#include <CMUI_Text.h>
#include <CMUI_Rectangle.h>
#include <CMUI_VSpace.h>
#include "MainWindow.h"
#include "Buttons.h"

MainWindow::MainWindow(LONG id) : window(id) {
    std::cout << "MainWindow base const" << std::endl;
    init();
}

MainWindow::MainWindow(CMUI_Window &win) : window(std::move(win)) {
    std::cout << "MainWindow cmui win const" << std::endl;
}

void MainWindow::init() {
    std::cout << "MainWindow init" << std::endl;
    mainGroup = CMUI_VGroup();

    imageArea = new ImageArea();
    scrollgroup = new CMUI_Scrollgroup(imageArea->operator*(), true, true);

    CMUI_Rectangle hBar(HORIZONTAL, 5, "Title");

    mainGroup.addObject(scrollgroup->operator*());
    mainGroup.addObject(*hBar);

    CMUI_Button button("test button");
    mainGroup.addObject(*button);
    mainGroup.addObject(*buttons);

    window.addChildToGroup(*mainGroup);
}

CMUI_Window& MainWindow::getWindow() {
    return window;
}




