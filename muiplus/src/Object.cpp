#include "include/Object.h"
#include <iostream>

Object::Object() {
    object = nullptr;
}

BOOL Object::isValid() const {
    return (object != nullptr);
}

IPTR Object::mGetAttr(Tag attr, IPTR *value) const {
    return GetAttr(attr, object, value);
}

IPTR Object::mGetAttr(Tag attr) const {
    IPTR value;
    mGetAttr(attr, &value);
    return value;
}

void Object::setAttr(Tag attr, IPTR value) {
    SetAttrs(object, attr, value, TAG_DONE);
}

// This can be called to dispose of an object
// Note: this should only be called for objects that are allocated
// dynamically and are not disposed when the application object gets
// disposed.
void Object::dispose(void) {
    MUI_DisposeObject(object);
    object = nullptr;
}

Object *Object::operator*() const {
    return object;
}

Tag Object::operator()() const {
    return (Tag) *object;
}

// Dynamically adding and removing objects
void Object::addMember(Object *child) {
//    std::cout << "Adding member " << child << " to object " << object <<  std::endl;

    DoMethod(object, OM_ADDMEMBER, (IPTR)child);
}

void Object::remMember(Object *child) {
//    std::cout << "Removing member " << child << " from object " << object << std::endl;

    DoMethod(object, OM_REMMEMBER, (IPTR)child);
}

