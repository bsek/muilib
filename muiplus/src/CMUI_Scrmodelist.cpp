#include "include/CMUI_Scrmodelist.h"

CMUI_Scrmodelist::CMUI_Scrmodelist()
: CMUI_List() {
}

CMUI_Scrmodelist::CMUI_Scrmodelist(Object* obj)
: CMUI_List() {
    object = obj;
}

CMUI_Scrmodelist& CMUI_Scrmodelist::operator=(Object* obj) {
    object = obj;
    return *this;
}
