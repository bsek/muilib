#include "include/Numericbutton.h"
#include "include/ZuneObject.h"
#include "include/Numeric.h"

Zune::Numericbutton::Numericbutton(Object* obj)
: Numeric() {
    object = obj;
}

Zune::Numericbutton::Numericbutton(LONG min, LONG max, std::string format)
: Numeric() {
    object = MUI_MakeObject(MUIO_NumericButton, (IPTR) min, (IPTR) max, (IPTR) format.c_str());
}

Zune::Numericbutton& Zune::Numericbutton::operator=(Object* obj) {
    object = obj;
    return *this;
}

Zune::Numericbutton::Numericbutton() {}
