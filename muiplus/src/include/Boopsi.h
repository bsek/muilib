#ifndef BOOPSI_H
#define    BOOPSI_H

#include "RootClass.h"
#include "Area.h"

namespace Zune {
    class Boopsi : public Area {
    public:
        Boopsi();

        Boopsi(Object *obj);

        struct IClass * getClass() const;

        void setClass(struct IClass *value);

        char *classID() const;

        void setClassID(std::string& value);

        IPTR maxHeight() const;

        void setMaxHeight(IPTR value);

        IPTR maxWidth() const;

        void setMaxWidth(IPTR value);

        IPTR minHeight() const;

        void setMinHeight(IPTR value);

        IPTR minWidth() const;

        void setMinWidth(IPTR value);

        Object *boopsiObject() const;

        IPTR tagDrawInfo() const;

        void setTagDrawInfo(IPTR value);

        IPTR tagScreen() const;

        void setTagScreen(IPTR value);

        IPTR tagWindow() const;

        void setTagWindow(IPTR value);

        void setSmart(BOOL smart);

        void setRemember(ULONG value);

        void build() override;
    };
}

#endif

