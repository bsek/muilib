#ifndef HSPACE_H
#define	HSPACE_H

#include "Rectangle.h"

class HSpace : public Rectangle {
protected:
    HSpace();

public:
    HSpace(Object * obj);
    HSpace(LONG space);
    HSpace & operator=(Object * obj);
};


#endif	/* HSPACE_H */

