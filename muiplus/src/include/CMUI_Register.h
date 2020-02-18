#ifndef CMUI_REGISTER_H
#define CMUI_REGISTER_H

#include "CMUI_Group.h"

class CMUI_Register : public CMUI_Group {
protected:
    CMUI_Register();

public:
    CMUI_Register(CONST_STRPTR titles[]);
    CMUI_Register(Object * obj);
    CMUI_Register & operator=(Object * obj);

    STRPTR * titles() const;
};

#endif /* CMUI_REGISTER_H */

