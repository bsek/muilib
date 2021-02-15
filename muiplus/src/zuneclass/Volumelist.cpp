#include "include/Volumelist.h"
#include "include/ZuneList.h"
#include "include/RootClass.h"

Zune::Volumelist &Zune::Volumelist::operator=(Object *obj) {
    object = obj;
    return *this;
}
