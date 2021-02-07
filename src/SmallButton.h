#ifndef SMALL_BUTTON_H
#define SMALL_BUTTON_H

#include <Area.h>
#include "ZuneObject.h"

class SmallButton : public Zune::Area {
private:
    int width;
    std::string text;
public:
    void setWidth(int);
    SmallButton(std::string text);
    IPTR handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax* askMinMax) override;
    IPTR handleDraw(Class *cl, Object *obj, struct MUIP_Draw *msg) override;
};

#endif