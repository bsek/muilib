#include "include/Poplist.h"
#include "include/ZuneObject.h"

Zune::Poplist::Poplist(STRPTR list[])
: Popobject() {
    object = MUI_NewObject(MUIC_Poplist, MUIA_Poplist_Array, list, TAG_END);
}

Zune::Poplist::Poplist(Object* obj)
: Popobject() {
    object = obj;
}

Zune::Poplist& Zune::Poplist::operator=(Object* obj) {
    object = obj;
    return *this;
}

Zune::Poplist::Poplist() {

}
