#ifndef FAMILY_H
#define	FAMILY_H

#include "Notify.h"
#include "ZuneObject.h"

namespace Zune {
    class Family : public Notify
    {
    public:
        struct MinList * list() const;
        IPTR addHead(Object *obj);
        IPTR addTail(Object *obj);
        IPTR insert(Object *obj, Object *pred);
        IPTR remove(Object *obj);
        IPTR Sort (std::initializer_list<Object> obj);
        IPTR transfer(Object *family);
    protected:
        Family();
    };
}


#endif

