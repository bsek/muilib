#ifndef CMUI_GADGET_H
#define	CMUI_GADGET_H

#include "CMUI_Area.h"

class CMUI_Gadget : public CMUI_Area {
public:
    struct Gadget * Gadget() const;
protected:
    CMUI_Gadget();
};

#endif	/* CMUI_GADGET_H */

