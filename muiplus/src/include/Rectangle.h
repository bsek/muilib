#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Area.h"
#include "ZuneObject.h"

namespace Zune {
    enum MUI_Rectangle_Direction {
        VERTICAL, HORIZONTAL
    };

    class Rectangle : public Area {
    protected:
        Rectangle();

    public:
        Rectangle(MUI_Rectangle_Direction direction, uint8_t height, const std::string& title);
        Rectangle(Object * obj);
        Rectangle& operator=(Object * obj);

        std::string barTitle() const;
        BOOL mHBar() const;
        BOOL mVBar() const;
    };
}

#endif

