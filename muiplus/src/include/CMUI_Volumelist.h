#ifndef CMUI_VOLUMELIST_H
#define CMUI_VOLUMELIST_H

#include "CMUI_List.h"

class CMUI_Volumelist : public CMUI_List {
public:
    CMUI_Volumelist(Object * obj);
    CMUI_Volumelist & operator=(Object * obj);

protected:
    CMUI_Volumelist();
};


#endif /* CMUI_VOLUMELIST_H */

