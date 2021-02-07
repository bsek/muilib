#include "include/Settingsgroup.h"
#include "include/Group.h"
#include "include/ZuneObject.h"

Zune::Settingsgroup::Settingsgroup()
: Zune::Group() {
}

IPTR Zune::Settingsgroup::ConfigToGadgets(Object * configdata) {
    return DoMethod(object,MUIM_Settingsgroup_ConfigToGadgets, (IPTR)configdata);
}

IPTR Zune::Settingsgroup::GadgetsToConfig(Object * configdata) {
    return DoMethod(object,MUIM_Settingsgroup_GadgetsToConfig, (IPTR)configdata);
}
