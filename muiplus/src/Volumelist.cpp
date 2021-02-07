#include "include/Volumelist.h"
#include "include/ZuneList.h"
#include "include/ZuneObject.h"

Zune::Volumelist& Zune::Volumelist::operator=(Object* obj) {
    object = obj;
    return *this;
}
