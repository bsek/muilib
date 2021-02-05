#include "include/Scrmodelist.h"

Scrmodelist::Scrmodelist()
: List() {
}

Scrmodelist::Scrmodelist(Object* obj)
: List() {
    object = obj;
}

Scrmodelist& Scrmodelist::operator=(Object* obj) {
    object = obj;
    return *this;
}
