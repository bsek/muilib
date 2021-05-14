
#include "include/Pixmap.h"

Zune::Pixmap::Pixmap() = default;

Zune::Pixmap::Pixmap(Object *obj) {
    object = obj;
}

ULONG Zune::Pixmap::getAlpha() {
    return static_cast<ULONG>(mGetAttr(MUIA_Pixmap_Alpha));
}
void Zune::Pixmap::setAlpha(ULONG value) {
    setOrStore(MUIA_Pixmap_Alpha, static_cast<IPTR>(value));
}
ULONG* Zune::Pixmap::clut() {
    return reinterpret_cast<ULONG*>(mGetAttr(MUIA_Pixmap_CLUT ));
}
void Zune::Pixmap::setCLUT(ULONG value) {
    setOrStore(MUIA_Pixmap_CLUT, static_cast<IPTR>(value));
}
ULONG Zune::Pixmap::compressedSize() {
    return static_cast<ULONG>(mGetAttr(MUIA_Pixmap_CompressedSize ));
}
void Zune::Pixmap::setCompressedSize(ULONG value) {
    setOrStore(MUIA_Pixmap_CompressedSize, static_cast<IPTR>(value));
}
ULONG Zune::Pixmap::compression() {
    return static_cast<ULONG>(mGetAttr(MUIA_Pixmap_Compression ));
}
void Zune::Pixmap::setCompression(ULONG value) {
    setOrStore(MUIA_Pixmap_Compression, static_cast<IPTR>(value));
}
APTR Zune::Pixmap::getData() {
    return reinterpret_cast<APTR>(mGetAttr(MUIA_Pixmap_Data ));
}
void Zune::Pixmap::setData(APTR value) {
    setOrStore(MUIA_Pixmap_Data, reinterpret_cast<IPTR>(value));
}
ULONG Zune::Pixmap::format() {
    return static_cast<ULONG>(mGetAttr(MUIA_Pixmap_Format ));
}
void Zune::Pixmap::setFormat(ULONG value) {
    setOrStore(MUIA_Pixmap_Format, static_cast<IPTR>(value));
}
LONG Zune::Pixmap::height() {
    return static_cast<LONG>(mGetAttr(MUIA_Pixmap_Height ));
}
void Zune::Pixmap::setHeight(LONG value) {
    setOrStore(MUIA_Pixmap_Height, static_cast<IPTR>(value));
}
APTR Zune::Pixmap::uncompressedData() {
    return reinterpret_cast<APTR>(mGetAttr(MUIA_Pixmap_UncompressedData));
}
LONG Zune::Pixmap::width() {
    return static_cast<LONG>(mGetAttr(MUIA_Pixmap_Width));
}
void Zune::Pixmap::setWidth(LONG value) {
    setOrStore(MUIA_Pixmap_Width, static_cast<IPTR>(value));
}

void Zune::Pixmap::build() {
    RootClass::createObject(MUIC_Pixmap);
}

