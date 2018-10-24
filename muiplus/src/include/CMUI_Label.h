#ifndef CMUI_LABEL_H
#define CMUI_LABEL_H

#include "CMUI_Text.h"

class CMUI_Label : public CMUI_Text {
public:
    CMUI_Label(Object * obj);
    CMUI_Label(std::string label, IPTR flags);
    CMUI_Label & operator=(Object * obj);

protected:
    CMUI_Label();
};


#endif /* CMUI_LABEL_H */

