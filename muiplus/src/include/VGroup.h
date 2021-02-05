#ifndef VGROUP_H
#define VGROUP_H

#include "Group.h"

class VGroup : public Group {

public:
    VGroup();
    VGroup(Object * obj);
    VGroup & operator=(Object * obj);
};

#endif