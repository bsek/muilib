#include "include/CMUI_Rectangle.h"

CMUI_Rectangle::CMUI_Rectangle()
: CMUI_Area() {

}

CMUI_Rectangle::CMUI_Rectangle(MUI_Rectangle_Direction direction, uint8_t height, const std::string& title) {
    object = MUI_NewObject(MUIC_Rectangle,
                           (direction == HORIZONTAL) ? MUIA_Rectangle_HBar : MUIA_Rectangle_VBar, TRUE,
                           MUIA_FixHeight, height,
                           title.length() > 0 ? (MUIA_Rectangle_BarTitle, title.c_str(), TAG_DONE) : TAG_DONE);
}

CMUI_Rectangle::CMUI_Rectangle(Object* obj)
: CMUI_Area() {
    object = obj;
}

CMUI_Rectangle& CMUI_Rectangle::operator=(Object* obj) {
    object = obj;
    return *this;
}

std::string CMUI_Rectangle::barTitle() const {
    return (STRPTR) mGetAttr(MUIA_Rectangle_BarTitle);
}

BOOL CMUI_Rectangle::mHBar() const {
    return (BOOL) mGetAttr(MUIA_Rectangle_HBar);
}

BOOL CMUI_Rectangle::mVBar() const {
    return (BOOL) mGetAttr(MUIA_Rectangle_VBar);
}


