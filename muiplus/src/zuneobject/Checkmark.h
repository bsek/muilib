#ifndef MIU_PLUS_AROS_CHECKMARK_H
#define MIU_PLUS_AROS_CHECKMARK_H

#include <string>
#include "RootObject.h"
#include "../zuneclass/include/Image.h"

namespace ZuneObject {
    class Checkmark : public ZuneObject::RootObject {
    public:
        Checkmark(std::string &label);
    private:
        std::string label;
        Zune::Image companion;
    public:
        void create() override;

        Object *getObject() override;
    };
}

#endif //MIU_PLUS_AROS_CHECKMARK_H
