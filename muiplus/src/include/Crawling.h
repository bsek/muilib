#ifndef CRAWLING_H
#define CRAWLING_H

#include "Virtgroup.h"

namespace Zune {
    class Crawling : Zune::Virtgroup {
    public:
        Crawling();

        Crawling(Object *obj);

        void build() override;
    };
}

#endif //CRAWLING_H
