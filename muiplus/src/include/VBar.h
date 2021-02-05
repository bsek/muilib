#ifndef VBAR_H
#define VBAR_H

#include "Rectangle.h"

class VBar : public Rectangle {
protected:
    VBar();

public:
    VBar(Object * obj);
    VBar(LONG space);
    VBar & operator=(Object * obj);
};


#endif /* VBAR_H */

