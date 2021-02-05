#ifndef MIU_PLUS_AROS_BUTTONS_H
#define MIU_PLUS_AROS_BUTTONS_H

#include <Button.h>
#include <Group.h>
#include <HGroup.h>
#include <Checkmark.h>

#include "SmallButton.h"

class Buttons : public Group {
private:
    Button importButton{"Test button"};
    Checkmark *importJPEG;
    Button bAdd{"Add & show new record"};
    Button bClose{"Close"};
    Button *bInfo;
    HGroup group;
    SmallButton* smallButton;
    int someValue = 5;
public:
    Buttons();
    void handle();
    void handle2();
protected:
 //   IPTR handleEvent(Class *cl, Object *obj, Msg msg);
};


#endif //MIU_PLUS_AROS_BUTTONS_H
