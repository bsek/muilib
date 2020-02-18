#include "include/ActionCommand.h"

PressActionCommand::PressActionCommand() {
    eventType = EventType::PRESSED;
}

void PressActionCommand::execute(struct InstanceEvent* eventData) {
    printf("execute()");

    callback(eventData);
}