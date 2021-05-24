#ifndef IMAGEADJUST_H
#define IMAGEADJUST_H

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


#endif //IMAGEADJUST_H
