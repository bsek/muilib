#ifndef SLIDER_H
#define SLIDER_H

#include "Numeric.h"
#include "RootClass.h"

namespace Zune {
    class Slider : public Numeric {
    protected:
        Slider();

    public:
        Slider(Object *obj);

        Slider(std::string label, LONG min, LONG max);

        Slider &operator=(Object *obj);

        BOOL horiz() const;

        void setHoriz(BOOL value);
    };
}

#endif /* SLIDER_H */

