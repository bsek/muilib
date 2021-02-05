#include "include/Configdata.h"

Configdata::Configdata()
: Dataspace() {
    object = MUI_NewObject(MUIC_Configdata, TAG_END);
}
