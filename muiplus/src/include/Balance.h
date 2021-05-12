#ifndef BALANCE_H
#define BALANCE_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Balance : public Zune::Area {
    public:
        Balance();

        explicit Balance(Object* obj);

        void setQuiet(bool quiet);

        void build() override;

    };
}

#endif /* BALANCE_H */