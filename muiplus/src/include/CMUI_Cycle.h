#ifndef CMUI_CYCLE_H
#define	CMUI_CYCLE_H

#include "CMUI_Group.h"

class CMUI_Cycle : public CMUI_Group {
public:
    CMUI_Cycle(Object * obj);
    CMUI_Cycle(std::string label, STRPTR entries[]);
    CMUI_Cycle & operator=(Object * obj);

    LONG active(void) const;
    void setActive(LONG value);

protected:
    CMUI_Cycle();
};

#endif	/* CMUI_CYCLE_H */

