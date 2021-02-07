#ifndef BOOPSI_H
#define	BOOPSI_H

#include "ZuneObject.h"
#include "Area.h"

namespace Zune {
    class Boopsi : public Area {
    protected:
        Boopsi();

    public:
        Boopsi(Object * obj);
        Boopsi & operator=(Object * obj);

        struct IClass * iClass() const;
        void setClass(struct IClass * value);
        char * classID() const;
        void setClassID(char * value);
        IPTR maxHeight() const;
        void setMaxHeight(IPTR value);
        IPTR maxWidth() const;
        void setMaxWidth(IPTR value);
        IPTR minHeight() const;
        void setMinHeight(IPTR value);
        IPTR minWidth() const;
        void setMinWidth(IPTR value);
        Object * mBoopsiObject() const;
        IPTR tagDrawInfo() const;
        void setTagDrawInfo(IPTR value);
        IPTR tagScreen() const;
        void setTagScreen(IPTR value);
        IPTR tagWindow() const;
        void setTagWindow(IPTR value);
    };
}

#endif

