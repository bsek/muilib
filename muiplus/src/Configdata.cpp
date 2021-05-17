#include "include/Configdata.h"
#include "include/Dataspace.h"

Zune::Configdata::Configdata() = default;

void Zune::Configdata::build() {
    RootClass::createObject(MUIC_Configdata);
}

Zune::Configdata::Configdata(Object *obj) {
    object = obj;
}
