#include "SmallButton.h"
#include <proto/graphics.h>

SmallButton::SmallButton(std::string text) : CMUI_Area() {
    registerClass();
    width = 50;
    set(MUIA_InputMode, MUIV_InputMode_RelVerify);
    set(MUIA_Frame, MUIV_Frame_Button);
    this->text = text;
}

void SmallButton::setWidth(int w) {
    this->width = w;
}

IPTR SmallButton::handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax* askMinMax) {
    DoSuperMethodA(cl, obj, (Msg) askMinMax);

    std::cerr << "Initial width:" << askMinMax->MinMaxInfo->DefWidth << std::endl;
    std::cerr << "Initial height:" << askMinMax->MinMaxInfo->DefHeight << std::endl;

    askMinMax->MinMaxInfo->MinWidth += width;
    askMinMax->MinMaxInfo->DefWidth += width;
    askMinMax->MinMaxInfo->MaxWidth += width;
    askMinMax->MinMaxInfo->MinHeight += 20;
    askMinMax->MinMaxInfo->DefHeight += 20;
    askMinMax->MinMaxInfo->MaxHeight += 20;

    return 0;
}

IPTR SmallButton::handleDraw(Class *cl, Object *obj, struct MUIP_Draw *msg) {
    DoSuperMethodA(cl, obj, (Msg)msg); // ALWAYS REQUIRED!


    if(msg->flags & MADF_DRAWUPDATE)
    {
    }
    else if(msg->flags & MADF_DRAWOBJECT)
    {
        auto rasterport = _rp(obj);
        SetAPen(rasterport, 3);
        auto top = _mtop(obj);
        auto left = _mleft(obj);
        auto right = _mright(obj);
        auto bottom = _mbottom(obj);
        RectFill(rasterport, left, top, right, bottom);

        SetAPen(rasterport, 2);
        Move(rasterport, left + 5, top + 14);
        Text(rasterport, text.c_str(), text.length());
    }

    // if MADF_DRAWOBJECT wasn't set, MUI just wanted to update
    // the frame or some other part of our object. In this case
    // we just do nothing.

    return 0;
}
