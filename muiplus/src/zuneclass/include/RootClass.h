#ifndef OBJECT_H
#define OBJECT_H

#include <map>
#include "../../mui_declarations.hpp"
#include "../../zuneobject/RootObject.h"

namespace Zune {
    class RootClass {
    public:
        BOOL isValid() const;

        IPTR mGetAttr(Tag attr, IPTR *value) const;

        IPTR mGetAttr(Tag attr) const;

        void setAttr(Tag attr, IPTR value);

        void dispose();

        void addMember(Object *child);

        void remMember(Object *child);

        void addMember(RootClass *child);

        void remMember(RootClass *child);

        void addMember(ZuneObject::RootObject *child);

        void remMember(ZuneObject::RootObject *child);

        void setObject(Object* object);

        Object* getObject();

        virtual void build();

        void createObject(std::string type);

    protected:

        RootClass();

        void setOrStore(IPTR tag, IPTR value);

        std::map<IPTR,IPTR> configmap;

        Object* object;
    };
}

#endif