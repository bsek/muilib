#include "include/Balance.h"

Balance::Balance(Object * obj)
: Area() {
    object = obj;
}

Balance & Balance::operator=(Object * obj) {
    object = obj;
    return *this;
}

Balance::Balance()
: Area() {
    object = MUI_NewObject(MUIC_Balance, TAG_END);
}

