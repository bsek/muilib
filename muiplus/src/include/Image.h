#ifndef IMAGE_H
#define    IMAGE_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Image : public Zune::Area {
    public:
        Image();

        Image(Object *obj);

        void setState(LONG value);

        void setFontMatch(BOOL value);

        void setFontMatchHeight(BOOL value);

        void setFontMatchWidth(BOOL value);

        void setFreeHoriz(BOOL value);

        void setFreeVert(BOOL value);

        void setSpec(std::string value);

        void build() override;
    };
}

#endif    /* IMAGE_H */

