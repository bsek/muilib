#ifndef SCROLLBAR_H
#define SCROLLBAR_H

#include "Group.h"
#include "ZuneObject.h"

namespace Zune {
    class Scrollbar : public Zune::Group {
    public:
        Scrollbar(Object *obj);

        Scrollbar &operator=(Object *obj);

    protected:
        Scrollbar();
    };
}

#endif /* SCROLLBAR_H */

