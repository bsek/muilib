#include "include/Popscreen.h"

Popscreen::Popscreen()
: Popobject() {
}

Popscreen::Popscreen(Object* obj)
: Popobject() {
    object = obj;
}

Popscreen& Popscreen::operator=(Object* obj) {
    object = obj;
    return *this;
}
