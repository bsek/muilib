#include "include/CMUI_HBar.h"

CMUI_HBar::CMUI_HBar()
: CMUI_Rectangle() {
}

CMUI_HBar::CMUI_HBar(Object* obj)
: CMUI_Rectangle() {
    object = obj;
}

CMUI_HBar::CMUI_HBar(LONG space)
: CMUI_Rectangle() {
    object = MUI_MakeObject(MUIO_HBar, (IPTR) space);
}

CMUI_HBar& CMUI_HBar::operator=(Object* obj) {
    object = obj;
    return *this;
}
