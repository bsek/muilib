#ifndef FAMILY_H
#define    FAMILY_H

#include "Notify.h"
#include "RootClass.h"

namespace Zune {
    class Family : public Notify {
    public:
        Family();

        Family(Object* obj);

        struct MinList *list() const;

        IPTR addHead(Object *obj);

        IPTR addTail(Object *obj);

        IPTR insert(Object *obj, Object *pred);

        IPTR remove(Object *obj);

        IPTR Sort(std::initializer_list<Object> obj);

        IPTR transfer(Object *family);

        void setChild(Object *obj);

        LONG childCount() const;

        void build() override;
    };
}


#endif

