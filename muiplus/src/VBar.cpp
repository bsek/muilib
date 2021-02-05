#include "include/VBar.h"

VBar::VBar()
: Rectangle() {
}

VBar::VBar(Object* obj)
: Rectangle() {
    object = obj;
}

VBar::VBar(LONG space)
: Rectangle() {
    object = MUI_MakeObject(MUIO_VBar, (IPTR) space);
}

VBar& VBar::operator=(Object* obj) {
    object = obj;
    return *this;
}
