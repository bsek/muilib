#include "include/Register.h"
#include "include/RootClass.h"

Zune::Register::Register() = default;

STRPTR *Zune::Register::titles(void) const {
    return (STRPTR *) mGetAttr(MUIA_Register_Titles);
}

void Zune::Register::setTitles(STRPTR *titles) {
    configmap[MUIA_Register_Titles] = (IPTR) titles;
}

void Zune::Register::setColumns(WORD num) {
    configmap[MUIA_Register_Columns] = (IPTR) num;
}

void Zune::Register::setFrameOn(BOOL frame) {
    configmap[MUIA_Register_Frame] = (IPTR) frame;
}

Zune::Register::Register(Object *obj) {
    object = obj;
}

void Zune::Register::build() {
    RootClass::createObject(MUIC_Register);
}


