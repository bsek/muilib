#include "include/CMUI_HGroup.h"

CMUI_HGroup::CMUI_HGroup()
: CMUI_Group() {
    object = MUI_NewObject(MUIC_Group, MUIA_Group_Horiz, TRUE, TAG_END);
    std::cout << "Horizontal Group: created: " << object << std::endl;
}

CMUI_HGroup::CMUI_HGroup(Object* obj)
: CMUI_Group() {
    object = obj;
}
