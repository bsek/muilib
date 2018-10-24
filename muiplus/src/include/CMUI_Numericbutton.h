#ifndef CMUI_NUMERICBUTTON_H
#define CMUI_NUMERICBUTTON_H

#include "CMUI_Numeric.h"

class CMUI_Numericbutton : public CMUI_Numeric {
public:
    CMUI_Numericbutton(Object * obj);
    CMUI_Numericbutton(LONG min, LONG max, std::string format);
    CMUI_Numericbutton & operator=(Object * obj);

protected:
    CMUI_Numericbutton();
};


#endif /* CMUI_NUMERICBUTTON_H */

