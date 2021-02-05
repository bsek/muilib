#include "include/Numericbutton.h"

Numericbutton::Numericbutton(Object* obj)
: Numeric() {
    object = obj;
}

Numericbutton::Numericbutton(LONG min, LONG max, std::string format)
: Numeric() {
    object = MUI_MakeObject(MUIO_NumericButton, (IPTR) min, (IPTR) max, (IPTR) format.c_str());
}

Numericbutton& Numericbutton::operator=(Object* obj) {
    object = obj;
    return *this;
}

Numericbutton::Numericbutton() {}
