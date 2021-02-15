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



        BOOL activate(void) const;

        void setActivate(BOOL value);

        Object *activeObject(void) const;

        void setActiveObject(Object *value);

        LONG altHeight(void) const;

        LONG altLeftEdge(void) const;

        LONG altTopEdge(void) const;

        LONG altWidth(void) const;

        BOOL closeRequest(void) const;

        Object *defaultObject(void) const;

        void setDefaultObject(Object *value);

        BOOL fancyDrawing(void) const;

        void setFancyDrawing(BOOL value);

        LONG height(void) const;

        IPTR id(void) const;

        void setID(IPTR value);

        struct InputEvent *inputEvent(void) const;

        BOOL isSubWindow(void) const;

        void setIsSubWindow(BOOL value);

        LONG leftEdge(void) const;

        IPTR menuAction(void) const;

        void setMenuAction(IPTR value);

        Object *menustrip(void) const;

        Object *mouseObject(void) const;

        void setNoMenus(BOOL value);

        BOOL open(void) const;

        void setOpen(BOOL value);

        STRPTR publicScreen(void) const;

        void setPublicScreen(STRPTR value);

        void setRefWindow(Object *value);

        Object *rootObject(void) const;

        void setRootObject(Object *value);

        struct Screen *screen(void) const;

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

        struct Window *window(void) const;

        IPTR addEventHandler(struct MUI_EventHandlerNode *ehnode);

        IPTR remEventHandler(struct MUI_EventHandlerNode *ehnode);

        IPTR mScreenToBack(void);

        IPTR mScreenToFront(void);

        IPTR snapshot(LONG flags);

        IPTR toBack(void);

        IPTR toFront(void);
    };
}

#endif

