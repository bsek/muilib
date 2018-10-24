#ifndef CMUI_SCALE_H
#define CMUI_SCALE_H

#include "CMUI_Area.h"

class CMUI_Scale : public CMUI_Area {
protected:
    CMUI_Scale();

public:
    CMUI_Scale(Object * obj);
    CMUI_Scale & operator=(Object * obj);

    BOOL Horiz() const;
    void SetHoriz(BOOL value);
};

#endif /* CMUI_SCALE_H */
