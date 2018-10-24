#include "include/CMUI_Bodychunk.h"

CMUI_Bodychunk::CMUI_Bodychunk(LONG width, LONG height, LONG depth, UBYTE masking, UBYTE * body, UBYTE compression)
: CMUI_Bitmap() {
    object = MUI_NewObject(MUIC_Bodychunk, MUIA_Bodychunk_Body, (IPTR)body, MUIA_Width, (IPTR) width, MUIA_Height,
            (IPTR) height, MUIA_Bodychunk_Depth, (IPTR) depth, MUIA_Bodychunk_Masking, (IPTR) masking,
            MUIA_Bodychunk_Compression, (IPTR) compression, TAG_END);
}

CMUI_Bodychunk::CMUI_Bodychunk(Object* obj)
: CMUI_Bitmap() {
    object = obj;
}

CMUI_Bodychunk & CMUI_Bodychunk::operator=(Object * obj) {
    object = obj;
    return *this;
}

UBYTE * CMUI_Bodychunk::body(void) const {
    return (UBYTE *) mGetAttr(MUIA_Bodychunk_Body);
}

void CMUI_Bodychunk::setBody(UBYTE * value) {
    setAttr(MUIA_Bodychunk_Body, (IPTR) value);
}

UBYTE CMUI_Bodychunk::compression(void) const {
    return (UBYTE) mGetAttr(MUIA_Bodychunk_Compression);
}

void CMUI_Bodychunk::setCompression(UBYTE value) {
    setAttr(MUIA_Bodychunk_Compression, (IPTR) value);
}

LONG CMUI_Bodychunk::depth(void) const {
    return (LONG) mGetAttr(MUIA_Bodychunk_Depth);
}

void CMUI_Bodychunk::setDepth(LONG value) {
    setAttr(MUIA_Bodychunk_Depth, (IPTR) value);
}

UBYTE CMUI_Bodychunk::masking(void) const {
    return (UBYTE) mGetAttr(MUIA_Bodychunk_Masking);
}

void CMUI_Bodychunk::setMasking(UBYTE value) {
    setAttr(MUIA_Bodychunk_Masking, (IPTR) value);
}

CMUI_Bodychunk::CMUI_Bodychunk() {}
