#ifndef KNOB_H
#define KNOB_H

#include "Numeric.h"

class Knob : public Numeric {
protected:
    Knob();

public:
    Knob(Object * obj);
    Knob & operator=(Object * obj);
};


#endif /* KNOB_H */

