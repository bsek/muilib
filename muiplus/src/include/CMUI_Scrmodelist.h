#ifndef CMUI_SCRMODELIST_H
#define CMUI_SCRMODELIST_H

#include "CMUI_List.h"

class CMUI_Scrmodelist : public CMUI_List {
protected:
    CMUI_Scrmodelist();

public:
    CMUI_Scrmodelist(Object * obj);
    CMUI_Scrmodelist & operator=(Object * obj);
};

#endif /* CMUI_SCRMODELIST_H */

