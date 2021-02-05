#ifndef MENUSTRIP_H
#define	MENUSTRIP_H

#include "Family.h"

class Menustrip : public Family {
public:
    Menustrip(Object * obj);
    Menustrip(struct NewMenu * nm, IPTR flags);
    Menustrip & operator=(Object * obj);

    BOOL enabled() const;
    void setEnabled(BOOL value);
protected:
    Menustrip();
};

#endif	/* MENUSTRIP_H */

