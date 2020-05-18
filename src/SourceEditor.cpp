//
// Created by bsek on 02.03.2020.
//

#include "SourceEditor.h"

IPTR SourceEditor::handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax *askMinMax) {
    DoSuperMethodA(cl, obj, (Msg) askMinMax);

    askMinMax->MinMaxInfo->MinWidth += 40;
    askMinMax->MinMaxInfo->DefWidth += 200;
    askMinMax->MinMaxInfo->MaxWidth += 400;
    askMinMax->MinMaxInfo->MinHeight += 20;
    askMinMax->MinMaxInfo->DefHeight += 20;
    askMinMax->MinMaxInfo->MaxHeight += 300;

    return 0;
}

SourceEditor::SourceEditor() {
    registerClass();

}
