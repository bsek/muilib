#ifndef UI_ELEMENT_H
#define UI_ELEMENT_H

#include "ActionCommand.h"

class UIElement {
protected:
    virtual void render(CMUI_Object *object) = 0;
    void setActionCommand(ActionCommand &actionCommand);
    ActionCommand *getActionCommand();
private:
    ActionCommand *actionCommand;

};

#endif