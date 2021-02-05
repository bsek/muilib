#ifndef BUTTON_H
#define BUTTON_H

#include <Button.h>

class Button {
protected:
//    void render(Object *object) override;

public:
    void setText(const std::string &text);

private:
    Button();
    Button *button;
    std::string &text;
};

#endif