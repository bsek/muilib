#ifndef CMUI_BUTTON_H
#define CMUI_BUTTON_H

#include <string>
#include "CMUI_Text.h"

class CMUI_Button : public CMUI_Text {
public:
    CMUI_Button(Object * obj);
    CMUI_Button(std::string label);
    CMUI_Button & operator=(Object * obj);

protected:
    CMUI_Button();
};


#endif
