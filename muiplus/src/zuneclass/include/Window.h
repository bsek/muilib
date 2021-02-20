#ifndef WINDOW_H
#define WINDOW_H

#include "Notify.h"
#include "Group.h"
#include "RootClass.h"

/*
MUIA_Window_Activate 	V4 	ISG 	BOOL
MUIA_Window_ActiveObject 	V4 	.SG 	Object *
MUIA_Window_AltHeight 	V4 	I.G 	LONG
MUIA_Window_AltLeftEdge 	V4 	I.G 	LONG
MUIA_Window_AltTopEdge 	V4 	I.G 	LONG
MUIA_Window_AltWidth 	V4 	I.G 	LONG
MUIA_Window_AppWindow 	V5 	I.. 	BOOL
MUIA_Window_Backdrop 	V4 	I.. 	BOOL
MUIA_Window_Borderless 	V4 	I.. 	BOOL
MUIA_Window_CloseGadget 	V4 	I.. 	BOOL
MUIA_Window_CloseRequest 	V4 	.SG 	BOOL
MUIA_Window_DefaultObject 	V4 	ISG 	Object *
MUIA_Window_DepthGadget 	V4 	I.. 	BOOL
MUIA_Window_DisableKeys 	V15 	ISG 	ULONG
MUIA_Window_DragBar 	V4 	I.. 	BOOL
MUIA_Window_DrawInfo 	V4 	..G 	struct DrawInfo *
MUIA_Window_FancyDrawing 	V8 	ISG 	BOOL (OBSOLETE)
MUIA_Window_Height 	V4 	ISG 	LONG
MUIA_Window_ID 	V4 	ISG 	ULONG
MUIA_Window_InputEvent 	V4 	..G 	struct InputEvent *
MUIA_Window_IsSubWindow 	V4 	ISG 	BOOL
MUIA_Window_LeftEdge 	V4 	ISG 	LONG
MUIA_Window_Menu 	V4 	I.. 	struct NewMenu * (OBSOLETE)
MUIA_Window_MenuAction 	V8 	ISG 	ULONG
MUIA_Window_Menustrip 	V8 	ISG 	Object *
MUIA_Window_MouseObject 	V10 	..G 	Object *
MUIA_Window_NeedsMouseObject 	V10 	I.. 	BOOL (OBSOLETE)
MUIA_Window_NoMenus 	V4 	ISG 	BOOL
MUIA_Window_Opacity 	V20 	ISG 	LONG
MUIA_Window_Open 	V4 	.SG 	BOOL
MUIA_Window_PublicScreen 	V6 	ISG 	STRPTR
MUIA_Window_RefWindow 	V4 	IS. 	Object *
MUIA_Window_RootObject 	V4 	ISG 	Object *
MUIA_Window_Screen 	V4 	ISG 	struct Screen *
MUIA_Window_ScreenTitle 	V5 	ISG 	STRPTR
MUIA_Window_SizeGadget 	V4 	I.. 	BOOL
MUIA_Window_SizeRight 	V4 	I.. 	BOOL
MUIA_Window_Sleep 	V4 	.SG 	BOOL
MUIA_Window_Title 	V4 	ISG 	STRPTR
MUIA_Window_TopEdge 	V4 	ISG 	LONG
MUIA_Window_UseBottomBorderScroller 	V13 	ISG 	BOOL
MUIA_Window_UseLeftBorderScroller 	V13 	ISG 	BOOL
MUIA_Window_UseRightBorderScroller 	V13 	ISG 	BOOL
MUIA_Window_Width 	V4 	ISG 	LONG
MUIA_Window_Window 	V4 	..G 	struct Window *
 */

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

        STRPTR publicScreen() const;

        void setPublicScreen(STRPTR value);

        void setRefWindow(Object *value);

        Object *rootObject() const;

        void setRootObject(Object *value);

        struct Screen *screen() const;

        void setScreen(struct Screen *value);

        STRPTR screenTitle() const;

        void setScreenTitle(STRPTR value);

        BOOL sleep() const;

        void setSleep(BOOL value);

        STRPTR title() const;

        void setTitle(std::string value);

        LONG topEdge() const;

        BOOL useBottomBorderScroller() const;

        void setUseBottomBorderScroller(BOOL value);

        BOOL useLeftBorderScroller() const;

        void setUseLeftBorderScroller(BOOL value);

        BOOL useRightBorderScroller() const;

        void setUseRightBorderScroller(BOOL value);

        LONG width() const;

        struct Window *window() const;

        IPTR addEventHandler(struct MUI_EventHandlerNode *ehnode);

        IPTR remEventHandler(struct MUI_EventHandlerNode *ehnode);

        IPTR mScreenToBack();

        IPTR mScreenToFront();

        IPTR snapshot(LONG flags);

        IPTR toBack();

        IPTR toFront();
    };
}

#endif

