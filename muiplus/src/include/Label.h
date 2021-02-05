#ifndef LABEL_H
#define LABEL_H

#include "Text.h"

class Label : public Text {
public:
    Label(Object * obj);
    Label(std::string label, IPTR flags);
    Label & operator=(Object * obj);

protected:
    Label();
};


#endif /* LABEL_H */

