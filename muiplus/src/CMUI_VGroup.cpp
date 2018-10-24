#include "include/CMUI_VGroup.h"

CMUI_VGroup::CMUI_VGroup() : CMUI_Group() {
    object = MUI_NewObject(MUIC_Group, MUIA_Group_Horiz, FALSE, TAG_END);
}

CMUI_VGroup::CMUI_VGroup(Object *obj) : CMUI_Group(obj) {
}

CMUI_VGroup &CMUI_VGroup::operator=(Object *obj) {
    object = obj;
    return *this;
}