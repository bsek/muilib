#ifndef POPOBJECT_H
#define POPOBJECT_H

#include "Popstring.h"
#include "ZuneObject.h"

namespace Zune {
    class Popobject : public Popstring {
    public:
        Popobject(struct Hook * objStrHook, struct Hook * strObjHook, BOOL follow, BOOL light, Object * object,
                BOOL isVolatile, struct Hook * windowHook);
        Popobject(Object * obj);
        Popobject & operator=(Object * obj);

        BOOL follow() const;
        void setFollow(BOOL value);
        BOOL light() const;
        void setLight(BOOL value);
        Object * popObject() const;
        struct Hook * objStrHook() const;
        void setObjStrHook(struct Hook *value);
        struct Hook * strObjHook() const;
        void setStrObjHook(struct Hook *value);
        BOOL getVolatile() const;
        void setVolatile(BOOL value);
        struct Hook * windowHook() const;
        void SetWindowHook(struct Hook * value);

    protected:
        Popobject();
    };
}


#endif /* POPOBJECT_H */

