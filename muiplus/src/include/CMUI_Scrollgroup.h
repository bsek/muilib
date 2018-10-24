#ifndef CMUI_SCROLLGROUP_H
#define CMUI_SCROLLGROUP_H

#include "CMUI_Group.h"

class CMUI_Scrollgroup : public CMUI_Group {
protected:
    CMUI_Scrollgroup();

public:
    CMUI_Scrollgroup(Object* contents, bool showVert, bool showHoriz);
    CMUI_Scrollgroup(Object * obj);
    CMUI_Scrollgroup & operator=(Object * obj);

    void setContents(Object* object);
    Object * horizBar(void) const;
    Object * vertBar(void) const;
};


#endif /* CMUI_SCROLLGROUP_H */

