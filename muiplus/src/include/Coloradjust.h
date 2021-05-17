#ifndef COLORADJUST_H
#define    COLORADJUST_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Coloradjust : public Group {
    public:
        Coloradjust(ULONG red, ULONG green, ULONG blue);

        Coloradjust(Object *obj);

        Coloradjust &operator=(Object *obj);

        IPTR blue() const;

        void setBlue(IPTR value);

        IPTR green() const;

        void setGreen(IPTR value);

        IPTR modeID() const;

        void setModeID(IPTR value);

        IPTR red() const;

        void setRed(IPTR value);

        IPTR *rgb() const;

        void setRgb(IPTR *value);

        void build() override;

        Coloradjust();
    };
}


#endif    /* COLORADJUST_H */

