#include "include/CMUI_Volumelist.h"

CMUI_Volumelist::CMUI_Volumelist()
: CMUI_List() {
}

CMUI_Volumelist::CMUI_Volumelist(Object* obj)
: CMUI_List() {
    object = obj;
}

CMUI_Volumelist& CMUI_Volumelist::operator=(Object* obj) {
    object = obj;
    return *this;
}
