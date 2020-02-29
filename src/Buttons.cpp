#include "Buttons.h"
#include <stdio.h>
#include <iostream>
#include <CMUI_Rectangle.h>
#include <CMUI_Checkmark.h>
#include <ActionCommand.h>
#include <CMUI_VSpace.h>

struct Data {
    ULONG methodId;
    IPTR tag;
    IPTR value;
};

Buttons::Buttons() : CMUI_Group() {
    registerClass();

    CMUI_Rectangle rect{MUI_Rectangle_Direction::HORIZONTAL, 20, ""};
  //  CMUI_Rectangle rect2{MUI_Rectangle_Direction::HORIZONTAL, 20, ""};

    CMUI_VSpace space{50};

    bClose.setHorizWeight(5);
    bAdd.setHorizWeight(5);

    group.addMember(*space);
    group.addMember(*bAdd);
    group.addMember(*bClose);
    group.addMember(*rect);
//    group.addMember(*bInfo);

    addMember(*group);
/*
    addEvent(*bAdd, PRESSED, [&](struct InstanceEvent* event) -> void {
        int pressed = event->text;
        if (pressed) {
            std::cout << " test :" << event->text << std::endl;
        }
    });
    */
    addEvent(*bAdd, EventType::PRESSED, this, &Buttons::handle);
}

void Buttons::handle() {
    printf("TEST %d", this->someValue);
}
