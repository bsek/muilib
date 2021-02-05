#ifndef POPSTRING_H
#define POPSTRING_H

#include "Group.h"

class Popstring : public Group {
public:
    Popstring(Object * obj);
    Popstring(Object * button, struct Hook * closeHook, struct Hook * openHook, Object * string, BOOL toggle);
    Popstring & operator=(Object * obj);

    Object * button() const;
    struct Hook * closeHook() const;
    void setCloseHook(struct Hook *value);
    struct Hook * openHook() const;
    void setOpenHook(struct Hook *value);
    Object * getString() const;
    BOOL toggle() const;
    void setToggle(BOOL value);
    IPTR close(LONG result);
    IPTR open();

protected:
    Popstring();
};


#endif /* POPSTRING_H */

