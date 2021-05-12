#ifndef SETTINGSGROUP_H
#define SETTINGSGROUP_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Settingsgroup : public Zune::Group {
    public:
        Settingsgroup();

        IPTR configToGadgets(Object *configdata);

        IPTR gadgetsToConfig(Object *configdata);

        void build() override;
    };
}

#endif /* SETTINGSGROUP_H */

