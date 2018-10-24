#ifndef CMUI_DATASPACE_H
#define	CMUI_DATASPACE_H

#include "CMUI_Semaphore.h"

class CMUI_Dataspace : public CMUI_Semaphore {
protected:
    CMUI_Dataspace();
public:
    CMUI_Dataspace(Object * obj);
    CMUI_Dataspace & operator=(Object * obj);

    IPTR add(IPTR data, LONG len, IPTR id);
    IPTR clear(void);
    IPTR find(IPTR id);
    IPTR merge(Object *dataspace);
    IPTR readIFF(struct IFFHandle *handle);
    IPTR remove(IPTR id);
    IPTR writeIFF(struct IFFHandle *handle, IPTR type, IPTR id);
};


#endif	/* CMUI_DATASPACE_H */

