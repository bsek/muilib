#include "include/UIElement.h"
#include "include/ActionCommand.h"

void UIElement::setActionCommand(ActionCommand &actionCommand) {
    this->actionCommand = &actionCommand;
}

ActionCommand& UIElement::getActionCommand() {
    return actionCommand;
}