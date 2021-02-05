#include "include/Rectangle.h"

Rectangle::Rectangle()
: Area() {

}

Rectangle::Rectangle(MUI_Rectangle_Direction direction, uint8_t height, const std::string& title) {
    object = MUI_NewObject(MUIC_Rectangle,
                           (direction == HORIZONTAL) ? MUIA_Rectangle_HBar : MUIA_Rectangle_VBar, TRUE,
                           MUIA_FixHeight, height,
                           title.length() > 0 ? (MUIA_Rectangle_BarTitle, title.c_str(), TAG_DONE) : TAG_DONE);
}

Rectangle::Rectangle(Object* obj)
: Area() {
    object = obj;
}

Rectangle& Rectangle::operator=(Object* obj) {
    object = obj;
    return *this;
}

std::string Rectangle::barTitle() const {
    return (STRPTR) mGetAttr(MUIA_Rectangle_BarTitle);
}

BOOL Rectangle::mHBar() const {
    return (BOOL) mGetAttr(MUIA_Rectangle_HBar);
}

BOOL Rectangle::mVBar() const {
    return (BOOL) mGetAttr(MUIA_Rectangle_VBar);
}


