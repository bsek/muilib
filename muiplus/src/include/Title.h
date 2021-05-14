#ifndef MIU_PLUS_AROS_TITLE_H
#define MIU_PLUS_AROS_TITLE_H

#include "Group.h"

namespace Zune {
    class Title : public Zune::Group {
    public:
        Title();

        Title(Object* obj);

        void build() override;
    };
}


#endif //MIU_PLUS_AROS_TITLE_H
