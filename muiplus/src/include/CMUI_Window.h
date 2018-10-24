#ifndef CMUI_WINDOW_H
#define CMUI_WINDOW_H

#include "CMUI_Notify.h"
#include "CMUI_Group.h"
#include "CMUI_HGroup.h"

class CMUI_Window : public CMUI_Notify {
private:
    CMUI_HGroup hGroup;
protected:
    CMUI_Window();
public:
    CMUI_Window(LONG id);
    CMUI_Window(const CMUI_Window& win);
    CMUI_Window(CMUI_Window&& win);
    CMUI_Window(Object * obj);
    CMUI_Window & operator=(Object * obj);

    void addChildToGroup(Object* obj);
    BOOL activate(void) const;
    void setActivate(BOOL value);
    Object * activeObject(void) const;
    void setActiveObject(Object *value);
    LONG altHeight(void) const;
    LONG altLeftEdge(void) const;
    LONG altTopEdge(void) const;
    LONG altWidth(void) const;
    BOOL closeRequest(void) const;
    Object * defaultObject(void) const;
    void setDefaultObject(Object *value);
    BOOL fancyDrawing(void) const;
    void setFancyDrawing(BOOL value);
    LONG height(void) const;
    IPTR id(void) const;
    void setID(IPTR value);
    struct InputEvent * inputEvent(void) const;
    BOOL isSubWindow(void) const;
    void setIsSubWindow(BOOL value);
    LONG leftEdge(void) const;
    IPTR menuAction(void) const;
    void setMenuAction(IPTR value);
    Object * menustrip(void) const;
    Object * mouseObject(void) const;
    void setNoMenus(BOOL value);
    BOOL open(void) const;
    void setOpen(BOOL value);
    STRPTR publicScreen(void) const;
    void setPublicScreen(STRPTR value);
    void setRefWindow(Object *value);
    Object * rootObject(void) const;
    void setRootObject(Object * value);
    struct Screen * screen(void) const;
    void setScreen(struct Screen *value);
    STRPTR screenTitle(void) const;
    void setScreenTitle(STRPTR value);
    BOOL sleep(void) const;
    void setSleep(BOOL value);
    STRPTR title(void) const;
    void setTitle(std::string value);
    LONG topEdge(void) const;
    BOOL useBottomBorderScroller(void) const;
    void setUseBottomBorderScroller(BOOL value);
    BOOL useLeftBorderScroller(void) const;
    void setUseLeftBorderScroller(BOOL value);
    BOOL useRightBorderScroller(void) const;
    void setUseRightBorderScroller(BOOL value);
    LONG width(void) const;
    struct Window * window(void) const;
    IPTR addEventHandler(struct MUI_EventHandlerNode *ehnode);
    IPTR remEventHandler(struct MUI_EventHandlerNode *ehnode);
    IPTR mScreenToBack(void);
    IPTR mScreenToFront(void);
    IPTR snapshot(LONG flags);
    IPTR toBack(void);
    IPTR toFront(void);
};

#endif

