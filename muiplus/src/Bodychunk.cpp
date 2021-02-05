#include "include/Bodychunk.h"

Bodychunk::Bodychunk(LONG width, LONG height, LONG depth, UBYTE masking, UBYTE * body, UBYTE compression)
: Bitmap() {
    object = MUI_NewObject(MUIC_Bodychunk, MUIA_Bodychunk_Body, (IPTR)body, MUIA_Width, (IPTR) width, MUIA_Height,
            (IPTR) height, MUIA_Bodychunk_Depth, (IPTR) depth, MUIA_Bodychunk_Masking, (IPTR) masking,
            MUIA_Bodychunk_Compression, (IPTR) compression, TAG_END);
}

Bodychunk::Bodychunk(Object* obj)
: Bitmap() {
    object = obj;
}

Bodychunk & Bodychunk::operator=(Object * obj) {
    object = obj;
    return *this;
}

UBYTE * Bodychunk::body(void) const {
    return (UBYTE *) mGetAttr(MUIA_Bodychunk_Body);
}

void Bodychunk::setBody(UBYTE * value) {
    setAttr(MUIA_Bodychunk_Body, (IPTR) value);
}

UBYTE Bodychunk::compression(void) const {
    return (UBYTE) mGetAttr(MUIA_Bodychunk_Compression);
}

void Bodychunk::setCompression(UBYTE value) {
    setAttr(MUIA_Bodychunk_Compression, (IPTR) value);
}

LONG Bodychunk::depth(void) const {
    return (LONG) mGetAttr(MUIA_Bodychunk_Depth);
}

void Bodychunk::setDepth(LONG value) {
    setAttr(MUIA_Bodychunk_Depth, (IPTR) value);
}

UBYTE Bodychunk::masking(void) const {
    return (UBYTE) mGetAttr(MUIA_Bodychunk_Masking);
}

void Bodychunk::setMasking(UBYTE value) {
    setAttr(MUIA_Bodychunk_Masking, (IPTR) value);
}

Bodychunk::Bodychunk() {}
