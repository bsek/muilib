#ifndef OBJECT_H
#define OBJECT_H

#include "../mui_declarations.hpp"

namespace Zune {
    class ZuneObject {
    public:
        BOOL isValid() const;

        IPTR mGetAttr(Tag attr, IPTR *value) const;

        IPTR mGetAttr(Tag attr) const;

        void setAttr(Tag attr, IPTR value);

        void dispose();

        Object *operator*() const;

        Tag operator()() const;

        void addMember(Object *child);

        void remMember(Object *child);

    protected:
        Object *object;

        ZuneObject();
    };
}

#endif