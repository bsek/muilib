#ifndef CMUI_VBAR_H
#define CMUI_VBAR_H

#include "CMUI_Rectangle.h"

class CMUI_VBar : public CMUI_Rectangle {
protected:
    CMUI_VBar();

public:
    CMUI_VBar(Object * obj);
    CMUI_VBar(LONG space);
    CMUI_VBar & operator=(Object * obj);
};


#endif /* CMUI_VBAR_H */

