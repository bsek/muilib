#include <ActionCommand.h>
#include <stdio.h>

PressActionCommand::PressActionCommand() {
    //eventType = EventType::PRESSED;
}

void PressActionCommand::execute() {
    printf("execute(%d)", i);

  //  callback(eventData);
}