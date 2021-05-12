#ifndef VOLUMELIST_H
#define VOLUMELIST_H

#include "List.h"
#include "RootClass.h"

namespace Zune {
    class Volumelist : public Zune::List<std::string> {
    public:
        Volumelist();
    };
}


#endif /* VOLUMELIST_H */

