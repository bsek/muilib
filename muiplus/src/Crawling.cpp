
#include "include/Crawling.h"

Zune::Crawling::Crawling() = default;

Zune::Crawling::Crawling(Object *obj) {
    object = obj;
}

void Zune::Crawling::build() {
    RootClass::createObject(MUIC_Crawling);
}
