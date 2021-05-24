#ifndef SCROLLBUTTON_H
#define SCROLLBUTTON_H

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


#endif //SCROLLBUTTON_H
