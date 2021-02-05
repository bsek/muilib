#ifndef SCRMODELIST_H
#define SCRMODELIST_H

#include "List.h"

class Scrmodelist : public List {
protected:
    Scrmodelist();

public:
    Scrmodelist(Object * obj);
    Scrmodelist & operator=(Object * obj);
};

#endif /* SCRMODELIST_H */

