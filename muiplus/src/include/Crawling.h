#ifndef MIU_PLUS_AROS_CRAWLING_H
#define MIU_PLUS_AROS_CRAWLING_H

#include "Virtgroup.h"

namespace Zune {
    class Crawling : Zune::Virtgroup {
    public:
        Crawling();

        Crawling(Object *obj);

        void build() override;
    };
}

#endif //MIU_PLUS_AROS_CRAWLING_H
