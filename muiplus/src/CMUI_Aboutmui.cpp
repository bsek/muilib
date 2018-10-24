#include "include/CMUI_Aboutmui.h"
#include "include/CMUI_Application.h"

CMUI_Aboutmui::CMUI_Aboutmui(CMUI_Window &refWindow, CMUI_Application &application)
    : CMUI_Window() {
    object = MUI_NewObject(MUIC_Aboutmui, MUIA_Window_RefWindow, *refWindow, MUIA_Aboutmui_Application, *application, TAG_END);
}

CMUI_Aboutmui::CMUI_Aboutmui(Object* obj)
    : CMUI_Window() {
    object = obj;
}

CMUI_Aboutmui & CMUI_Aboutmui::operator=(Object* obj) {
    object = obj;
    return *this;
}

CMUI_Aboutmui::CMUI_Aboutmui() {}
