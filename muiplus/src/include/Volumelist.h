#ifndef VOLUMELIST_H
#define VOLUMELIST_H

#include "ZuneList.h"
#include "ZuneObject.h"

namespace Zune {
    class Volumelist : public Zune::ZuneList<std::string> {
    public:
        Volumelist &operator=(Object *obj);
    };
}


#endif /* VOLUMELIST_H */

