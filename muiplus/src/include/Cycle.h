#ifndef CYCLE_H
#define    CYCLE_H

#include "Group.h"
#include <string.h>

namespace Zune {
    class Cycle : public Group {
    public:
        Cycle();

        explicit Cycle(Object *obj);

        IPTR active() const;

        void setActive(IPTR value);

        void setEntries(STRPTR *entries);

        void build() override;
    };
}

#endif    /* CYCLE_H */

