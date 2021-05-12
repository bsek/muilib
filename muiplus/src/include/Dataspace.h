#ifndef DATASPACE_H
#define    DATASPACE_H

#include "Semaphore.h"
#include "RootClass.h"

namespace Zune {
    class Dataspace : public Semaphore {
    protected:
        Dataspace();

    public:
        Dataspace(Object *obj);

        Dataspace &operator=(Object *obj);

        IPTR add(IPTR data, LONG len, IPTR id);

        IPTR clear(void);

        IPTR find(IPTR id);

        IPTR merge(Object *dataspace);

        IPTR readIFF(struct IFFHandle *handle);

        IPTR remove(IPTR id);

        IPTR writeIFF(struct IFFHandle *handle, IPTR type, IPTR id);
    };
}


#endif    /* DATASPACE_H */

