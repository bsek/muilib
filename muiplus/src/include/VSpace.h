#ifndef VSPACE_H
#define VSPACE_H

#include "Rectangle.h"

class VSpace : public Rectangle {
protected:
    VSpace();

public:
    VSpace(Object * obj);
    VSpace(LONG space);
    VSpace & operator=(Object * obj);
};


#endif /* VSPACE_H */

