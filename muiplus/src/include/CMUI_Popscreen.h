#ifndef CMUI_POPSCREEN_H
#define CMUI_POPSCREEN_H

#include "CMUI_Popobject.h"

class CMUI_Popscreen : public CMUI_Popobject {
protected:
    CMUI_Popscreen();

public:
    CMUI_Popscreen(Object * obj);
    CMUI_Popscreen & operator=(Object * obj);
};

#endif /* CMUI_POPSCREEN_H */

