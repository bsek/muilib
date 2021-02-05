#ifndef SETTINGSGROUP_H
#define SETTINGSGROUP_H

#include "Group.h"

class Settingsgroup : public Group {
public:
    IPTR ConfigToGadgets(Object * configdata);
    IPTR GadgetsToConfig(Object * configdata);
protected:
    Settingsgroup();
};

#endif /* SETTINGSGROUP_H */

