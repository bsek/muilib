#ifndef MIU_PLUS_AROS_IMAGEAREA_H
#define MIU_PLUS_AROS_IMAGEAREA_H

#include <CMUI_Virtgroup.h>
#include <CMUI_Button.h>
#include <CMUI_Register.h>
#include <CMUI_Cycle.h>

class ImageArea : public CMUI_Virtgroup {
private:
    std::string label{"this is a label"};
    STRPTR rGenderContent[3];
    CMUI_Register *cmuiRegister;
    CMUI_Cycle *cycle;
public:
    ImageArea();
    IPTR handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax* askMinMax) override;
    IPTR handleDispatch(Class *cl, Object *obj, Msg msg);
 //   IPTR drawBackground(LONG left, LONG top, LONG width, LONG height, LONG xoffset, LONG yoffset, LONG flags) override;
};

#endif //MIU_PLUS_AROS_IMAGEAREA_H
