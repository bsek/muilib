#include "include/CMUI_Popscreen.h"

CMUI_Popscreen::CMUI_Popscreen()
: CMUI_Popobject() {
}

CMUI_Popscreen::CMUI_Popscreen(Object* obj)
: CMUI_Popobject() {
    object = obj;
}

CMUI_Popscreen& CMUI_Popscreen::operator=(Object* obj) {
    object = obj;
    return *this;
}
