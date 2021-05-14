#include "include/Title.h"

Zune::Title::Title() = default;

Zune::Title::Title(Object *obj) {
    object = obj;
}

void Zune::Title::build() {
    RootClass::createObject(MUIC_Title);
}
