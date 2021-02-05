#include "include/Settingsgroup.h"

Settingsgroup::Settingsgroup()
: Group() {
}

IPTR Settingsgroup::ConfigToGadgets(Object * configdata) {
    return DoMethod(object,MUIM_Settingsgroup_ConfigToGadgets, (IPTR)configdata);
}

IPTR Settingsgroup::GadgetsToConfig(Object * configdata) {
    return DoMethod(object,MUIM_Settingsgroup_GadgetsToConfig, (IPTR)configdata);
}
