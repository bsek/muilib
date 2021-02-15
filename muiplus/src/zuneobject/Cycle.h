#ifndef MIU_PLUS_AROS_CYCLE_H
#define MIU_PLUS_AROS_CYCLE_H

#include "RootObject.h"
#include "../zuneclass/include/Cycle.h"

namespace ZuneObject {
    class Cycle : public ZuneObject::RootObject {
    private:
        Zune::Cycle companion;
        const std::string label;
        char** entries;
    public:
        Cycle();
        Cycle(std::string &label, std::initializer_list<char *> &entries);
        ~Cycle();
        void setEntries(std::initializer_list<char *> &entries);
        void setActive(BOOL value);
        BOOL active();
        Zune::Cycle &getClass();
        void create() override;
        void onEvent();

        Object *getObject() override;
    };


}


#endif //MIU_PLUS_AROS_CYCLE_H
