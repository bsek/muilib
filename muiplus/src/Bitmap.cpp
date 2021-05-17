#include "include/Bitmap.h"
#include "include/RootClass.h"

Zune::Bitmap::Bitmap() = default;

Zune::Bitmap::Bitmap(struct BitMap *value) {
    object = MUI_NewObject(MUIC_Bitmap, MUIA_Bitmap_Bitmap, reinterpret_cast<IPTR>(value), TAG_END);
}

Zune::Bitmap::Bitmap(Object *obj)
        : Area() {
    object = obj;
}

struct BitMap *Zune::Bitmap::bitmap(void) const {
    return reinterpret_cast<struct BitMap*>(mGetAttr(MUIA_Bitmap_Bitmap));
}

void Zune::Bitmap::setBitmap(struct BitMap *value) {
    setOrStore(MUIA_Bitmap_Bitmap, reinterpret_cast<IPTR>(value));
}

LONG Zune::Bitmap::height(void) const {
    return static_cast<LONG>(mGetAttr(MUIA_Bitmap_Height));
}

void Zune::Bitmap::setHeight(LONG value) {
    setOrStore(MUIA_Bitmap_Height, static_cast<IPTR>(value));
}

UBYTE *Zune::Bitmap::mappingTable(void) const {
    return reinterpret_cast<UBYTE*>(mGetAttr(MUIA_Bitmap_MappingTable));
}

void Zune::Bitmap::setMappingTable(UBYTE *value) {
    setOrStore(MUIA_Bitmap_MappingTable, reinterpret_cast<IPTR>(value));
}

LONG Zune::Bitmap::precision(void) const {
    return static_cast<LONG>(mGetAttr(MUIA_Bitmap_Precision));
}

void Zune::Bitmap::setPrecision(LONG value) {
    setOrStore(MUIA_Bitmap_Precision, static_cast<IPTR>(value));
}

struct BitMap *Zune::Bitmap::remappedBitmap(void) const {
    return reinterpret_cast<struct BitMap*>(mGetAttr(MUIA_Bitmap_RemappedBitmap));
}

ULONG *Zune::Bitmap::sourceColors(void) const {
    return reinterpret_cast<ULONG*>(mGetAttr(MUIA_Bitmap_SourceColors));
}

void Zune::Bitmap::setSourceColors(ULONG *value) {
    setOrStore(MUIA_Bitmap_SourceColors, reinterpret_cast<IPTR>(value));
}

LONG Zune::Bitmap::transparent(void) const {
    return static_cast<LONG>(mGetAttr(MUIA_Bitmap_Transparent));
}

void Zune::Bitmap::setTransparent(LONG value) {
    setOrStore(MUIA_Bitmap_Transparent, static_cast<IPTR>(value));
}

LONG Zune::Bitmap::width(void) const {
    return static_cast<LONG>(mGetAttr(MUIA_Bitmap_Width));
}

void Zune::Bitmap::setWidth(LONG value) {
    setOrStore(MUIA_Bitmap_Width, static_cast<IPTR>(value));
}

void Zune::Bitmap::build() {
    RootClass::createObject(MUIC_Bitmap);
}

void Zune::Bitmap::useFriend(BOOL useFriend) {
    configmap[MUIA_Bitmap_UseFriend] = static_cast<IPTR>(useFriend);
}

ULONG Zune::Bitmap::alpha() const {
    return static_cast<ULONG>(mGetAttr(MUIA_Bitmap_Alpha));
}

void Zune::Bitmap::setAlpha(ULONG alpha) {
    setOrStore(MUIA_Bitmap_Alpha, static_cast<IPTR>(alpha));
}

