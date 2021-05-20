#ifndef MCCPREFS_H
#define MCCPREFS_H

#include "Group.h"

namespace Zune {
    class Mccprefs : public Zune::Group {
    public:
        Mccprefs();

        Mccprefs(Object *obj);

        void build() override;
    };
}


#endif /* MCCPREFS_H */

