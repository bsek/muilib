#ifndef MIU_PLUS_AROS_SCROLLBUTTON_H
#define MIU_PLUS_AROS_SCROLLBUTTON_H

#include "Area.h"

namespace Zune {
    class Scrollbutton : public Zune::Area {
    public:
        Scrollbutton();

        Scrollbutton(Object *obj);

        void setHoriz(WORD horiz);

        void setVert(WORD vert);

        WORD vert();

        WORD horiz();

        Object* horizProp();

        Object* vertProp();

        ULONG newPosition();

        void build() override;
    };
}


#endif //MIU_PLUS_AROS_SCROLLBUTTON_H
