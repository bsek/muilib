#include "include/CMUI_Palette.h"

CMUI_Palette::CMUI_Palette()
: CMUI_Group() {
}

CMUI_Palette::CMUI_Palette(BOOL groupable, struct MUI_Palette_Entry *entries, STRPTR *names) {
    object = MUI_NewObject(MUIC_Palette, MUIA_Palette_Groupable, (IPTR) groupable,
            MUIA_Palette_Entries, (IPTR) entries, MUIA_Palette_Names, (IPTR) names, TAG_END);
}

CMUI_Palette::CMUI_Palette(Object* obj)
: CMUI_Group() {
    object = obj;
}

CMUI_Palette& CMUI_Palette::operator=(Object* obj) {
    object = obj;
    return *this;
}

struct MUI_Palette_Entry * CMUI_Palette::entries() const {
    return (struct MUI_Palette_Entry *) mGetAttr(MUIA_Palette_Entries);
}

BOOL CMUI_Palette::groupable() const {
    return (BOOL) mGetAttr(MUIA_Palette_Groupable);
}

void CMUI_Palette::setGroupable(BOOL value) {
    setAttr(MUIA_Palette_Groupable, (IPTR) value);
}

char ** CMUI_Palette::names() const {
    return (char **) mGetAttr(MUIA_Palette_Names);
}

void CMUI_Palette::setNames(STRPTR value[]) {
    setAttr(MUIA_Palette_Names, (IPTR) value);
}

