#ifndef PALETTE_H
#define PALETTE_H

#include "Group.h"
#include "ZuneObject.h"

namespace Zune {
    class Palette : public Zune::Group {
    public:
        Palette(Object *obj);

        Palette(BOOL groupable, struct MUI_Palette_Entry *entries, STRPTR *names);

        Palette &operator=(Object *obj);

        struct MUI_Palette_Entry *entries() const;

        BOOL groupable() const;

        void setGroupable(BOOL value);

        STRPTR *names() const;

        void setNames(STRPTR value[]);

    protected:
        Palette();
    };
}


#endif /* PALETTE_H */

