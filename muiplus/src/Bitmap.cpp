#include "include/Bitmap.h"
#include "include/RootClass.h"

Zune::Bitmap::Bitmap()
        : Area() {

}

Zune::Bitmap::Bitmap(struct BitMap *value)
        : Area() {
    object = MUI_NewObject(MUIC_Bitmap, MUIA_Bitmap_Bitmap, (IPTR) value, TAG_END);
}

Zune::Bitmap::Bitmap(Object *obj)
        : Area() {
    object = obj;
}

Zune::Bitmap &Zune::Bitmap::operator=(Object *obj) {
    object = obj;
    return *this;
}

struct BitMap *Zune::Bitmap::bitmap(void) const {
    return (struct BitMap *) mGetAttr(MUIA_Bitmap_Bitmap);
}

void Zune::Bitmap::setBitmap(struct BitMap *value) {
    setAttr(MUIA_Bitmap_Bitmap, (IPTR) value);
}

LONG Zune::Bitmap::height(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Height);
}

void Zune::Bitmap::setHeight(LONG value) {
    setAttr(MUIA_Bitmap_Height, (IPTR) value);
}

UBYTE *Zune::Bitmap::mappingTable(void) const {
    return (UBYTE *) mGetAttr(MUIA_Bitmap_MappingTable);
}

void Zune::Bitmap::setMappingTable(UBYTE *value) {
    setAttr(MUIA_Bitmap_MappingTable, (IPTR) value);
}

LONG Zune::Bitmap::precision(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Precision);
}

void Zune::Bitmap::setPrecision(LONG value) {
    setAttr(MUIA_Bitmap_Precision, (IPTR) value);
}

struct BitMap *Zune::Bitmap::remappedBitmap(void) const {
    return (struct BitMap *) mGetAttr(MUIA_Bitmap_RemappedBitmap);
}

IPTR *Zune::Bitmap::sourceColors(void) const {
    return (IPTR *) mGetAttr(MUIA_Bitmap_SourceColors);
}

void Zune::Bitmap::setSourceColors(IPTR *value) {
    setAttr(MUIA_Bitmap_SourceColors, (IPTR) value);
}

LONG Zune::Bitmap::transparent(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Transparent);
}

void Zune::Bitmap::setTransparent(LONG value) {
    setAttr(MUIA_Bitmap_Transparent, (IPTR) value);
}

LONG Zune::Bitmap::width(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Width);
}

void Zune::Bitmap::setWidth(LONG value) {
    setAttr(MUIA_Bitmap_Width, (IPTR) value);
}

