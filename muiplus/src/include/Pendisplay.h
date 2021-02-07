#ifndef PENDISPLAY_H
#define    PENDISPLAY_H

#include "Area.h"
#include "ZuneObject.h"

namespace Zune {
    class Pendisplay : public Zune::Area {
    public:
        Pendisplay(Object *reference, struct MUI_RGBcolor *color, struct MUI_PenSpec *spec);

        Pendisplay(Object *obj);

        Pendisplay &operator=(Object *obj);

        Object *pen() const;

        Object *reference() const;

        void setReference(Object *value);

        struct MUI_RGBcolor *getRGBcolor() const;

        void setRGBcolor(struct MUI_RGBcolor *value);

        struct MUI_PenSpec *spec() const;

        void setSpec(struct MUI_PenSpec *value);

        IPTR setColormap(LONG colormap);

        IPTR setMUIPen(LONG muipen);

        IPTR setRGB(IPTR red, IPTR green, IPTR blue);

    protected:
        Pendisplay();
    };
}

#endif    /* PENDISPLAY_H */

