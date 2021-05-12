#ifndef SCROLLBAR_H
#define SCROLLBAR_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Scrollbar : public Zune::Group {
    public:
        Scrollbar();

        explicit Scrollbar(Object *obj);

        void setScrollbarType(LONG type);

        void build() override;
    };
}

#endif /* SCROLLBAR_H */

