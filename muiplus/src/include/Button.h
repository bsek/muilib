#ifndef BUTTON_H
#define BUTTON_H

#include <string>
#include "Text.h"

class Button : public Text {
public:
    Button(Object * obj);
    Button(std::string label);
    Button & operator=(Object * obj);
protected:
    Button();
};


#endif

