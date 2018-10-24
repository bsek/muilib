#ifndef MIU_PLUS_AROS_BUTTONS_H
#define MIU_PLUS_AROS_BUTTONS_H

#include <CMUI_Button.h>
#include <CMUI_VGroup.h>
#include <CMUI_Checkmark.h>

class Buttons : public CMUI_VGroup {
private:
    CMUI_Button importButton{"Test button"};
    CMUI_Checkmark *importJPEG;

public:
    Buttons();
};


#endif //MIU_PLUS_AROS_BUTTONS_H
