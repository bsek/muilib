#ifndef CMUI_PROP_H
#define CMUI_PROP_H

#include "CMUI_Gadget.h"

class CMUI_Prop : public CMUI_Gadget {
protected:
    CMUI_Prop();

public:
    CMUI_Prop(Object * obj);
    CMUI_Prop & operator=(Object * obj);

    LONG entries() const;
    void setEntries(LONG value);
    LONG first() const;
    void setFirst(LONG value);
    BOOL horiz() const;
    BOOL getSlider() const;
    void setSlider(BOOL value);
    LONG visible() const;
    void setVisible(LONG value);
    IPTR decrease(LONG amount);
    IPTR increase(LONG amount);
};

#endif /* CMUI_PROP_H */
