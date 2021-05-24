#ifndef PIXMAP_H
#define PIXMAP_H

#include "Area.h"

namespace Zune {
    class Pixmap : Zune::Area {
    public:
        Pixmap();

        Pixmap(Object *obj);

        ULONG getAlpha();

        void setAlpha(ULONG value);

        ULONG *clut();

        void setCLUT(ULONG value);

        ULONG compressedSize();

        void setCompressedSize(ULONG value);

        ULONG compression();

        void setCompression(ULONG value);

        APTR getData();

        void setData(APTR value);

        ULONG format();

        void setFormat(ULONG value);

        LONG height();

        void setHeight(LONG value);

        APTR uncompressedData();

        LONG width();

        void setWidth(LONG value);

        void build() override;
    };
}


#endif //PIXMAP_H
