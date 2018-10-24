#ifndef CMUI_PENDISPLAY_H
#define	CMUI_PENDISPLAY_H

#include "CMUI_Area.h"

class CMUI_Pendisplay : public CMUI_Area {
public:
    CMUI_Pendisplay(Object * reference, struct MUI_RGBcolor * color, struct MUI_PenSpec * spec);
    CMUI_Pendisplay(Object * obj);
    CMUI_Pendisplay & operator=(Object * obj);

    Object * pen() const;
    Object * reference() const;
    void setReference(Object *value);
    struct MUI_RGBcolor * getRGBcolor() const;
    void setRGBcolor(struct MUI_RGBcolor *value);
    struct MUI_PenSpec * spec() const;
    void setSpec(struct MUI_PenSpec *value);
    IPTR setColormap(LONG colormap);
    IPTR setMUIPen(LONG muipen);
    IPTR setRGB(IPTR red, IPTR green, IPTR blue);

protected:
    CMUI_Pendisplay();
};

#endif	/* CMUI_PENDISPLAY_H */

