#ifndef POPSTRING_H
#define POPSTRING_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Popstring : public Zune::Group {
    public:
        Popstring();

        Popstring(Object *obj);

        Object *button() const;

        void setButton(Object* button);

        struct Hook *closeHook() const;

        void setCloseHook(struct Hook *value);

        struct Hook *openHook() const;

        void setOpenHook(struct Hook *value);

        Object *getString() const;

        void setString(Object* string);

        BOOL toggle() const;

        void setToggle(BOOL value);

        IPTR close(LONG result);

        IPTR open();

        void build() override;
    };
}


#endif /* POPSTRING_H */

