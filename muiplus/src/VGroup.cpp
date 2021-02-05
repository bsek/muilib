#include "include/VGroup.h"

VGroup::VGroup() : Group() {
    object = MUI_NewObject(MUIC_Group, MUIA_Group_Horiz, FALSE, TAG_END);
}

VGroup::VGroup(Object *obj) : Group(obj) {
}

VGroup &VGroup::operator=(Object *obj) {
    object = obj;
    return *this;
}