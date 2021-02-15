
#include "Window.h"

ZuneObject::Window::Window(LONG id) : id(id) {}

void ZuneObject::Window::create() {
    group.create();
    Object *mui_win = MUI_NewObject(MUIC_Window,
                                    MUIA_Window_ID, id,
                                    MUIA_Window_AppWindow, TRUE,
                                    MUIA_Window_CloseGadget, TRUE,
                                    MUIA_Window_DepthGadget, TRUE,
                                    MUIA_Window_SizeGadget, TRUE,
                                    MUIA_Window_RootObject, group.getObject(),
                                    TAG_END);
    companion.setObject(mui_win);
}



Object *ZuneObject::Window::getObject() {
    return companion.getObject();
}

Zune::Window &ZuneObject::Window::getClass() {
    return companion;
}

void ZuneObject::Window::addMember(ZuneObject::RootObject &rootObject) {
    group.getClass().addMember(&rootObject);
}
