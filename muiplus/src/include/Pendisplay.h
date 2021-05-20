#ifndef PENDISPLAY_H
#define    PENDISPLAY_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Pendisplay : public Zune::Area {
    public:
        Pendisplay();

        explicit Pendisplay(Object *obj);

        Object *pen() const;

        Object *reference() const;

        void setReference(Object *value);

        struct MUI_RGBcolor *getRGBcolor() const;

        void setRGBcolor(struct MUI_RGBcolor *value);

        struct MUI_PenSpec *spec() const;

        void setSpec(struct MUI_PenSpec *value);

        IPTR setColormap(LONG colormap);

        IPTR setMUIPen(LONG muipen);

        IPTR setRGB(ULONG red, ULONG green, ULONG blue);

        void build() override;
    };
}

#endif

