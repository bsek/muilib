#include "Buttons.h"
#include <stdio.h>
#include <iostream>
#include <CMUI_Rectangle.h>
#include <CMUI_Checkmark.h>
#include <ActionCommand.h>

Buttons::Buttons() : CMUI_Group() {
    registerClass();

    CMUI_Rectangle rect{MUI_Rectangle_Direction::HORIZONTAL, 20, ""};
    CMUI_Rectangle rect2{MUI_Rectangle_Direction::HORIZONTAL, 20, ""};

    group.addMember(*rect);
    group.addMember(*bAdd);
    group.addMember(*bClose);
//    group.addMember(*bInfo);

    addMember(*group);
/*
    addEvent(*bAdd, PRESSED, [&](struct InstanceEvent* event) -> void {
        int pressed = event->text;
        if (pressed) {
            std::cout << " test :" << event->text << std::endl;
        }
    });
    */
    addEvent(*bAdd, EventType::PRESSED, &Buttons::handle);
}

void Buttons::handle() {
    printf("TEST");
}

IPTR Buttons::handleEvent(Class *cl, Object *obj, Msg msg) {
    
    std::cout << "HandleEvent with MethodId: " << msg->MethodID << " obj: " << obj  << std::endl;

//    ActionCommand *command = (ActionCommand*)((struct opSet *)msg)->ops_AttrList;
    struct TagItem *tags = ((struct opSet *)msg)->ops_AttrList;

    //ULONG id = (ULONG) GetTagData(CUSTOM_ACTION_COMMAND, (IPTR)" ",tags);
//    std::cout << "Tags: " << tags->ti_Tag << " DATA: " << tags->ti_Data << std::endl; // " Data: " << tags->ti_Data;
    printf("TAGS: %#010x, DATA: %#010lx", tags->ti_Tag, tags->ti_Data);
//    std::invoke(&ActionCommand::execute, command);
      
    return DoSuperMethodA(cl, obj, (Msg)msg);
}

