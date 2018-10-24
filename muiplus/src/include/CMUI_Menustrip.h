#ifndef CMUI_MENUSTRIP_H
#define	CMUI_MENUSTRIP_H

#include "CMUI_Family.h"

class CMUI_Menustrip : public CMUI_Family {
public:
    CMUI_Menustrip(Object * obj);
    CMUI_Menustrip(struct NewMenu * nm, IPTR flags);
    CMUI_Menustrip & operator=(Object * obj);

    BOOL enabled() const;
    void setEnabled(BOOL value);
protected:
    CMUI_Menustrip();
};

#endif	/* CMUI_MENUSTRIP_H */

