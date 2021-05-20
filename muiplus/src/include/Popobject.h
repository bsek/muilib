#ifndef POPOBJECT_H
#define POPOBJECT_H

#include "Popstring.h"
#include "RootClass.h"

namespace Zune {
    class Popobject : public Popstring {
    public:
        Popobject();

        Popobject(Object *obj);

        BOOL follow() const;

        void setFollow(BOOL value);

        BOOL light() const;

        void setLight(BOOL value);

        Object *popObject() const;

        void setPopObject(Object* obj);

        struct Hook *objStrHook() const;

        void setObjStrHook(struct Hook *value);

        struct Hook *strObjHook() const;

        void setStrObjHook(struct Hook *value);

        BOOL getVolatile() const;

        void setVolatile(BOOL value);

        struct Hook *windowHook() const;

        void setWindowHook(struct Hook *value);

        void build() override;
    };
}


#endif /* POPOBJECT_H */

