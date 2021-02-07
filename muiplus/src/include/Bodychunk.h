#ifndef BODYCHUNK_H
#define    BODYCHUNK_H

#include "Bitmap.h"
#include "ZuneObject.h"

namespace Zune {
    class Bodychunk : public Zune::Bitmap {
    public:
        Bodychunk(LONG width, LONG height, LONG depth, UBYTE masking, UBYTE *body, UBYTE compression);

        Bodychunk(Object *obj);

        Bodychunk &operator=(Object *obj);

        UBYTE *body() const;

        void setBody(UBYTE *value);

        UBYTE compression() const;

        void setCompression(UBYTE value);

        LONG depth() const;

        void setDepth(LONG value);

        UBYTE masking() const;

        void setMasking(UBYTE value);

    protected:
        Bodychunk();
    };
}


#endif

