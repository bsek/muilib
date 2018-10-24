#include "include/CMUI_Settingsgroup.h"

CMUI_Settingsgroup::CMUI_Settingsgroup()
: CMUI_Group() {
}

IPTR CMUI_Settingsgroup::ConfigToGadgets(Object * configdata) {
    return DoMethod(object,MUIM_Settingsgroup_ConfigToGadgets, (IPTR)configdata);
}

IPTR CMUI_Settingsgroup::GadgetsToConfig(Object * configdata) {
    return DoMethod(object,MUIM_Settingsgroup_GadgetsToConfig, (IPTR)configdata);
}
