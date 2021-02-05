#ifndef GADGET_H
#define	GADGET_H

#include "Area.h"

class Gadget : public Area {
public:
    struct Gadget * Gadget() const;
protected:
    Gadget();
};

#endif	/* GADGET_H */

