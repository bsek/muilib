#ifndef BALANCE_H
#define BALANCE_H

#include "Area.h"
#include "ZuneObject.h"

namespace Zune {
    class Balance : public Area {
    protected:
        Balance();

    public:
        Balance(Object *obj);

        Balance &operator=(Object *obj);
    };
}

#endif /* BALANCE_H */

