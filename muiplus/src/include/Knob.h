#ifndef KNOB_H
#define KNOB_H

#include "Numeric.h"
#include "RootClass.h"

namespace Zune {
    class Knob : public Numeric {
    public:
        Knob();

        Knob(Object *obj);

        void build() override;
    };
}

#endif /* KNOB_H */

