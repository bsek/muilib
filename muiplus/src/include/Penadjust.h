#ifndef PENADJUST_H
#define    PENADJUST_H

#include "Register.h"

namespace Zune {
    class Penadjust : public Register {
    public:
        Penadjust();

        Penadjust(Object *obj);

        void build() override;
    };
}

#endif    /* PENADJUST_H */

