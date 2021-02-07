#ifndef NUMERICBUTTON_H
#define NUMERICBUTTON_H

#include "Numeric.h"
#include "ZuneObject.h"

namespace Zune {
    class Numericbutton : public Zune::Numeric {
    public:
        Numericbutton(Object *obj);

        Numericbutton(LONG min, LONG max, std::string format);

        Numericbutton &operator=(Object *obj);

    protected:
        Numericbutton();
    };
}


#endif /* NUMERICBUTTON_H */

