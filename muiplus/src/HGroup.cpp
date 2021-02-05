#include "include/HGroup.h"

HGroup::HGroup()
: Group() {
    object = MUI_NewObject(MUIC_Group, MUIA_Group_Horiz, TRUE, TAG_END);
    std::cout << "Horizontal Group: created: " << object << std::endl;
}

HGroup::HGroup(Object* obj)
: Group() {
    object = obj;
}
