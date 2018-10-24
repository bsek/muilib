#ifndef CMUI_HSPACE_H
#define	CMUI_HSPACE_H

#include "CMUI_Rectangle.h"

class CMUI_HSpace : public CMUI_Rectangle {
protected:
    CMUI_HSpace();

public:
    CMUI_HSpace(Object * obj);
    CMUI_HSpace(LONG space);
    CMUI_HSpace & operator=(Object * obj);
};


#endif	/* CMUI_HSPACE_H */

