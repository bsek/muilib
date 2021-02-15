#ifndef RADIO_H
#define RADIO_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Radio : public Zune::Group {
    public:
        Radio(Object *obj);

        Radio(std::string &label, CONST_STRPTR entries[]);

        Radio &operator=(Object *obj);

        LONG active() const;

        void setActive(LONG value);

    protected:
        Radio();
    };
}

#endif /* RADIO_H */

