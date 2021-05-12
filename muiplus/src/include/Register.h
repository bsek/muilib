#ifndef REGISTER_H
#define REGISTER_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Register : public Zune::Group {
    public:
        Register();

        Register(Object *obj);

        STRPTR *titles() const;

        void setTitles(STRPTR* titles);

        void setColumns(WORD num);

        void setFrameOn(BOOL enable);

        void build() override;
    };
}

#endif /* REGISTER_H */

