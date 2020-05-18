#include "Buttons.h"
#include <stdio.h>
#include <iostream>
#include <CMUI_Rectangle.h>
#include <CMUI_Checkmark.h>
#include <CMUI_VSpace.h>
#include <CMUI_HSpace.h>

Buttons::Buttons() : CMUI_Group() {
    registerClass();

    CMUI_Rectangle rect{MUI_Rectangle_Direction::HORIZONTAL, 20, "Some test"};
  //  CMUI_Rectangle rect2{MUI_Rectangle_Direction::HORIZONTAL, 20, ""};

    CMUI_VSpace space{50};
    CMUI_HSpace hspace{100};

    bAdd.setFixWidth(100);

    smallButton = new SmallButton{"test"};
    group.addMember(*space);
    group.addMember(*bAdd);
    group.addMember(*hspace);
    group.addMember(smallButton->operator*());
    group.addMember(*bClose);
    group.addMember(*rect);
  //  group.addMember(*bInfo);

    addMember(*group);
/*
    addEvent(*bAdd, PRESSED, [&](struct InstanceEvent* event) -> void {
        int pressed = event->text;
        if (pressed) {
            std::cout << " test :" << event->text << std::endl;
        }
    });
    */
    addEvent(&bAdd, EventType::PRESSED, this, &Buttons::handle);
    addEvent(&bClose, EventType::PRESSED, this, &Buttons::handle2);
}

void Buttons::handle2() {
    group.initChange();
    //smallButton->setWidth(200);
   // group.addMember(*bAdd);
    group.exitChange();

    printf("TEST %d", this->someValue);
}

void Buttons::handle() {
    group.initChange();
    group.remMember(*bAdd);
    group.exitChange();

    printf("TEST %d", this->someValue);
}
