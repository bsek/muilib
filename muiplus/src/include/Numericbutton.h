#ifndef NUMERICBUTTON_H
#define NUMERICBUTTON_H

#include "Numeric.h"
#include "RootClass.h"

namespace Zune {
    class Numericbutton : public Zune::Numeric {
    public:
        Numericbutton();

        explicit Numericbutton(Object *obj);

        void build() override;
    };
}


#endif /* NUMERICBUTTON_H */

