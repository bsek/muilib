#ifndef PROP_H
#define PROP_H

#include "Gadget.h"

class Prop : public Gadget {
protected:
    Prop();

public:
    Prop(Object * obj);
    Prop & operator=(Object * obj);

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

#endif /* PROP_H */
