#include "include/CMUI_Button.h"

CMUI_Button::CMUI_Button(Object* obj)
: CMUI_Text() {
    object = obj;
}

CMUI_Button::CMUI_Button(std::string label)
: CMUI_Text() {
    object = MUI_MakeObject(MUIO_Button, (IPTR) label.c_str());
}

CMUI_Button& CMUI_Button::operator=(Object* obj) {
    object = obj;
    return *this;
}

static struct Hook myhook;

static ULONG myfunc(struct Hook *hook, Object *object, APTR msg)
{
    printf("test");
    return 1;
}


void CMUI_Button::setAction(ActionCommand *command) {
    //DoMethod(obj, MUIM_Notify, MUIA_Pressed, FALSE, object, 3, C);
    command->execute();
}

CMUI_Button::CMUI_Button() {}




