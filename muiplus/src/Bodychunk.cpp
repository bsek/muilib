#include "include/Bodychunk.h"
#include "include/RootClass.h"

Zune::Bodychunk::Bodychunk(Object *obj) {
    object = obj;
}

UBYTE *Zune::Bodychunk::body(void) const {
    return reinterpret_cast<UBYTE *>(mGetAttr(MUIA_Bodychunk_Body));
}

void Zune::Bodychunk::setBody(UBYTE *value) {
    setOrStore(MUIA_Bodychunk_Body, reinterpret_cast<IPTR>(value));
}

UBYTE Zune::Bodychunk::compression(void) const {
    return static_cast<UBYTE>(mGetAttr(MUIA_Bodychunk_Compression));
}

void Zune::Bodychunk::setCompression(UBYTE value) {
    setOrStore(MUIA_Bodychunk_Compression, static_cast<IPTR>(value));
}

LONG Zune::Bodychunk::depth(void) const {
    return static_cast<LONG>(mGetAttr(MUIA_Bodychunk_Depth));
}

void Zune::Bodychunk::setDepth(LONG value) {
    setOrStore(MUIA_Bodychunk_Depth, static_cast<IPTR>(value));
}

UBYTE Zune::Bodychunk::masking(void) const {
    return static_cast<UBYTE>(mGetAttr(MUIA_Bodychunk_Masking));
}

void Zune::Bodychunk::setMasking(UBYTE value) {
    setOrStore(MUIA_Bodychunk_Masking, static_cast<IPTR>(value));
}

void Zune::Bodychunk::build() {
    RootClass::createObject(MUIC_Bodychunk);
}

Zune::Bodychunk::Bodychunk() = default;
