#ifndef CMUI_POPASL_H
#define	CMUI_POPASL_H

#include "CMUI_Popstring.h"

class CMUI_Popasl : public CMUI_Popstring {
public:
    CMUI_Popasl(struct Hook * startHook, struct Hook * stopHook, IPTR type);
    CMUI_Popasl(Object * obj);
    CMUI_Popasl & operator=(Object * obj);

    BOOL active() const;
    struct Hook * startHook() const;
    void setStartHook(struct Hook *value);
    struct Hook * stopHook() const;
    void setStopHook(struct Hook *value);
    IPTR getType() const;

protected:
    CMUI_Popasl();
};


#endif	/* CMUI_POPASL_H */

