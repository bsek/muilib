#include "include/CMUI_Scrollbar.h"

CMUI_Scrollbar::CMUI_Scrollbar()
: CMUI_Group() {
}

CMUI_Scrollbar::CMUI_Scrollbar(Object* obj)
: CMUI_Group() {
    object = obj;
}

CMUI_Scrollbar& CMUI_Scrollbar::operator=(Object* obj) {
    object = obj;
    return *this;
}
