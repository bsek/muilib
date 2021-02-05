#ifndef SCALE_H
#define SCALE_H

#include "Area.h"

class Scale : public Area {
protected:
    Scale();

public:
    Scale(Object * obj);
    Scale & operator=(Object * obj);

    BOOL Horiz() const;
    void SetHoriz(BOOL value);
};

#endif /* SCALE_H */