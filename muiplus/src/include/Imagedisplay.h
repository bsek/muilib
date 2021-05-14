#ifndef MIU_PLUS_AROS_IMAGEDISPLAY_H
#define MIU_PLUS_AROS_IMAGEDISPLAY_H

#include "Area.h"

namespace Zune {
    class Imagedisplay : public Zune::Area {
    public:
        Imagedisplay();

        Imagedisplay(Object *obj);

        void setSpec(std::string &spec);

        std::string spec();

        void setUseDefSize(BOOL defSize);

        void setFreeHoriz(BOOL value);

        void setFreeVert(BOOL value);

        void build() override;
    };
}


#endif //MIU_PLUS_AROS_IMAGEDISPLAY_H
