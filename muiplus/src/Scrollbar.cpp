#include "include/Scrollbar.h"
#include "include/Group.h"
#include "include/ZuneObject.h"

Zune::Scrollbar::Scrollbar()
        : Zune::Group() {
}

Zune::Scrollbar::Scrollbar(Object *obj)
        : Zune::Group() {
    object = obj;
}

Zune::Scrollbar &Zune::Scrollbar::operator=(Object *obj) {
    object = obj;
    return *this;
}
