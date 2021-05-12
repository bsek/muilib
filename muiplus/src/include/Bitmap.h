#ifndef BITMAP_H
#define    BITMAP_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Bitmap : public Area {
    protected:
        Bitmap();

    public:
        Bitmap(struct BitMap *value);

        Bitmap(Object *obj);

        Bitmap &operator=(Object *obj);

        struct BitMap *bitmap() const;

        void setBitmap(struct BitMap *value);

        LONG height() const;

        void setHeight(LONG value);

        UBYTE *mappingTable() const;

        void setMappingTable(UBYTE *value);

        LONG precision() const;

        void setPrecision(LONG value);

        struct BitMap *remappedBitmap() const;

        IPTR *sourceColors() const;

        void setSourceColors(IPTR *value);

        LONG transparent() const;

        void setTransparent(LONG value);

        LONG width() const;

        void setWidth(LONG value);
    };
}


#endif

