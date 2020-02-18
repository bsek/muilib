#ifndef BUTTON_H
#define BUTTON_H

#include <CMUI_Button.h>
#include "UIElement.h"
#include "ActionCommand.h"

class Button : UIElement {
protected:
    void render(CMUI_Object *object) override;

public:
    void setText(const std::string &text);

private:
    Button();
    CMUI_Button *button;
    std::string &text;
};

#endif