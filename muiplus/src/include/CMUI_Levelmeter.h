#ifndef CMUI_LEVELMETER_H
#define	CMUI_LEVELMETER_H

#include "CMUI_Numeric.h"

class CMUI_Levelmeter : public CMUI_Numeric {
protected:
    CMUI_Levelmeter();

public:
    CMUI_Levelmeter(std::string label);
    CMUI_Levelmeter(Object * obj);
    CMUI_Levelmeter & operator=(Object * obj);

    std::string mLabel() const;
    void setLabel(std::string value);
};


#endif	/* CMUI_LEVELMETER_H */

