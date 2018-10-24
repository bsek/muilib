#ifndef CMUI_SETTINGSGROUP_H
#define CMUI_SETTINGSGROUP_H

#include "CMUI_Group.h"

class CMUI_Settingsgroup : public CMUI_Group {
public:
    IPTR ConfigToGadgets(Object * configdata);
    IPTR GadgetsToConfig(Object * configdata);
protected:
    CMUI_Settingsgroup();
};

#endif /* CMUI_SETTINGSGROUP_H */

