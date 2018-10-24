#ifndef CMUI_PALETTE_H
#define CMUI_PALETTE_H

#include "CMUI_Group.h"

class CMUI_Palette : public CMUI_Group {
public:
    CMUI_Palette(Object * obj);
    CMUI_Palette(BOOL groupable, struct MUI_Palette_Entry * entries, STRPTR * names);
    CMUI_Palette & operator=(Object * obj);

    struct MUI_Palette_Entry * entries() const;
    BOOL groupable() const;
    void setGroupable(BOOL value);
    STRPTR * names() const;
    void setNames(STRPTR value[]);

protected:
    CMUI_Palette();
};


#endif /* CMUI_PALETTE_H */

