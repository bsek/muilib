#ifndef DATASPACE_H
#define    DATASPACE_H

#include "Semaphore.h"
#include "RootClass.h"

namespace Zune {
    class Dataspace : public Semaphore {
    public:
        Dataspace();

        Dataspace(Object *obj);

        IPTR add(IPTR data, IPTR len, IPTR id);

        IPTR clear(void);

        IPTR find(IPTR id);

        IPTR merge(Object *dataspace);

        IPTR readIFF(struct IFFHandle *handle);

        IPTR remove(IPTR id);

        IPTR writeIFF(struct IFFHandle *handle, IPTR type, IPTR id);

        void build() override;
    };
}


#endif    /* DATASPACE_H */

