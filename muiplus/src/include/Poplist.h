#ifndef POPLIST_H
#define POPLIST_H

#include "Popobject.h"
#include "RootClass.h"

namespace Zune {
    class Poplist : public Popobject {
    public:
        Poplist();

        Poplist(Object *obj);

        void setArray(std::initializer_list<std::string>&);

        void setArray(STRPTR*);

        void build() override;
    };
}


#endif /* POPLIST_H */

