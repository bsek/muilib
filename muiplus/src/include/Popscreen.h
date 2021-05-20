#ifndef POPSCREEN_H
#define POPSCREEN_H

#include "Popobject.h"
#include "RootClass.h"

namespace Zune {
    class Popscreen : public Zune::Popobject {
    public:
        Popscreen();

        Popscreen(Object *obj);

        void build() override;
    };
}

#endif /* POPSCREEN_H */

