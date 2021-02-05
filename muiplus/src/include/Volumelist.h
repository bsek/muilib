#ifndef VOLUMELIST_H
#define VOLUMELIST_H

#include "List.h"

class Volumelist : public List {
public:
    Volumelist(Object * obj);
    Volumelist & operator=(Object * obj);

protected:
    Volumelist();
};


#endif /* VOLUMELIST_H */

