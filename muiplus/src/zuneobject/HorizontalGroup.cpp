
#include "HorizontalGroup.h"

ZuneObject::HorizontalGroup::HorizontalGroup() {}

Object *ZuneObject::HorizontalGroup::getObject() {
    return companion.getObject();
}

void ZuneObject::HorizontalGroup::create() {
    Object* object = MUI_NewObject(MUIC_Group, MUIA_Group_Horiz, TRUE, TAG_END);
    companion.setObject(object);
}

Zune::Group &ZuneObject::HorizontalGroup::getClass() {
    return companion;
}

void ZuneObject::HorizontalGroup::addMember(Object *object) {
    companion.addObject(object);
}

void ZuneObject::HorizontalGroup::addMember(ZuneObject::RootObject &rootObject) {
    companion.addObject(rootObject);
}

void ZuneObject::HorizontalGroup::addMember(Zune::RootClass &rootClass) {
    companion.addObject(rootClass);
}

void ZuneObject::HorizontalGroup::remMember(Object *object) {
    companion.remObject(object);
}

void ZuneObject::HorizontalGroup::remMember(ZuneObject::RootObject &rootObject) {
    companion.remObject(rootObject);
}

void ZuneObject::HorizontalGroup::remMember(Zune::RootClass &rootClass) {
    companion.remObject(rootClass);
}
