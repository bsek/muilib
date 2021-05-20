#ifndef POPASL_H
#define    POPASL_H

#include "Popstring.h"
#include "RootClass.h"

namespace Zune {
    class Popasl : public Popstring {
    public:
        Popasl();

        Popasl(Object *obj);

        BOOL active() const;

        struct Hook *startHook() const;

        void setStartHook(struct Hook *value);

        struct Hook *stopHook() const;

        void setStopHook(struct Hook *value);

        ULONG getType() const;

        void setType(ULONG type);

        void build() override;
    };
}


#endif    /* POPASL_H */

