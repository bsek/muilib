#ifndef REGISTER_H
#define REGISTER_H

#include "Group.h"

class Register : public Group {
protected:
    Register();

public:
    Register(CONST_STRPTR titles[]);
    Register(Object * obj);
    Register & operator=(Object * obj);

    STRPTR * titles() const;
};

#endif /* REGISTER_H */

