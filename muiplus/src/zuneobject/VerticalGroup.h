
#ifndef MIU_PLUS_AROS_VERTICALGROUP_H
#define MIU_PLUS_AROS_VERTICALGROUP_H

#include "RootObject.h"
#include "../zuneclass/include/Group.h"

namespace ZuneObject {
    class VerticalGroup : public ZuneObject::RootObject {
    private:
        Zune::Group companion;
    public:
        VerticalGroup();

        Object *getObject() override;

        Zune::Group &getClass();
        void addMember(Object* object);
        void addMember(RootObject &rootObject);
        void addMember(Zune::RootClass &rootClass);
        void remMember(Object* object);
        void remMember(RootObject &rootObject);
        void remMember(Zune::RootClass &rootClass);
        void create() override;
    };
}


#endif //MIU_PLUS_AROS_VERTICALGROUP_H
