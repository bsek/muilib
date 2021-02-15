#ifndef ABOUTMUI_H
#define ABOUTMUI_H

#include "Window.h"
#include "Application.h"
#include "RootClass.h"

namespace Zune {
    class Aboutmui : public Zune::Window {
    public:
        Aboutmui();
        void setApp(Zune::Application &application);
        void build() override;
    };
} // namespace Zune
#endif /* ABOUTMUI_H */

