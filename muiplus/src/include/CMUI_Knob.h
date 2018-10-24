#ifndef CMUI_KNOB_H
#define CMUI_KNOB_H

#include "CMUI_Numeric.h"

class CMUI_Knob : public CMUI_Numeric {
protected:
    CMUI_Knob();

public:
    CMUI_Knob(Object * obj);
    CMUI_Knob & operator=(Object * obj);
};


#endif /* CMUI_KNOB_H */

