#include "include/CMUI_Bitmap.h"

CMUI_Bitmap::CMUI_Bitmap()
: CMUI_Area() {

}

CMUI_Bitmap::CMUI_Bitmap(struct BitMap * value)
        : CMUI_Area() {
    object = MUI_NewObject(MUIC_Bitmap, MUIA_Bitmap_Bitmap, (IPTR) value, TAG_END);
}

CMUI_Bitmap::CMUI_Bitmap(Object* obj)
: CMUI_Area() {
    object = obj;
}

CMUI_Bitmap & CMUI_Bitmap::operator=(Object * obj) {
    object = obj;
    return *this;
}

struct BitMap * CMUI_Bitmap::bitmap(void) const {
    return (struct BitMap *) mGetAttr(MUIA_Bitmap_Bitmap);
}

void CMUI_Bitmap::setBitmap(struct BitMap * value) {
    setAttr(MUIA_Bitmap_Bitmap, (IPTR) value);
}

LONG CMUI_Bitmap::height(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Height);
}

void CMUI_Bitmap::setHeight(LONG value) {
    setAttr(MUIA_Bitmap_Height, (IPTR) value);
}

UBYTE * CMUI_Bitmap::mappingTable(void) const {
    return (UBYTE *) mGetAttr(MUIA_Bitmap_MappingTable);
}

void CMUI_Bitmap::setMappingTable(UBYTE * value) {
    setAttr(MUIA_Bitmap_MappingTable, (IPTR) value);
}

LONG CMUI_Bitmap::precision(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Precision);
}

void CMUI_Bitmap::setPrecision(LONG value) {
    setAttr(MUIA_Bitmap_Precision, (IPTR) value);
}

struct BitMap * CMUI_Bitmap::remappedBitmap(void) const {
    return (struct BitMap *) mGetAttr(MUIA_Bitmap_RemappedBitmap);
}

IPTR * CMUI_Bitmap::sourceColors(void) const {
    return (IPTR *) mGetAttr(MUIA_Bitmap_SourceColors);
}

void CMUI_Bitmap::setSourceColors(IPTR * value) {
    setAttr(MUIA_Bitmap_SourceColors, (IPTR) value);
}

LONG CMUI_Bitmap::transparent(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Transparent);
}

void CMUI_Bitmap::setTransparent(LONG value) {
    setAttr(MUIA_Bitmap_Transparent, (IPTR) value);
}

LONG CMUI_Bitmap::width(void) const {
    return (LONG) mGetAttr(MUIA_Bitmap_Width);
}

void CMUI_Bitmap::setWidth(LONG value) {
    setAttr(MUIA_Bitmap_Width, (IPTR) value);
}

