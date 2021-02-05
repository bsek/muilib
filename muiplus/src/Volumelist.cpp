#include "include/Volumelist.h"

Volumelist::Volumelist()
: List() {
}

Volumelist::Volumelist(Object* obj)
: List() {
    object = obj;
}

Volumelist& Volumelist::operator=(Object* obj) {
    object = obj;
    return *this;
}
