#ifndef POPSCREEN_H
#define POPSCREEN_H

#include "Popobject.h"
#include "RootClass.h"

namespace Zune {
    class Popscreen : public Zune::Popobject {
    protected:
        Popscreen();

    public:
        Popscreen(Object *obj);

        Popscreen &operator=(Object *obj);
    };
}

#endif /* POPSCREEN_H */

