#include "include/Rectangle.h"
#include "include/ZuneObject.h"

Zune::Rectangle::Rectangle()
: Area() {

}

Zune::Rectangle::Rectangle(MUI_Rectangle_Direction direction, uint8_t height, const std::string& title) {
    object = MUI_NewObject(MUIC_Rectangle,
                           (direction == HORIZONTAL) ? MUIA_Rectangle_HBar : MUIA_Rectangle_VBar, TRUE,
                           MUIA_FixHeight, height,
                           title.length() > 0 ? (MUIA_Rectangle_BarTitle, title.c_str(), TAG_DONE) : TAG_DONE);
}

Zune::Rectangle::Rectangle(Object* obj)
: Area() {
    object = obj;
}

Zune::Rectangle& Zune::Rectangle::operator=(Object* obj) {
    object = obj;
    return *this;
}

std::string Zune::Rectangle::barTitle() const {
    return (STRPTR) mGetAttr(MUIA_Rectangle_BarTitle);
}

BOOL Zune::Rectangle::mHBar() const {
    return (BOOL) mGetAttr(MUIA_Rectangle_HBar);
}

BOOL Zune::Rectangle::mVBar() const {
    return (BOOL) mGetAttr(MUIA_Rectangle_VBar);
}


