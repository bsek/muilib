#ifndef CMUI_RECTANGLE_H
#define CMUI_RECTANGLE_H

#include "CMUI_Area.h"

enum MUI_Rectangle_Direction {
    VERTICAL, HORIZONTAL
};

class CMUI_Rectangle : public CMUI_Area {
protected:
    CMUI_Rectangle();

public:
    CMUI_Rectangle(MUI_Rectangle_Direction direction, uint8_t height, const std::string& title);
    CMUI_Rectangle(Object * obj);
    CMUI_Rectangle& operator=(Object * obj);

    std::string barTitle() const;
    BOOL mHBar() const;
    BOOL mVBar() const;
};

#endif

