#ifndef CMUI_SCROLLBAR_H
#define CMUI_SCROLLBAR_H

#include "CMUI_Group.h"

class CMUI_Scrollbar : public CMUI_Group {
public:
    CMUI_Scrollbar(Object * obj);
    CMUI_Scrollbar & operator=(Object * obj);

protected:
    CMUI_Scrollbar();
};


#endif /* CMUI_SCROLLBAR_H */

