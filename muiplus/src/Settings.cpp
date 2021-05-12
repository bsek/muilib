#include "include/Settings.h"
#include "include/Group.h"

Zune::Settings::Settings() = default;

void Zune::Settings::build() {
    RootClass::createObject(MUIC_Settings);
}
