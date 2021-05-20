#include "include/Poplist.h"
#include "include/RootClass.h"

Zune::Poplist::Poplist(Object *obj) {
    object = obj;
}

void Zune::Poplist::setArray(std::initializer_list<std::string> &list) {
    CONST_STRPTR array[list.size()];

    WORD i = 0;
    for (const std::string& val : list) {
        array[i++] = val.c_str();
    }

    configmap[MUIA_Poplist_Array] = reinterpret_cast<IPTR>(array);
}

void Zune::Poplist::build() {
    RootClass::createObject(MUIC_Poplist);
}

void Zune::Poplist::setArray(STRPTR* array) {
    configmap[MUIA_Poplist_Array] = reinterpret_cast<IPTR>(&array);
}

Zune::Poplist::Poplist() = default;

