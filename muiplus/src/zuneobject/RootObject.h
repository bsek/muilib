#ifndef MIU_PLUS_AROS_ROOTOBJECT_H
#define MIU_PLUS_AROS_ROOTOBJECT_H

#include <libraries/mui.h>

namespace ZuneObject {
    class RootObject {

    public:
        virtual Object *getObject() = 0;
        virtual void create() = 0;
    };
}
#endif //MIU_PLUS_AROS_ROOTOBJECT_H
