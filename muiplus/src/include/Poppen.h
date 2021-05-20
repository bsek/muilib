#ifndef POPPEN_H
#define POPPEN_H

#include "Pendisplay.h"
#include "RootClass.h"

namespace Zune {
    class Poppen : public Zune::Pendisplay {
    public:
        Poppen();

        Poppen(Object *obj);

        void build() override;
    };
}


#endif /* POPPEN_H */
