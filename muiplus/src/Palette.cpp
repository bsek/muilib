#include "include/Palette.h"
#include "include/Group.h"
#include "include/ZuneObject.h"

Zune::Palette::Palette()
        : Group() {
}

Zune::Palette::Palette(BOOL groupable, struct MUI_Palette_Entry *entries, STRPTR *names) {
    object = MUI_NewObject(MUIC_Palette, MUIA_Palette_Groupable, (IPTR) groupable,
                           MUIA_Palette_Entries, (IPTR) entries, MUIA_Palette_Names, (IPTR) names, TAG_END);
}

Zune::Palette::Palette(Object *obj)
        : Group() {
    object = obj;
}

Zune::Palette &Zune::Palette::operator=(Object *obj) {
    object = obj;
    return *this;
}

struct MUI_Palette_Entry *Zune::Palette::entries() const {
    return (struct MUI_Palette_Entry *) mGetAttr(MUIA_Palette_Entries);
}

BOOL Zune::Palette::groupable() const {
    return (BOOL) mGetAttr(MUIA_Palette_Groupable);
}

void Zune::Palette::setGroupable(BOOL value) {
    setAttr(MUIA_Palette_Groupable, (IPTR) value);
}

char **Zune::Palette::names() const {
    return (char **) mGetAttr(MUIA_Palette_Names);
}

void Zune::Palette::setNames(STRPTR value[]) {
    setAttr(MUIA_Palette_Names, (IPTR) value);
}

