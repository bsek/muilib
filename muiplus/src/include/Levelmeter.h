#ifndef LEVELMETER_H
#define    LEVELMETER_H

#include "Numeric.h"
#include "ZuneObject.h"

namespace Zune {
    class Levelmeter : public Numeric {
    protected:
        Levelmeter();

    public:
        Levelmeter(std::string label);

        Levelmeter(Object *obj);

        Levelmeter &operator=(Object *obj);

        std::string mLabel() const;

        void setLabel(std::string value);
    };
}


#endif    /* LEVELMETER_H */

