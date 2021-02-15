#ifndef MIU_PLUS_AROS_BUTTONS_H
#define MIU_PLUS_AROS_BUTTONS_H

#include <Group.h>
#include <Group.h>

#include "SmallButton.h"

class Buttons : public Zune::Group {
private:
/*    Zune::Button importButton{"Test button"};
    Zune::Checkmark *importJPEG;
    Zune::Button bAdd{"Add & show new record"};
    Zune::Button bClose{"Close"};
    Zune::Button *bInfo;
    Zune::Group group{Zune::GroupDirection::Horizontal};
    SmallButton* smallButton;
    */
    int someValue = 5;

 public:
    Buttons();
    void handle();
    void handle2();
protected:
 //   IPTR handleEvent(Class *cl, Object *object, Msg msg);
};


#endif //MIU_PLUS_AROS_BUTTONS_H
