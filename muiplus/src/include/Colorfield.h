#ifndef COLORFIELD_H
#define    COLORFIELD_H

#include "Area.h"
#include "ZuneObject.h"

namespace Zune {
    class Colorfield : public Area {
    public:
        Colorfield(ULONG red, ULONG green, ULONG blue);

        Colorfield(Object *obj);

        Colorfield &operator=(Object *obj);

        IPTR blue() const;

        void setBlue(IPTR value);

        IPTR green() const;

        void setGreen(IPTR value);

        IPTR pen() const;

        IPTR red() const;

        void setRed(IPTR value);

        IPTR *rgb() const;

        void setRgb(IPTR *value);

    protected:
        Colorfield();
    };
}

#endif
