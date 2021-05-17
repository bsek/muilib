#ifndef BITMAP_H
#define    BITMAP_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Bitmap : public Area {
    public:
        Bitmap();

        Bitmap(struct BitMap *value);

        Bitmap(Object *obj);

        struct BitMap *bitmap() const;

        void setBitmap(struct BitMap *value);

        LONG height() const;

        void setHeight(LONG value);

        UBYTE *mappingTable() const;

        void setMappingTable(UBYTE *value);

        LONG precision() const;

        void setPrecision(LONG value);

        struct BitMap *remappedBitmap() const;

        ULONG *sourceColors() const;

        void setSourceColors(ULONG *value);

        LONG transparent() const;

        void setTransparent(LONG value);

        LONG width() const;

        void setWidth(LONG value);

        void useFriend(BOOL useFriend);

        ULONG alpha() const;

        void setAlpha(ULONG alpha);

        void build() override;
    };
}


#endif

