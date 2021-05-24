#ifndef CHUNKYIMAGE_H
#define CHUNKYIMAGE_H

#include "Bitmap.h"

namespace Zune {
    class Chunkyimage : public Zune::Bitmap {
    public:
        Chunkyimage();

        Chunkyimage(Object *obj);

        UBYTE * getPalette();

        UBYTE * getPixels();

        LONG getNumColors();

        LONG getModulo();

        void setModulo(LONG value);

        void setNumColors(LONG value);

        void setPalette(UBYTE *value);

        void setPixels(UBYTE *value);

        void build() override;
    };
}


#endif //CHUNKYIMAGE_H
