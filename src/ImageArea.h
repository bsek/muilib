#ifndef MIU_PLUS_AROS_IMAGEAREA_H
#define MIU_PLUS_AROS_IMAGEAREA_H

#include <Virtgroup.h>
#include <Button.h>
#include <Register.h>
#include <Cycle.h>
#include "ZuneObject.h"

class ImageArea : public Zune::Virtgroup {
private:
    std::string label{"this is a label"};
    CONST_STRPTR *rGenderContent;
    Zune::Register *cmuiRegister;
    Zune::Cycle *cycle;
    struct MUI_EventHandlerNode ehnode;

    int mouse_x;
    int mouse_y;
    bool move_active;

public:
    ImageArea();
    IPTR handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax* askMinMax) override;

    IPTR handleDraw(Class *cl, Object *obj, struct MUIP_Draw *msg) override;

    IPTR handleSetup(Class *cl, Object *obj, struct MUI_RenderInfo* msg) override;

    IPTR handleEvent(Class *cl, Object *obj, struct MUIP_HandleEvent *msg) override;

    IPTR handleInput(Class *cl, Object *obj, struct MUIP_HandleInput *msg) override;

    void setMoveActive();

    //   IPTR drawBackground(LONG left, LONG top, LONG width, LONG height, LONG xoffset, LONG yoffset, LONG flags) override;
};

#endif //MIU_PLUS_AROS_IMAGEAREA_H
