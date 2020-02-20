#ifndef ACTIONCOMMAND_H
#define ACTIONCOMMAND_H

#include <functional>
//#include "CMUI_Class.h"

class ActionCommand {
public:
    virtual void execute() = 0;
protected:
   // EventType eventType;
   // std::function<void(struct InstanceEvent*)> callback;
};

class PressActionCommand : public ActionCommand {
private:
    int i{5};
public:
    PressActionCommand();
    void execute() override;
};

#endif