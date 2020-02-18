#ifndef ACTIONCOMMAND_H
#define ACTIONCOMMAND_H

#include <CMUI_Class.h>

class ActionCommand {
public:
    virtual void execute(struct InstanceEvent*) = 0;
protected:
    EventType eventType;
    std::function<void(struct InstanceEvent*)> callback;
};

class PressActionCommand : ActionCommand {
public:
    PressActionCommand();
    void execute(struct InstanceEvent*) override;
};

#endif