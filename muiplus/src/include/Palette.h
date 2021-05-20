#ifndef PALETTE_H
#define PALETTE_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Palette : public Zune::Group {
    public:
        Palette(Object *obj);

        struct MUI_Palette_Entry *entries() const;

        void setEntries(struct MUI_Palette_Entry* entries);

        BOOL groupable() const;

        void setGroupable(BOOL value);

        STRPTR *names() const;

        void setNames(std::vector<std::string> names);

    protected:
        Palette();
    };
}


#endif /* PALETTE_H */

