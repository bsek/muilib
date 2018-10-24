#ifndef CMUI_BOOPSI_H
#define	CMUI_BOOPSI_H

#include "CMUI_Gadget.h"

class CMUI_Boopsi : public CMUI_Gadget {
protected:
    CMUI_Boopsi();

public:
    CMUI_Boopsi(Object * obj);
    CMUI_Boopsi & operator=(Object * obj);

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

#endif

