#ifndef POPASL_H
#define	POPASL_H

#include "Popstring.h"

class Popasl : public Popstring {
public:
    Popasl(struct Hook * startHook, struct Hook * stopHook, IPTR type);
    Popasl(Object * obj);
    Popasl & operator=(Object * obj);

    BOOL active() const;
    struct Hook * startHook() const;
    void setStartHook(struct Hook *value);
    struct Hook * stopHook() const;
    void setStopHook(struct Hook *value);
    IPTR getType() const;

protected:
    Popasl();
};


#endif	/* POPASL_H */

