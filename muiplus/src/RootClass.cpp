#include "include/RootClass.h"
#include <iostream>

Zune::RootClass::RootClass() {
    object = nullptr;
}

BOOL Zune::RootClass::isValid() const {
    return (object != nullptr);
}

IPTR Zune::RootClass::mGetAttr(Tag attr, IPTR *value) const {
    return GetAttr(attr, object, value);
}

IPTR Zune::RootClass::mGetAttr(Tag attr) const {
    IPTR value;
    mGetAttr(attr, &value);
    return value;
}

void Zune::RootClass::setAttr(Tag attr, IPTR value) {
    SetAttrs(object, attr, value, TAG_DONE);
}

// This can be called to dispose of an object
// Note: this should only be called for objects that are allocated
// dynamically and are not disposed when the application object gets
// disposed.
void Zune::RootClass::dispose(void) {
    MUI_DisposeObject(object);
    object = nullptr;
}

void Zune::RootClass::setOrStore(IPTR tag, IPTR value) {
    if (isValid()) {
        setAttr(tag, value);
    } else {
        configmap[tag] = value;
    }
}

// Dynamically adding and removing objects
void Zune::RootClass::addMember(RootClass *child) {
    if (child->isValid()) {
        DoMethod(object, OM_ADDMEMBER, (IPTR) child->object);
    } else {
        std::cerr << "Failed to add zuneobject\n";
    }
}

void Zune::RootClass::remMember(RootClass *child) {
    if (child->isValid()) {
        DoMethod(object, OM_REMMEMBER, (IPTR) child->object);
    } else {
        std::cerr << "Failed to remove zuneobject\n";
    }
}

void Zune::RootClass::addMember(Object *child) {
    DoMethod(object, OM_ADDMEMBER, (IPTR) child);
}

void Zune::RootClass::remMember(Object *child) {
    DoMethod(object, OM_REMMEMBER, (IPTR) child);
}

void Zune::RootClass::build() {
}

void Zune::RootClass::createObject(std::string type) {
    struct TagItem tagItems[configmap.size() + 1];

    int i = 0;
    for (auto const& [tag, data] : configmap)
    {
        tagItems[i].ti_Tag = tag;
        tagItems[i].ti_Data = data;
        i++;
    }
    tagItems[i].ti_Tag = TAG_DONE;

    Object *newObject = MUI_NewObjectA(type.c_str(), tagItems);

    if (newObject == nullptr) {
        std::cerr << "Failed to create object of type: " << type << std::endl;
        exit(1);
    }

    object = newObject;
}

void Zune::RootClass::setObject(Object *obj) {
    this->object = obj;
}

Object *Zune::RootClass::getObject() {
    return object;
}

