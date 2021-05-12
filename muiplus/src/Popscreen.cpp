#include "include/Popscreen.h"
#include "include/RootClass.h"

Zune::Popscreen::Popscreen()
        : Zune::Popobject() {
}

Zune::Popscreen::Popscreen(Object *obj)
        : Zune::Popobject() {
    object = obj;
}

Zune::Popscreen &Zune::Popscreen::operator=(Object *obj) {
    object = obj;
    return *this;
}
