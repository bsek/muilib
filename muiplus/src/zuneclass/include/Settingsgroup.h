#ifndef SETTINGSGROUP_H
#define SETTINGSGROUP_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Settingsgroup : public Zune::Group {
    public:
        IPTR ConfigToGadgets(Object *configdata);

        IPTR GadgetsToConfig(Object *configdata);

    protected:
        Settingsgroup();
    };
}

#endif /* SETTINGSGROUP_H */

