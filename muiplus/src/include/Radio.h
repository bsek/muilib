#ifndef RADIO_H
#define RADIO_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Radio : public Zune::Group {
    public:
        Radio();

        Radio(Object *obj);

        Radio &operator=(Object *obj);

        LONG active() const;

        void setActive(LONG value);

        void setEntries(STRPTR *entries);

        void build() override;
    };
}

#endif /* RADIO_H */

