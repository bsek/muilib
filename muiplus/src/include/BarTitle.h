#ifndef BARTITLE_H
#define    BARTITLE_H

#include "Rectangle.h"
#include "ZuneObject.h"

namespace Zune {
    class BarTitle : public Rectangle {
    protected:
        BarTitle();

    public:
        BarTitle(Object *obj);

        BarTitle(LONG space);

        BarTitle &operator=(Object *obj);
    };
}

#endif    /* BARTITLE_H */

