#include "include/Aboutmui.h"
#include "include/Application.h"

Zune::Aboutmui::Aboutmui() {}

void Zune::Aboutmui::setApp(Zune::Application &application) {
    configmap[MUIA_Aboutmui_Application] = (IPTR) application.getObject();
}

void Zune::Aboutmui::build() {
    RootClass::createObject(MUIC_Aboutmui);
}