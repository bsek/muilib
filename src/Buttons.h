#ifndef MIU_PLUS_AROS_BUTTONS_H
#define MIU_PLUS_AROS_BUTTONS_H

#include <CMUI_Button.h>
#include <CMUI_Group.h>
#include <CMUI_HGroup.h>
#include <CMUI_Checkmark.h>

class Buttons : public CMUI_Group {
private:
    CMUI_Button importButton{"Test button"};
    CMUI_Checkmark *importJPEG;
    CMUI_Button bAdd{"Add & show new record"};
    CMUI_Button bClose{"Close"};
    CMUI_Button *bInfo;
    CMUI_HGroup group;
public:
    Buttons();
};


#endif //MIU_PLUS_AROS_BUTTONS_H
