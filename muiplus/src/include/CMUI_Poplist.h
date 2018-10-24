#ifndef CMUI_POPLIST_H
#define CMUI_POPLIST_H

#include "CMUI_Popobject.h"

class CMUI_Poplist : public CMUI_Popobject {
public:
    CMUI_Poplist(STRPTR list[]);
    CMUI_Poplist(Object * obj);
    CMUI_Poplist & operator=(Object * obj);

protected:
    CMUI_Poplist();
};


#endif /* CMUI_POPLIST_H */

