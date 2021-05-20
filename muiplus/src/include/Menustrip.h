#ifndef MENUSTRIP_H
#define    MENUSTRIP_H

#include "Family.h"
#include "RootClass.h"

namespace Zune {
    class Menustrip : public Zune::Family {
    public:
        Menustrip();

        Menustrip(Object *obj);

        BOOL enabled() const;

        void setEnabled(BOOL value);

        void build() override;
    };
}

#endif    /* MENUSTRIP_H */

