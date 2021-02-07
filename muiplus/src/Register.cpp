#include "include/Register.h"
#include "include/Group.h"
#include "include/ZuneObject.h"

Zune::Register::Register() {
}

Zune::Register::Register(CONST_STRPTR titles[])
        : Zune::Group() {
    object = MUI_NewObject(MUIC_Register, MUIA_Register_Titles, titles, TAG_DONE);
}

Zune::Register::Register(Object* obj)
: Zune::Group() {
    object = obj;
}

Zune::Register& Zune::Register::operator=(Object* obj) {
    object = obj;
    return *this;
}

STRPTR * Zune::Register::titles(void) const {
    return (STRPTR *) mGetAttr(MUIA_Register_Titles);
}
