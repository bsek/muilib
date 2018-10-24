#ifndef CMUI_OBJECT_H
#define CMUI_OBJECT_H

#include "../mui_declarations.hpp"

class CMUI_Object {
public:
    BOOL isValid() const;
    IPTR mGetAttr(Tag attr, IPTR *value) const;
    IPTR mGetAttr(Tag attr) const;
    void setAttr(Tag attr, IPTR value);
    void dispose();

    Object* operator*() const;
    Tag operator()() const;
    void addMember(Object *child);
    void remMember(Object *child);

protected:
    Object* object;
    CMUI_Object();
};

#endif