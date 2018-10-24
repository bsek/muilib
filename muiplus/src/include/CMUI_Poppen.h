#ifndef CMUI_POPPEN_H
#define CMUI_POPPEN_H

#include "CMUI_Pendisplay.h"

class CMUI_Poppen : public CMUI_Pendisplay {
public:
    CMUI_Poppen(std::string title, uint8_t cycleChain);
    CMUI_Poppen(Object * obj);
    CMUI_Poppen & operator=(Object * obj);

protected:
    CMUI_Poppen();
};


#endif /* CMUI_POPPEN_H */
