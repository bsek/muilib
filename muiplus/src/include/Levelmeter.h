#ifndef LEVELMETER_H
#define    LEVELMETER_H

#include "Numeric.h"
#include "RootClass.h"

namespace Zune {
    class Levelmeter : public Numeric {
    public:
        Levelmeter();

        Levelmeter(Object *obj);

        std::string mLabel() const;

        void setLabel(std::string& value);

        void build() override;
    };
}


#endif    /* LEVELMETER_H */

