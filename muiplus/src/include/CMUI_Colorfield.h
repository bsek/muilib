#ifndef CMUI_COLORFIELD_H
#define	CMUI_COLORFIELD_H

#include "CMUI_Area.h"

class CMUI_Colorfield : public CMUI_Area {
public:
    CMUI_Colorfield(ULONG red, ULONG green, ULONG blue);
    CMUI_Colorfield(Object * obj);
    CMUI_Colorfield & operator=(Object * obj);

    IPTR blue() const;
    void setBlue(IPTR value);
    IPTR green() const;
    void setGreen(IPTR value);
    IPTR pen() const;
    IPTR red() const;
    void setRed(IPTR value);
    IPTR * rgb() const;
    void setRgb(IPTR * value);

protected:
    CMUI_Colorfield();
};

#endif
