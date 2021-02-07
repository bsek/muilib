#include <iostream>
#include <Checkmark.h>
#include <Button.h>
#include <Text.h>
#include <Rectangle.h>
#include <Group.h>

#include "MainWindow.h"
#include "Buttons.h"
#include "Scrollgroup.h"
#include "Window.h"

MainWindow::MainWindow(LONG id,
                       Zune::Application *app) : window(id) {
    std::cout << "MainWindow base const" << std::endl;
    init();
    this->application = app;
}

MainWindow::MainWindow(LONG id) : window(id) {
    std::cout << "MainWindow base const" << std::endl;
    init();
}

MainWindow::MainWindow(Zune::Window &win) : window(std::move(win)) {
    std::cout << "MainWindow cmui win const" << std::endl;
}

void MainWindow::init() {
    std::cout << "MainWindow init" << std::endl;

    mainGroup = Zune::Group{Zune::GroupDirection::Vertical};

    imageArea = new ImageArea{};
    //sourceEditor = new SourceEditor{};

    scrollgroup = new Zune::Scrollgroup(imageArea->operator*(), true, true);

    Zune::Rectangle hBar(Zune::HORIZONTAL, 5, "Title");

    mainGroup.addMember(scrollgroup->operator*());
    auto hGroup = new Zune::Group{Zune::GroupDirection::Horizontal};
    //hGroup->addMember(*(*imageArea));
    //hGroup->addMember(*(*sourceEditor));

    mainGroup.addMember(*(*hGroup));
    mainGroup.addMember(*hBar);

    Zune::Button button("test button");
    mainGroup.addMember(*button);

    mainGroup.addMember(*buttons);
    window.addChildToGroup(*mainGroup);
}

Zune::Window& MainWindow::getWindow() {
    return window;
}




