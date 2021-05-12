#include "include/Settingsgroup.h"
#include "include/Group.h"
#include "include/RootClass.h"

Zune::Settingsgroup::Settingsgroup() = default;

IPTR Zune::Settingsgroup::configToGadgets(Object *configdata) {
    return DoMethod(object, MUIM_Settingsgroup_ConfigToGadgets, (IPTR) configdata);
}

IPTR Zune::Settingsgroup::gadgetsToConfig(Object *configdata) {
    return DoMethod(object, MUIM_Settingsgroup_GadgetsToConfig, (IPTR) configdata);
}

void Zune::Settingsgroup::build() {
    RootClass::createObject(MUIC_Settingsgroup);
}
