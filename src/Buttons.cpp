#include "Buttons.h"
#include <iostream>
#include <CMUI_Rectangle.h>
#include <CMUI_Checkmark.h>

Buttons::Buttons() : CMUI_VGroup() {
    registerClass();

    CMUI_Button bAdd("Add & show new record");
    CMUI_Button bClose("Close");

    addObject(*bAdd);
    addObject(*bClose);

    addEvent(bAdd, PRESSED, [&]() -> void {
        std::cout << " test " << std::endl;
    });
}


