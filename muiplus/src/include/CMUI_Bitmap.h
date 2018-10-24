#ifndef CMUI_BITMAP_H
#define	CMUI_BITMAP_H

#include "CMUI_Area.h"

class CMUI_Bitmap : public CMUI_Area {
protected:
    CMUI_Bitmap();
public:
    CMUI_Bitmap(struct BitMap * value);
    CMUI_Bitmap(Object * obj);

    CMUI_Bitmap & operator=(Object * obj);

    struct BitMap * bitmap() const;
    void setBitmap(struct BitMap * value);
    LONG height() const;
    void setHeight(LONG value);
    UBYTE * mappingTable() const;
    void setMappingTable(UBYTE * value);
    LONG precision() const;
    void setPrecision(LONG value);
    struct BitMap * remappedBitmap() const;
    IPTR * sourceColors() const;
    void setSourceColors(IPTR * value);
    LONG transparent() const;
    void setTransparent(LONG value);
    LONG width() const;
    void setWidth(LONG value);
};


#endif

