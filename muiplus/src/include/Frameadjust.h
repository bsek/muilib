#ifndef FRAMEADJUST_H
#define FRAMEADJUST_H

#include "Group.h"

namespace Zune {
    class Frameadjust : public Zune::Group{
    public:
        Frameadjust();

        Frameadjust(Object *obj);

        std::string spec();

        void setSpec(std::string &spec);

        void build() override;
    };
}

#endif //FRAMEADJUST_H
