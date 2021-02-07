#include "include/Bodychunk.h"
#include "include/Bitmap.h"
#include "include/ZuneObject.h"

Zune::Bodychunk::Bodychunk(LONG width, LONG height, LONG depth, UBYTE masking, UBYTE *body, UBYTE compression)
        : Bitmap() {
    object = MUI_NewObject(MUIC_Bodychunk, MUIA_Bodychunk_Body, (IPTR) body, MUIA_Width, (IPTR) width, MUIA_Height,
                           (IPTR) height, MUIA_Bodychunk_Depth, (IPTR) depth, MUIA_Bodychunk_Masking, (IPTR) masking,
                           MUIA_Bodychunk_Compression, (IPTR) compression, TAG_END);
}

Zune::Bodychunk::Bodychunk(Object *obj)
        : Bitmap() {
    object = obj;
}

Zune::Bodychunk &Zune::Bodychunk::operator=(Object *obj) {
    object = obj;
    return *this;
}

UBYTE *Zune::Bodychunk::body(void) const {
    return (UBYTE *) mGetAttr(MUIA_Bodychunk_Body);
}

void Zune::Bodychunk::setBody(UBYTE *value) {
    setAttr(MUIA_Bodychunk_Body, (IPTR) value);
}

UBYTE Zune::Bodychunk::compression(void) const {
    return (UBYTE) mGetAttr(MUIA_Bodychunk_Compression);
}

void Zune::Bodychunk::setCompression(UBYTE value) {
    setAttr(MUIA_Bodychunk_Compression, (IPTR) value);
}

LONG Zune::Bodychunk::depth(void) const {
    return (LONG) mGetAttr(MUIA_Bodychunk_Depth);
}

void Zune::Bodychunk::setDepth(LONG value) {
    setAttr(MUIA_Bodychunk_Depth, (IPTR) value);
}

UBYTE Zune::Bodychunk::masking(void) const {
    return (UBYTE) mGetAttr(MUIA_Bodychunk_Masking);
}

void Zune::Bodychunk::setMasking(UBYTE value) {
    setAttr(MUIA_Bodychunk_Masking, (IPTR) value);
}

Zune::Bodychunk::Bodychunk() {}
