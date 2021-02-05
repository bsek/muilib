#include "include/Poppen.h"

Poppen::Poppen(std::string title, uint8_t cycleChain)
: Pendisplay() {
    object = MUI_NewObject(MUIC_Poppen, MUIA_Window_Title, (IPTR) title.c_str(), MUIA_CycleChain, cycleChain, TAG_DONE);
}

Poppen::Poppen(Object* obj)
: Pendisplay() {
    object = obj;
}

Poppen& Poppen::operator=(Object* obj) {
    object = obj;
    return *this;
}

Poppen::Poppen() {

}
