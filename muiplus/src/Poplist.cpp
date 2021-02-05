#include "include/Poplist.h"

Poplist::Poplist(STRPTR list[])
: Popobject() {
    object = MUI_NewObject(MUIC_Poplist, MUIA_Poplist_Array, list, TAG_END);
}

Poplist::Poplist(Object* obj)
: Popobject() {
    object = obj;
}

Poplist& Poplist::operator=(Object* obj) {
    object = obj;
    return *this;
}

Poplist::Poplist() {

}
