
#ifndef MIU_PLUS_AROS_DTPIC_H
#define MIU_PLUS_AROS_DTPIC_H

#include "Area.h"

namespace Zune {
    class Dtpic : public Area {
    public:
        explicit Dtpic(Object *);

        void setAlpha(LONG value);

        LONG alpha() const;

        void setDarkenSelState(BOOL darkenSelState);

        BOOL darkenSelState() const;

        void setFade(LONG value);

        LONG fade() const;

        void setLightenOnMouse(BOOL lightenOnMouse);

        BOOL lightenOnMouse() const;

        void setName(STRPTR name);

        std::string name() const;

        void build() override;

        Dtpic();
    };
}

#endif //MIU_PLUS_AROS_DTPIC_H
