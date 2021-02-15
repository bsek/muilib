#include "include/Register.h"
#include "include/Group.h"
#include "include/RootClass.h"
/*
Zune::Register::Register(CONST_STRPTR titles[])
        : Zune::Group() {
    object = MUI_NewObject(MUIC_Register, MUIA_Register_Titles, titles, TAG_DONE);
}
*/

Zune::Register::Register() {}

STRPTR *Zune::Register::titles(void) const {
    return (STRPTR *) mGetAttr(MUIA_Register_Titles);
}
