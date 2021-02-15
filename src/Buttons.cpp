#include "Buttons.h"
#include <Group.h>
#include <stdio.h>
#include <iostream>
#include <Rectangle.h>

Buttons::Buttons() : Zune::Group() {
    registerClass();

    Zune::Rectangle rect{Zune::MUI_Rectangle_Direction::HORIZONTAL, 20, "Some test"};
  //  Rectangle rect2{MUI_Rectangle_Direction::HORIZONTAL, 20, ""};

    Object *space = MUI_MakeObject(MUIO_VSpace, 50);
    Object *hspace = MUI_MakeObject(MUIO_HSpace, 100);
/*
    bAdd.setFixWidth(100);

    smallButton = new SmallButton{"test"};
    group.addMember(space);
    group.addMember(&bAdd);
    group.addMember(hspace);
    group.addMember(smallButton);
    group.addMember(&bClose);
    group.addMember(&rect);
  //  group.addMember(*bInfo);


    addMember(&group);
/*
    addEvent(*bAdd, PRESSED, [&](struct InstanceEvent* event) -> void {
        int pressed = event->text;
        if (pressed) {
            std::cout << " test :" << event->text << std::endl;
        }
    });
    */
/*
    addEvent(&bAdd, Zune::EventType::PRESSED, this, &Buttons::handle);
    addEvent(&bClose, Zune::EventType::PRESSED, this, &Buttons::handle2);
*/
}

void Buttons::handle2() {
//    group.initChange();
    //smallButton->setWidth(200);
   // group.addMember(*bAdd);
 //   group.exitChange();

    printf("TEST %d", this->someValue);
}

void Buttons::handle() {
 /*   group.initChange();
    group.remMember(&bAdd);
    group.exitChange();
*/
    printf("TEST %d", this->someValue);
}
