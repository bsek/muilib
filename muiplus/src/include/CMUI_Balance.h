#ifndef CMUI_BALANCE_H
#define CMUI_BALANCE_H

#include "CMUI_Area.h"

class CMUI_Balance : public CMUI_Area {
protected:
    CMUI_Balance();
public:
    CMUI_Balance(Object * obj);
    CMUI_Balance & operator=(Object * obj);
};

#endif /* CMUI_BALANCE_H */

