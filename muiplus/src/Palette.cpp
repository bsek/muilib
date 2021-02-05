#include "include/Palette.h"

Palette::Palette()
: Group() {
}

Palette::Palette(BOOL groupable, struct MUI_Palette_Entry *entries, STRPTR *names) {
    object = MUI_NewObject(MUIC_Palette, MUIA_Palette_Groupable, (IPTR) groupable,
            MUIA_Palette_Entries, (IPTR) entries, MUIA_Palette_Names, (IPTR) names, TAG_END);
}

Palette::Palette(Object* obj)
: Group() {
    object = obj;
}

Palette& Palette::operator=(Object* obj) {
    object = obj;
    return *this;
}

struct MUI_Palette_Entry * Palette::entries() const {
    return (struct MUI_Palette_Entry *) mGetAttr(MUIA_Palette_Entries);
}

BOOL Palette::groupable() const {
    return (BOOL) mGetAttr(MUIA_Palette_Groupable);
}

void Palette::setGroupable(BOOL value) {
    setAttr(MUIA_Palette_Groupable, (IPTR) value);
}

char ** Palette::names() const {
    return (char **) mGetAttr(MUIA_Palette_Names);
}

void Palette::setNames(STRPTR value[]) {
    setAttr(MUIA_Palette_Names, (IPTR) value);
}

