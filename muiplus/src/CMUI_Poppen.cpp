#include "include/CMUI_Poppen.h"

CMUI_Poppen::CMUI_Poppen(std::string title, uint8_t cycleChain)
: CMUI_Pendisplay() {
    object = MUI_NewObject(MUIC_Poppen, MUIA_Window_Title, (IPTR) title.c_str(), MUIA_CycleChain, cycleChain, TAG_DONE);
}

CMUI_Poppen::CMUI_Poppen(Object* obj)
: CMUI_Pendisplay() {
    object = obj;
}

CMUI_Poppen& CMUI_Poppen::operator=(Object* obj) {
    object = obj;
    return *this;
}

CMUI_Poppen::CMUI_Poppen() {

}
