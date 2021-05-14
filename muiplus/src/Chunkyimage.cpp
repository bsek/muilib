#include "include/Chunkyimage.h"

Zune::Chunkyimage::Chunkyimage() = default;

Zune::Chunkyimage::Chunkyimage(Object *obj) {
    object = obj;
}

UBYTE* Zune::Chunkyimage::getPixels() {
    return reinterpret_cast<UBYTE*>(mGetAttr(MUIA_ChunkyImage_Pixels));
}

void Zune::Chunkyimage::setPixels(UBYTE* value) {
    setOrStore(MUIA_ChunkyImage_Pixels, reinterpret_cast<IPTR>(value));
}

UBYTE* Zune::Chunkyimage::getPalette() {
    return reinterpret_cast<UBYTE*>(mGetAttr(MUIA_ChunkyImage_Palette));
}

void Zune::Chunkyimage::setPalette(UBYTE* value) {
    setOrStore(MUIA_ChunkyImage_Palette, reinterpret_cast<IPTR>(value));
}

LONG Zune::Chunkyimage::getNumColors() {
    return static_cast<LONG>(mGetAttr(MUIA_ChunkyImage_NumColors));
}

void Zune::Chunkyimage::setNumColors(LONG value) {
    setOrStore(MUIA_ChunkyImage_NumColors, static_cast<IPTR>(value));
}

LONG Zune::Chunkyimage::getModulo() {
    return static_cast<LONG>(mGetAttr(MUIA_ChunkyImage_Modulo));
}

void Zune::Chunkyimage::setModulo(LONG value) {
    setOrStore(MUIA_ChunkyImage_Modulo, static_cast<IPTR>(value));
}

void Zune::Chunkyimage::build() {
    RootClass::createObject(MUIC_ChunkyImage);
}

