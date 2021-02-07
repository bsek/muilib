#include "include/ZuneObject.h"
#include <iostream>

Zune::ZuneObject::ZuneObject() {
    object = nullptr;
}

BOOL Zune::ZuneObject::isValid() const {
    return (object != nullptr);
}

IPTR Zune::ZuneObject::mGetAttr(Tag attr, IPTR *value) const {
    return GetAttr(attr, object, value);
}

IPTR Zune::ZuneObject::mGetAttr(Tag attr) const {
    IPTR value;
    mGetAttr(attr, &value);
    return value;
}

void Zune::ZuneObject::setAttr(Tag attr, IPTR value) {
    SetAttrs(object, attr, value, TAG_DONE);
}

// This can be called to dispose of an object
// Note: this should only be called for objects that are allocated
// dynamically and are not disposed when the application object gets
// disposed.
void Zune::ZuneObject::dispose(void) {
    MUI_DisposeObject(object);
    object = nullptr;
}

Object *Zune::ZuneObject::operator*() const {
    return object;
}

Tag Zune::ZuneObject::operator()() const {
    return (Tag) *object;
}

// Dynamically adding and removing objects
void Zune::ZuneObject::addMember(Object *child) {
//    std::cout << "Adding member " << child << " to object " << object <<  std::endl;

    DoMethod(object, OM_ADDMEMBER, (IPTR)child);
}

void Zune::ZuneObject::remMember(Object *child) {
//    std::cout << "Removing member " << child << " from object " << object << std::endl;

    DoMethod(object, OM_REMMEMBER, (IPTR)child);
}

