#ifndef SCALE_H
#define SCALE_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Scale : public Area {
    public:
        Scale();

        Scale(Object *obj);

        BOOL horiz() const;

        void setHoriz(BOOL value);

        void build() override;
    };
}

#endif /* SCALE_H */
