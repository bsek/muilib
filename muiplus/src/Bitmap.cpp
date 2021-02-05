#include "include/Bitmap.h"

Bitmap::Bitmap()
: Area() {

}

Bitmap::Bitmap(struct BitMap * value)
        : Area() {
    object = MUI_NewObject(MUIC_Bitmap, MUIA_Bitmap_Bitmap, (IPTR) value, TAG_END);
}

Bitmap::Bitmap(Object* obj)
: Area() {
    object = obj;
}

Bitmap & Bitmap::operator=(Object * obj) {
    object = obj;
    return *this;
}

struct BitMap * Bitmap::bitmap(void) const {
    return (struct BitMap *) mGetAttr(MUIA_Bitmap_Bitmap);
}

void Bitmap::setBitmap(struct BitMap * value) {
    setAttr(MUIA_Bitmap_Bitmap, (IPTR) value);
}

LONG Bitmap::height(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Height);
}

void Bitmap::setHeight(LONG value) {
    setAttr(MUIA_Bitmap_Height, (IPTR) value);
}

UBYTE * Bitmap::mappingTable(void) const {
    return (UBYTE *) mGetAttr(MUIA_Bitmap_MappingTable);
}

void Bitmap::setMappingTable(UBYTE * value) {
    setAttr(MUIA_Bitmap_MappingTable, (IPTR) value);
}

LONG Bitmap::precision(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Precision);
}

void Bitmap::setPrecision(LONG value) {
    setAttr(MUIA_Bitmap_Precision, (IPTR) value);
}

struct BitMap * Bitmap::remappedBitmap(void) const {
    return (struct BitMap *) mGetAttr(MUIA_Bitmap_RemappedBitmap);
}

IPTR * Bitmap::sourceColors(void) const {
    return (IPTR *) mGetAttr(MUIA_Bitmap_SourceColors);
}

void Bitmap::setSourceColors(IPTR * value) {
    setAttr(MUIA_Bitmap_SourceColors, (IPTR) value);
}

LONG Bitmap::transparent(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Transparent);
}

void Bitmap::setTransparent(LONG value) {
    setAttr(MUIA_Bitmap_Transparent, (IPTR) value);
}

LONG Bitmap::width(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Width);
}

void Bitmap::setWidth(LONG value) {
    setAttr(MUIA_Bitmap_Width, (IPTR) value);
}

