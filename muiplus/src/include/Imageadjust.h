#ifndef MIU_PLUS_AROS_IMAGEADJUST_H
#define MIU_PLUS_AROS_IMAGEADJUST_H

#include "Register.h"

namespace Zune {
    class Imageadjust : public Zune::Register {
    public:
        Imageadjust();

        Imageadjust(Object *obj);

        void setType(LONG value);

        std::string spec();

        void setOriginator(Object *originator);

        void build() override;
    };
}


#endif //MIU_PLUS_AROS_IMAGEADJUST_H
