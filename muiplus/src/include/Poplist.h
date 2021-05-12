#ifndef POPLIST_H
#define POPLIST_H

#include "Popobject.h"
#include "RootClass.h"

namespace Zune {
    class Poplist : public Popobject {
    public:
        Poplist(STRPTR list[]);

        Poplist(Object *obj);

        Poplist &operator=(Object *obj);

    protected:
        Poplist();
    };
}


#endif /* POPLIST_H */

