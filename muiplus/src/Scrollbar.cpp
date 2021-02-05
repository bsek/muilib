#include "include/Scrollbar.h"

Scrollbar::Scrollbar()
: Group() {
}

Scrollbar::Scrollbar(Object* obj)
: Group() {
    object = obj;
}

Scrollbar& Scrollbar::operator=(Object* obj) {
    object = obj;
    return *this;
}
