#ifndef REGISTER_H
#define REGISTER_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Register : public Zune::Group {
    public:
        Register();

        STRPTR *titles() const;
    };
}

#endif /* REGISTER_H */

