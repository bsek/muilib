#include "include/Aboutmui.h"
#include "include/Application.h"

namespace Zune
{
    Aboutmui::Aboutmui(Window &refWindow, Application &application)
        : Window()
    {
        object = MUI_NewObject(MUIC_Aboutmui, MUIA_Window_RefWindow, *refWindow, MUIA_Aboutmui_Application, *application, TAG_END);
    }

    Aboutmui::Aboutmui(Object *obj)
        : Window()
    {
        object = obj;
    }

    Aboutmui &Aboutmui::operator=(Object *obj)
    {
        object = obj;
        return *this;
    }

    Aboutmui::Aboutmui() {}
} // namespace Zune