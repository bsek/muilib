#include "include/Configdata.h"
#include "include/Dataspace.h"

Zune::Configdata::Configdata()
        : Dataspace() {
    object = MUI_NewObject(MUIC_Configdata, TAG_END);
}
