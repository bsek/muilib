#ifndef CMUI_RADIO_H
#define CMUI_RADIO_H

#include "CMUI_Group.h"

class CMUI_Radio : public CMUI_Group {
public:
    CMUI_Radio(Object * obj);
    CMUI_Radio(std::string& label, STRPTR entries[]);
    CMUI_Radio & operator=(Object * obj);

    LONG active() const;
    void setActive(LONG value);

protected:
    CMUI_Radio();
};

#endif /* CMUI_RADIO_H */

