#ifndef CMUI_VGROUP_H
#define CMUI_VGROUP_H

#include "CMUI_Group.h"

class CMUI_VGroup : public CMUI_Group {

public:
    CMUI_VGroup();
    CMUI_VGroup(Object * obj);
    CMUI_VGroup & operator=(Object * obj);
};

#endif