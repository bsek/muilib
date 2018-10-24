#ifndef CMUI_BARTITLE_H
#define	CMUI_BARTITLE_H

#include "CMUI_Rectangle.h"

class CMUI_BarTitle : public CMUI_Rectangle {
protected:
    CMUI_BarTitle();
public:
    CMUI_BarTitle(Object * obj);
    CMUI_BarTitle(LONG space);
    CMUI_BarTitle & operator=(Object * obj);
};

#endif	/* CMUI_BARTITLE_H */

