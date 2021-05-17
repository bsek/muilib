#ifndef CONFIGDATA_H
#define    CONFIGDATA_H

#include "Dataspace.h"

namespace Zune {
    class Configdata : public Dataspace {
    public:
        Configdata();

        Configdata(Object *obj);

        void build() override;
    };
}


#endif

