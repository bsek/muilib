#ifndef CYCLE_H
#define    CYCLE_H

#include "Group.h"
#include "ZuneObject.h"

namespace Zune {
    class Cycle : public Group {
    public:
        Cycle(Object *obj);

        Cycle(std::string label, CONST_STRPTR entries[]);

        Cycle &operator=(Object *obj);

        LONG active(void) const;

        void setActive(LONG value);

    protected:
        Cycle();
    };
}

#endif    /* CYCLE_H */

