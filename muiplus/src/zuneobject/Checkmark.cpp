#include "Checkmark.h"

Object *ZuneObject::Checkmark::getObject() {
    return companion.getObject();
}

void ZuneObject::Checkmark::create() {
    Object *object = MUI_MakeObject(MUIO_Checkmark, (IPTR)label.c_str());
    companion.setObject(object);
}

ZuneObject::Checkmark::Checkmark(std::string &label) : label(label){}
