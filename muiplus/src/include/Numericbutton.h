#ifndef NUMERICBUTTON_H
#define NUMERICBUTTON_H

#include "Numeric.h"

class Numericbutton : public Numeric {
public:
    Numericbutton(Object * obj);
    Numericbutton(LONG min, LONG max, std::string format);
    Numericbutton & operator=(Object * obj);

protected:
    Numericbutton();
};


#endif /* NUMERICBUTTON_H */

