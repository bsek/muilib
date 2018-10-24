#ifndef CMUI_POPSTRING_H
#define CMUI_POPSTRING_H

#include "CMUI_Group.h"

class CMUI_Popstring : public CMUI_Group {
public:
    CMUI_Popstring(Object * obj);
    CMUI_Popstring(Object * button, struct Hook * closeHook, struct Hook * openHook, Object * string, BOOL toggle);
    CMUI_Popstring & operator=(Object * obj);

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
    CMUI_Popstring();
};


#endif /* CMUI_POPSTRING_H */

