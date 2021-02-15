#ifndef MIU_PLUS_AROS_SOURCEEDITOR_H
#define MIU_PLUS_AROS_SOURCEEDITOR_H

#include <Area.h>

class SourceEditor : public Zune::Area {
public:
    SourceEditor();

public:
    IPTR handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax *msg) override;
};

#endif //MIU_PLUS_AROS_SOURCEEDITOR_H
