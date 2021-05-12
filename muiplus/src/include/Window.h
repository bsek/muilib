#ifndef WINDOW_H
#define WINDOW_H

#include "Notify.h"
#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Window : public Zune::Notify {
    public:
        Window();

        void setBackdrop(BOOL backdrop);

        void setBorderless(BOOL borderless);

        void setAppWindow(BOOL appWindow);

        void setCloseGadget(BOOL closeGadget);

        void setDepthGadget(BOOL depthGadget);

        void setSizeGadget(BOOL sizeGadget);

        void setSizeRight(BOOL sizeRight);

        void setDragBar(BOOL dragBar);

        void setNeedMouseObject(BOOL value);

        void setLeftEdge(LONG leftEdge);

        void setHeight(LONG height);

        void setTopEdge(LONG value);

        BOOL activate() const;

        void setActivate(BOOL value);

        Object *activeObject() const;

        void setActiveObject(Object *value);

        void setAltHeight(LONG altHeight);

        LONG altHeight() const;

        void setAltLeftEdge(LONG altLeftEdge);

        LONG altLeftEdge() const;

        void setAltTopEdge(LONG altTopEdge);

        LONG altTopEdge() const;

        void setAltWidth(LONG altWidth);

        LONG altWidth() const;

        BOOL closeRequest() const;

        Object *defaultObject() const;

        void setDefaultObject(Object *value);

        BOOL fancyDrawing() const;

        void setFancyDrawing(BOOL value);

        LONG height() const;

        IPTR id() const;

        void setID(IPTR value);

        struct InputEvent *inputEvent() const;

        BOOL isSubWindow() const;

        void setIsSubWindow(BOOL value);

        LONG leftEdge() const;

        IPTR menuAction() const;

        void setMenuAction(IPTR value);

        Object *menustrip() const;

        Object *mouseObject() const;

        void setNoMenus(BOOL value);

        BOOL open() const;

        void setOpen(BOOL value);

        std::string publicScreen() const;

        void setPublicScreen(std::string& value);

        void setRefWindow(Object *value);

        Object *rootObject() const;

        void setRootObject(Object *value);

        struct Screen *screen() const;

        void setScreen(struct Screen *value);

        std::string screenTitle() const;

        void setScreenTitle(std::string& value);

        BOOL sleep() const;

        void setSleep(BOOL value);

        std::string title() const;

        void setTitle(std::string value);

        LONG topEdge() const;

        BOOL useBottomBorderScroller() const;

        void setUseBottomBorderScroller(BOOL value);

        BOOL useLeftBorderScroller() const;

        void setUseLeftBorderScroller(BOOL value);

        BOOL useRightBorderScroller() const;

        void setUseRightBorderScroller(BOOL value);

        void setWidth(LONG value);

        LONG width() const;

        struct Window *window() const;

        IPTR addEventHandler(struct MUI_EventHandlerNode *ehnode);

        IPTR remEventHandler(struct MUI_EventHandlerNode *ehnode);

        IPTR mScreenToBack();

        IPTR mScreenToFront();

        IPTR snapshot(LONG flags);

        IPTR toBack();

        IPTR toFront();

        void setEraseArea(BOOL doErase);

        void setWindowToolBox(BOOL toolbox);

        void setZoomGadget(BOOL enable);

        void build() override;
    };
}

#endif

