#ifndef MIU_PLUS_AROS_FRAMEDISPLAY_H
#define MIU_PLUS_AROS_FRAMEDISPLAY_H

#include "Area.h"

namespace Zune {
    class Framedisplay : public Zune::Area {
    public:
        Framedisplay();

        Framedisplay(Object *obj);

        void setSpec(std::string& spec);

        std::string spec();

        void build() override;
    };
}


#endif //MIU_PLUS_AROS_FRAMEDISPLAY_H
