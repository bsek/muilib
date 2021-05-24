#ifndef TITLE_H
#define TITLE_H

#include "Group.h"

namespace Zune {
    class Title : public Zune::Group {
    public:
        Title();

        Title(Object* obj);

        void build() override;
    };
}


#endif //TITLE_H
