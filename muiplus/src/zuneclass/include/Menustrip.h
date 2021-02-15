#ifndef MENUSTRIP_H
#define    MENUSTRIP_H

#include "Family.h"
#include "RootClass.h"

namespace Zune {
    class Menustrip : public Zune::Family {
    public:
        Menustrip(Object *obj);

        Menustrip(struct NewMenu *nm, IPTR flags);

        Menustrip &operator=(Object *obj);

        BOOL enabled() const;

        void setEnabled(BOOL value);

    protected:
        Menustrip();
    };
}

#endif    /* MENUSTRIP_H */

