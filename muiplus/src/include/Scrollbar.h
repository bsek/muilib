#ifndef SCROLLBAR_H
#define SCROLLBAR_H

#include "Group.h"

class Scrollbar : public Group {
public:
    Scrollbar(Object * obj);
    Scrollbar & operator=(Object * obj);

protected:
    Scrollbar();
};


#endif /* SCROLLBAR_H */

