#ifndef CMUI_AREA_H
#define	CMUI_AREA_H

#include "CMUI_Notify.h"
#include "CMUI_Class.h"

class CMUI_Area : public CMUI_Class {
public:
    void setBackground(LONG value);
    LONG bottomEdge() const;
    Object * contextMenu() const;
    void setContextMenu(Object * value);
    Object * contextMenuTrigger() const;
    char controlChar() const;
    void setControlChar(char value);
    LONG cycleChain() const;
    void setCycleChain(LONG value);
    BOOL disabled() const;
    void setDisabled(BOOL value);
    BOOL draggable() const;
    void setDraggable(BOOL value);
    BOOL dropable() const;
    void setDropable(BOOL value);
    void setFillArea(BOOL value);
    struct TextFont * font() const;
    LONG height() const;
    LONG horizDisappear() const;
    void setHorizDisappear(LONG value);
    WORD horizWeight() const;
    void setHorizWeight(WORD value);
    LONG innerBottom() const;
    LONG innerLeft() const;
    LONG innerRight() const;
    LONG innerTop() const;
    LONG leftEdge() const;
    BOOL pressed() const;
    LONG rightEdge() const;
    BOOL selected() const;
    void setSelected(BOOL value);
    STRPTR shortHelp() const;
    void setShortHelp(STRPTR value);
    BOOL showMe() const;
    void setShowMe(BOOL value);
    LONG timer() const;
    LONG topEdge() const;
    LONG vertDisappear() const;
    void setVertDisappear(LONG value);
    WORD vertWeight() const;
    void setVertWeight(WORD value);
    void setMaxWidth(LONG value);
    void setFixWidth(LONG value);
    void setFixHeight(LONG value);
    LONG width() const;
    struct Window * window() const;
    Object * windowObject() const;
    IPTR askMinMax(struct MUI_MinMax * MinMaxInfo);
    IPTR cleanup();
    IPTR contextMenuBuild(LONG mx, LONG my);
    IPTR contextMenuChoice(Object * item);
    IPTR createBubble(LONG x, LONG y, char * txt, IPTR flags);
    IPTR createShortHelp(LONG mx, LONG my);
    IPTR deleteBubble(IPTR bubble);
    IPTR deleteShortHelp(STRPTR help);
    IPTR dragBegin(Object * obj);
    IPTR dragDrop(Object * obj, LONG x, LONG y);
    IPTR dragFinish(Object * obj);
    IPTR dragQuery(Object * obj);
    IPTR dragReport(Object * obj, LONG x, LONG y, LONG update);
    IPTR draw(IPTR flags);

    virtual IPTR drawBackground(LONG left, LONG top, LONG width, LONG height, LONG xoffset, LONG yoffset, LONG flags);
    IPTR handleEvent(struct IntuiMessage * imsg, LONG muikey);
    IPTR handleInput(struct IntuiMessage * imsg, LONG muikey);
    IPTR hide();
    IPTR setup(struct MUI_RenderInfo * RenderInfo);
    IPTR show();

    struct MUI_CustomClass *registerClass() override;

protected:
    CMUI_Area();

};


#endif	/* CMUI_AREA_H */

