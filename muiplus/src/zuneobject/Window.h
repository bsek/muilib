
#ifndef MIU_PLUS_AROS_WINDOW_H
#define MIU_PLUS_AROS_WINDOW_H

#include "../zuneclass/include/Window.h"
#include "HorizontalGroup.h"

namespace ZuneObject {
    class Window : public ZuneObject::RootObject {
    public:
        Window(LONG id);

        void create() override;

        Object *getObject() override;

        Zune::Window& getClass();

        void addMember(RootObject &rootObject);
    private:
        Zune::Window companion;
        ZuneObject::HorizontalGroup group{};
        LONG id;
    };
}

#endif //MIU_PLUS_AROS_WINDOW_H
