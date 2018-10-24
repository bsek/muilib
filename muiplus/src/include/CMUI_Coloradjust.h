#ifndef CMUI_COLORADJUST_H
#define	CMUI_COLORADJUST_H

#include "CMUI_Group.h"

class CMUI_Coloradjust : public CMUI_Group {
public:
    CMUI_Coloradjust(ULONG red, ULONG green, ULONG blue);
    CMUI_Coloradjust(Object * obj);
    CMUI_Coloradjust & operator=(Object * obj);

    IPTR blue() const;
    void setBlue(IPTR value);
    IPTR green() const;
    void setGreen(IPTR value);
    IPTR modeID() const;
    void setModeID(IPTR value);
    IPTR red() const;
    void setRed(IPTR value);
    IPTR * rgb() const;
    void setRgb(IPTR * value);

protected:
    CMUI_Coloradjust();
};


#endif	/* CMUI_COLORADJUST_H */

