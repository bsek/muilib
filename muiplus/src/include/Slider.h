#ifndef SLIDER_H
#define SLIDER_H

#include "Numeric.h"
#include "RootClass.h"

namespace Zune {
    class Slider : public Numeric {
    public:
        Slider();

        explicit Slider(Object *obj);

        BOOL horiz() const;

        void setHoriz(BOOL value);


        void setQuiet(BOOL value);

        void build() override;
    };
}

#endif /* SLIDER_H */

