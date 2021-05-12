#ifndef SCROLLGROUP_H
#define SCROLLGROUP_H

#include "Group.h"
#include "RootClass.h"
#include "Virtgroup.h"

namespace Zune {
    class Scrollgroup : public Zune::Group {
    public:
        Scrollgroup();

        Scrollgroup(Object *obj);

        Zune::Virtgroup contents() const;

        void setContents(Zune::Virtgroup& virtgroup);

        void setContents(Object *obj);

        Object *horizBar(void) const;

        Object *vertBar(void) const;

        BOOL noHorizBar() const;

        BOOL noVertBar() const;

        void setNoHorizBar(BOOL value);

        void setNoVertBar(BOOL value);

        void setUseWinBorder(BOOL value);

        void setFreeHoriz(BOOL value);

        void setFreeVert(BOOL value);

        BOOL autoBars() const;

        void setAutoBars(BOOL value);

        void build() override;
    };
}


#endif /* SCROLLGROUP_H */

