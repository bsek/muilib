#ifndef ABOUTMUI_H
#define ABOUTMUI_H

#include "Window.h"
#include "Application.h"
#include "ZuneObject.h"

namespace Zune
{
    class Aboutmui : public Window
    {
    public:
        Aboutmui(Window &refWindow, Application &application);
        Aboutmui(Object *obj);
        Aboutmui &operator=(Object *obj);

    protected:
        Aboutmui();
    };
} // namespace Zune
#endif /* ABOUTMUI_H */

