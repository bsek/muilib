#include "include/CMUI_Configdata.h"

CMUI_Configdata::CMUI_Configdata()
: CMUI_Dataspace() {
    object = MUI_NewObject(MUIC_Configdata, TAG_END);
}
