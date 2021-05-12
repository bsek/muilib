#ifndef POPPEN_H
#define POPPEN_H

#include "Pendisplay.h"
#include "RootClass.h"

namespace Zune {
    class Poppen : public Zune::Pendisplay {
    public:
        Poppen(std::string title, uint8_t cycleChain);

        Poppen(Object *obj);

        Poppen &operator=(Object *obj);

    protected:
        Poppen();
    };
}


#endif /* POPPEN_H */
