#include "include/Palette.h"
#include "include/RootClass.h"

Zune::Palette::Palette() = default;

Zune::Palette::Palette(Object *obj) {
    object = obj;
}

struct MUI_Palette_Entry *Zune::Palette::entries() const {
    return reinterpret_cast<struct MUI_Palette_Entry *>(mGetAttr(MUIA_Palette_Entries));
}

void Zune::Palette::setEntries(struct MUI_Palette_Entry *entries) {
    configmap[MUIA_Palette_Entries] = reinterpret_cast<IPTR>(entries);
}

BOOL Zune::Palette::groupable() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Palette_Groupable));
}

void Zune::Palette::setGroupable(BOOL value) {
    setOrStore(MUIA_Palette_Groupable, static_cast<IPTR>(value));
}

char **Zune::Palette::names() const {
    return reinterpret_cast<char **>(mGetAttr(MUIA_Palette_Names));
}

void Zune::Palette::setNames(std::vector<std::string> names) {
    CONST_STRPTR values[names.size()];
    WORD i = 0;
    for (std::string name : names) {
        values[i++] = name.c_str();
    }
    setOrStore(MUIA_Palette_Names, reinterpret_cast<IPTR>(values));
}

