#include <iostream>
#include <Checkmark.h>
#include <Button.h>
#include <HGroup.h>
#include <Text.h>
#include <Rectangle.h>
#include <VSpace.h>
#include "MainWindow.h"
#include "Buttons.h"

MainWindow::MainWindow(LONG id, Application *app) : window(id) {
    std::cout << "MainWindow base const" << std::endl;
    init();
    this->application = app;
}

MainWindow::MainWindow(LONG id) : window(id) {
    std::cout << "MainWindow base const" << std::endl;
    init();
}

MainWindow::MainWindow(Window &win) : window(std::move(win)) {
    std::cout << "MainWindow cmui win const" << std::endl;
}

void MainWindow::init() {
    std::cout << "MainWindow init" << std::endl;

    mainGroup = VGroup{};

    imageArea = new ImageArea{};
    //sourceEditor = new SourceEditor{};

    scrollgroup = new Scrollgroup(imageArea->operator*(), true, true);

    Rectangle hBar(HORIZONTAL, 5, "Title");

    mainGroup.addMember(scrollgroup->operator*());
    auto hGroup = new HGroup{};
    //hGroup->addMember(*(*imageArea));
    //hGroup->addMember(*(*sourceEditor));

    mainGroup.addMember(*(*hGroup));
    mainGroup.addMember(*hBar);

    Button button("test button");
    mainGroup.addMember(*button);

    mainGroup.addMember(*buttons);
    window.addChildToGroup(*mainGroup);
}

Window& MainWindow::getWindow() {
    return window;
}




