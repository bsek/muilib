#ifndef CMUI_CHECKMARK_H
#define	CMUI_CHECKMARK_H

#include <string>
#include "CMUI_Image.h"

class CMUI_Checkmark : public CMUI_Image {
public:
    CMUI_Checkmark(Object * obj);
    CMUI_Checkmark(std::string label);
    CMUI_Checkmark & operator=(Object * obj);

protected:
    CMUI_Checkmark();
};


#endif

