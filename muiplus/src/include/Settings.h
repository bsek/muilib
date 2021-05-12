#ifndef SETTINGS_H
#define SETTINGS_H

#include "Group.h"

namespace Zune {
    class Settings : public Zune::Group {
    public:
        Settings();

        void build() override;
    };
}

#endif /* SETTINGS_H */

