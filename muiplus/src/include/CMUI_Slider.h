#ifndef CMUI_SLIDER_H
#define CMUI_SLIDER_H

#include "CMUI_Numeric.h"

class CMUI_Slider : public CMUI_Numeric {
protected:
    CMUI_Slider();

public:
    CMUI_Slider(Object * obj);
    CMUI_Slider(std::string label, LONG min, LONG max);
    CMUI_Slider & operator=(Object * obj);

    BOOL horiz() const;
    void setHoriz(BOOL value);
};

#endif /* CMUI_SLIDER_H */

