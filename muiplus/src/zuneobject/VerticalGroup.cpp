
#include "VerticalGroup.h"

ZuneObject::VerticalGroup::VerticalGroup() {

}

Object *ZuneObject::VerticalGroup::getObject() {
    return companion.getObject();
}

Zune::Group &ZuneObject::VerticalGroup::getClass() {
    return companion;
}

void ZuneObject::VerticalGroup::create() {
    Object* object = MUI_NewObject(MUIC_Group, MUIA_Group_Horiz, FALSE, TAG_END);
    companion.setObject(object);
}
void ZuneObject::VerticalGroup::addMember(Object *object) {
    companion.addObject(object);
}

void ZuneObject::VerticalGroup::addMember(ZuneObject::RootObject &rootObject) {
    companion.addObject(rootObject);
}

void ZuneObject::VerticalGroup::addMember(Zune::RootClass &rootClass) {
    companion.addObject(rootClass);
}

void ZuneObject::VerticalGroup::remMember(Object *object) {
    companion.remObject(object);
}

void ZuneObject::VerticalGroup::remMember(ZuneObject::RootObject &rootObject) {
    companion.remObject(rootObject);
}

void ZuneObject::VerticalGroup::remMember(Zune::RootClass &rootClass) {
    companion.remObject(rootClass);
}