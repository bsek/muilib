#ifndef PROP_H
#define PROP_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Prop : public Zune::Area {
    public:
        Prop();

        explicit Prop(Object *obj);

        LONG entries() const;

        void setEntries(LONG value);

        LONG first() const;

        void setFirst(LONG value);

        BOOL horizontal() const;

        void setHorizontal(BOOL horiz);

        BOOL getSlider() const;

        void setSlider(BOOL value);

        LONG visible() const;

        void setVisible(LONG value);

        void setUseWinBorder(BOOL useBorder);

        IPTR decrease(LONG amount);

        IPTR increase(LONG amount);

        void build() override;
    };
}

#endif /* PROP_H */
