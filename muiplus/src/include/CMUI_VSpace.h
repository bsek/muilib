#ifndef CMUI_VSPACE_H
#define CMUI_VSPACE_H

#include "CMUI_Rectangle.h"

class CMUI_VSpace : public CMUI_Rectangle {
protected:
    CMUI_VSpace();

public:
    CMUI_VSpace(Object * obj);
    CMUI_VSpace(LONG space);
    CMUI_VSpace & operator=(Object * obj);
};


#endif /* CMUI_VSPACE_H */

