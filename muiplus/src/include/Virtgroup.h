#ifndef VIRTGROUP_H
#define VIRTGROUP_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Virtgroup : public Zune::Group {
    public:
        Virtgroup();

        LONG height() const;

        LONG left() const;

        void setLeft(LONG value);

        LONG top() const;

        void setTop(LONG value);

        void setInput(BOOL value);

        LONG width() const;

        void build() override;
    };
}


#endif /* VIRTGROUP_H */

