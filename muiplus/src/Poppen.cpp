#include "include/Poppen.h"
#include "include/ZuneObject.h"
#include "include/Pendisplay.h"

Zune::Poppen::Poppen(std::string title, uint8_t cycleChain)
        : Pendisplay() {
    object = MUI_NewObject(MUIC_Poppen, MUIA_Window_Title, (IPTR) title.c_str(), MUIA_CycleChain, cycleChain, TAG_DONE);
}

Zune::Poppen::Poppen(Object *obj)
        : Pendisplay() {
    object = obj;
}

Zune::Poppen &Zune::Poppen::operator=(Object *obj) {
    object = obj;
    return *this;
}

Zune::Poppen::Poppen() {

}
