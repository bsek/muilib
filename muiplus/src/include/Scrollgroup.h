#ifndef SCROLLGROUP_H
#define SCROLLGROUP_H

#include "Group.h"
#include "ZuneObject.h"

namespace Zune {
    class Scrollgroup : public Zune::Group {
    protected:
        Scrollgroup();

    public:
        Scrollgroup(Object* contents, bool showVert, bool showHoriz);
        Scrollgroup(Object * obj);
        Scrollgroup & operator=(Object * obj);

        void setContents(Object* object);
        Object * horizBar(void) const;
        Object * vertBar(void) const;
    };
}


#endif /* SCROLLGROUP_H */

