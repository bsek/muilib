#ifndef CMUI_ABOUTMUI_H
#define CMUI_ABOUTMUI_H

#include "CMUI_Window.h"
#include "CMUI_Application.h"

class CMUI_Aboutmui : public CMUI_Window {
public:
    CMUI_Aboutmui(CMUI_Window &refWindow, CMUI_Application &application);
    CMUI_Aboutmui(Object * obj);
    CMUI_Aboutmui & operator=(Object * obj);
protected:
    CMUI_Aboutmui();
};

#endif /* CMUI_ABOUTMUI_H */

