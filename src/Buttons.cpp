#include "Buttons.h"
#include <iostream>
#include <CMUI_Rectangle.h>
#include <CMUI_Checkmark.h>

Buttons::Buttons() : CMUI_Group() {
    registerClass();

    CMUI_Rectangle rect{MUI_Rectangle_Direction::HORIZONTAL, 20, ""};
    CMUI_Rectangle rect2{MUI_Rectangle_Direction::HORIZONTAL, 20, ""};



    group.addMember(*rect);
    group.addMember(*bAdd);
    group.addMember(*bClose);
//    group.addMember(*bInfo);


    addMember(*group);

    addEvent(*bAdd, PRESSED, [&](struct InstanceEvent* event) -> void {
        int pressed = event->text;
        if (pressed) {
            std::cout << " test :" << event->text << std::endl;
        }
    });
}


