#include "include/CMUI_Poplist.h"

CMUI_Poplist::CMUI_Poplist(STRPTR list[])
: CMUI_Popobject() {
    object = MUI_NewObject(MUIC_Poplist, MUIA_Poplist_Array, list, TAG_END);
}

CMUI_Poplist::CMUI_Poplist(Object* obj)
: CMUI_Popobject() {
    object = obj;
}

CMUI_Poplist& CMUI_Poplist::operator=(Object* obj) {
    object = obj;
    return *this;
}

CMUI_Poplist::CMUI_Poplist() {

}
