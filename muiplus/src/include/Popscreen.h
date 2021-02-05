#ifndef POPSCREEN_H
#define POPSCREEN_H

#include "Popobject.h"

class Popscreen : public Popobject {
protected:
    Popscreen();

public:
    Popscreen(Object * obj);
    Popscreen & operator=(Object * obj);
};

#endif /* POPSCREEN_H */

