#ifndef CMUI_BODYCHUNK_H
#define	CMUI_BODYCHUNK_H

#include "CMUI_Bitmap.h"

class CMUI_Bodychunk : public CMUI_Bitmap {
public:
    CMUI_Bodychunk(LONG width, LONG height, LONG depth, UBYTE masking, UBYTE * body, UBYTE compression);
    CMUI_Bodychunk(Object * obj);

    CMUI_Bodychunk & operator=(Object * obj);

    UBYTE * body() const;
    void setBody(UBYTE * value);
    UBYTE compression() const;
    void setCompression(UBYTE value);
    LONG depth() const;
    void setDepth(LONG value);
    UBYTE masking() const;
    void setMasking(UBYTE value);

protected:
    CMUI_Bodychunk();
};


#endif

