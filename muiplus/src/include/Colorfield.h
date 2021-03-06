#ifndef COLORFIELD_H
#define    COLORFIELD_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Colorfield : public Area {
    public:
        Colorfield(Object *obj);

        IPTR blue() const;

        void setBlue(IPTR value);

        IPTR green() const;

        void setGreen(IPTR value);

        IPTR pen() const;

        IPTR red() const;

        void setRed(IPTR value);

        IPTR *rgb() const;

        void setRgb(IPTR *value);

        Colorfield();

        void build() override;
    };
}

#endif
