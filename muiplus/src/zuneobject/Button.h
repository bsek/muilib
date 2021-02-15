#ifndef MIU_PLUS_AROS_BUTTON_H
#define MIU_PLUS_AROS_BUTTON_H

#include <string>
#include "../zuneclass/include/Text.h"
#include "RootObject.h"

namespace ZuneObject {
    class Button : public ZuneObject::RootObject {
    public:
        Button();
        Button(std::string &label);

        void setLabel(std::string &label);
        void create();
        Object* getObject() override;
    private:
        Zune::Text companion;
        std::string label;
    };
}
#endif //MIU_PLUS_AROS_BUTTON_H
