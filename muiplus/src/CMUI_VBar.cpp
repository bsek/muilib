#include "include/CMUI_VBar.h"

CMUI_VBar::CMUI_VBar()
: CMUI_Rectangle() {
}

CMUI_VBar::CMUI_VBar(Object* obj)
: CMUI_Rectangle() {
    object = obj;
}

CMUI_VBar::CMUI_VBar(LONG space)
: CMUI_Rectangle() {
    object = MUI_MakeObject(MUIO_VBar, (IPTR) space);
}

CMUI_VBar& CMUI_VBar::operator=(Object* obj) {
    object = obj;
    return *this;
}
