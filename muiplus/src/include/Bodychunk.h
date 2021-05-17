#ifndef BODYCHUNK_H
#define    BODYCHUNK_H

#include "Bitmap.h"
#include "RootClass.h"

namespace Zune {
    class Bodychunk : public Zune::Bitmap {
    public:
        Bodychunk(Object *obj);

        UBYTE *body() const;

        void setBody(UBYTE *value);

        UBYTE compression() const;

        void setCompression(UBYTE value);

        LONG depth() const;

        void setDepth(LONG value);

        UBYTE masking() const;

        void setMasking(UBYTE value);

        Bodychunk();

        void build() override;
    };
}


#endif

