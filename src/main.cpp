#include <exec/types.h>
#include <libraries/mui.h>

#include <proto/exec.h>
#include <proto/intuition.h>
#include <proto/muimaster.h>
#include <clib/alib_protos.h>

#include <cstdlib>
#include <string>
#include <iostream>
#include "CMUI_Window.h"
#include "CMUI_Application.h"
#include "CMUI_Button.h"
#include "CMUI_Checkmark.h"
#include "CMUI_HGroup.h"

#include "MainWindow.h"

struct Library *MUIMasterBase;
struct IntuitionBase *IntuitionBase;


#define		BUTTONADD		0x00ff
/*
Object *App;
Object *winForm;
Object *StrName;
Object *StrPhoneNumber;
Object *rGender;
Object *bAdd;
Object *bClose;
STRPTR	rGenderContent[3];

char cMessage[100];

enum
{
    MENU_PROJECT=1,
    MENU_ABOUT,
    MENU_EXIT,
};

static struct NewMenu MenuStr[]=
        {
                {NM_TITLE, "Virtual Group Example",        0 , 0, 0,  (APTR)MENU_PROJECT},
                {NM_ITEM,  "About",  		              "A", 0, 0,  (APTR)MENU_ABOUT  },
                {NM_ITEM,  NM_BARLABEL,                    0 , 0, 0,  (APTR)0           },
                {NM_ITEM,  "Exit",                        "E", 0, 0,  (APTR)MENU_EXIT   },
                {NM_END,   NULL,                           0 , 0, 0,  (APTR)0           },
        };

IPTR getradioindex(Object *obj)
{
    IPTR index = 0;
    GetAttr(MUIA_Radio_Active, obj, &index);
    return (index);
}

LONG xget(Object *obj,ULONG attribute)
{
    IPTR x;
    GetAttr(attribute, obj, &x);
    return(x);
}

char *getstr(Object *obj)
{
    return((char *)xget(obj,MUIA_String_Contents));
}

LONG ShowAddedRecord(void)
{
    strcpy(cMessage, "        Name : ");
    strcat(cMessage, getstr(StrName));
    strcat(cMessage, "\nPhone Number : ");
    strcat(cMessage, getstr(StrPhoneNumber));
    strcat(cMessage, "\n      Gender : ");
    strcat(cMessage, rGenderContent[getradioindex(rGender)]);
    return (MUI_RequestA(App,winForm,0,"Added Record Info","*OK","hello",NULL));
}



BOOL AreYouSure(void)
{
    BOOL sure= TRUE;
    if (MUI_RequestA(App, winForm, 0, "Quit?", "_Yes|_No", "\33cAre you sure?", 0)==1)
        sure = FALSE;
    return sure;
}
*/

template<typename L>
inline bool openLib(L *&library, const char *name, uint32_t version) {
    if ((library = (L *) OpenLibrary(name, version))) {
        return true;
    } else {
        std::fprintf(stderr, "Failed to open: %s\n", name);
    }
    return false;
}

template<typename L>
inline void closeLib(L *&library) {
    if (library) {
        CloseLibrary((Library *) library);
        library = 0;
    }
}

struct Args {

};

int main(int argc, char **argv) {

    if (!(MUIMasterBase = OpenLibrary("muimaster.library",0))) {
         printf("Could not open muimaster library");
         exit(1);
    }

    IntuitionBase = (struct IntuitionBase *)OpenLibrary("intuition.library", 39);
/*
    CONST_STRPTR cycleOS[] = {"Amiga OS 3.x", "Amiga OS 4.x", "Aros", "MorphOS", NULL};
    CONST_STRPTR radioOS[] = {"Amiga OS 3.x", "Amiga OS 4.x", "Aros", "MorphOS", NULL};
    CONST_STRPTR amigasList[] = {"Amiga 1000", "Amiga 500", "Amiga 2000", "Amiga 3000", "Amiga 500+",
                                 "Amiga CDTV", "Amiga 600", "Amiga 1200", "Amiga CD32", "Amiga 4000", "Amiga 4000T",
                                 NULL};

    std::cout << "start" << std::endl;
    std::cout << "end" << std::endl;

    APTR	grpRoot, grpVirtual, lHead, lInfo, obj_aux0, obj_aux1, obj_aux2, obj_aux3;
    APTR	hBar;

    ULONG signals;
    BOOL running = TRUE;


    rGenderContent[0] = "Female";
    rGenderContent[1] = "Male";
    rGenderContent[2] = NULL;

    lHead = CLabel("New Personal Record");

    lInfo = CLabel("   Please, fill in the blanks to add new personal record.   ");

    StrName = StringObject,
            MUIA_Frame, MUIV_Frame_String,
            MUIA_HelpNode, "StrName",
            MUIA_String_MaxLen, 50,
    End;

    obj_aux1 = Label2("        Name :");

    obj_aux0 = GroupObject,
            MUIA_Group_Columns, 2,
            Child, obj_aux1,
            Child, StrName,
    End;

    StrPhoneNumber = StringObject,
            MUIA_Frame, MUIV_Frame_String,
            MUIA_HelpNode, "StrPhoneNumber",
            MUIA_String_Accept, "0123456789",
    End;

    obj_aux3 = Label2("Phone Number :");

    obj_aux2 = GroupObject,
            MUIA_Group_Columns, 2,
            Child, obj_aux3,
            Child, StrPhoneNumber,
    End;

    rGender = RadioObject,
            MUIA_Frame, MUIV_Frame_Group,
            MUIA_FrameTitle, "Gender",
            MUIA_HelpNode, "rGender",
            MUIA_Radio_Entries, rGenderContent,
    End;

    grpVirtual = VirtgroupObject,
            VirtualFrame,
            MUIA_HelpNode, "grpVirtual",
            Child, lHead,
            Child, lInfo,
            Child, obj_aux0,
            Child, obj_aux2,
            Child, rGender,
    End;

    grpVirtual = ScrollgroupObject,
            MUIA_Scrollgroup_Contents, grpVirtual,
    End;

    hBar = RectangleObject,
            MUIA_Rectangle_HBar, TRUE,
            MUIA_FixHeight, 8,
    End;

    bAdd = SimpleButton("Add & show new record");

    bClose = SimpleButton("Close");

    grpRoot = GroupObject,
            Child, grpVirtual,
            Child, hBar,
            Child, bAdd,
            Child, bClose,
    End;

    winForm = WindowObject,
            MUIA_Window_Title, "Form",
            MUIA_Window_ID, MAKE_ID('E', 'W', 'I', 'N'),
            MUIA_Window_AppWindow, TRUE,
            WindowContents, grpRoot,
    End;

    auto window = CMUI_Window(2);
    window.addChildToGroup((Object*) grpRoot);

    App = ApplicationObject,
            MUIA_Application_Title      , "Virtual Group Example",
            MUIA_Application_Version    , "$VER: Virtual Group Example 1.0",
            MUIA_Application_Copyright  , "(c) 2016",
            MUIA_Application_Author     , "emarti",
            MUIA_Application_Description, "MUI Virtual Group Example",
            MUIA_Application_Base       , "Amiga",
        //    MUIA_Application_Menustrip  , MUI_MakeObject(MUIO_MenustripNM,MenuStr,0),
            SubWindow, window.operator*(),


    End;

    if (!App)
    {
        printf("Cannot create Application.\n");
        return(0);
    }

    DoMethod(winForm, MUIM_Notify, MUIA_Window_CloseRequest, TRUE,
             App, 2, MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);

    DoMethod(bClose, MUIM_Notify, MUIA_Pressed, FALSE,
             App, 2, MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);

    DoMethod(bAdd,MUIM_Notify,MUIA_Pressed,FALSE,
             App,2,MUIM_Application_ReturnID,BUTTONADD);

    window.setOpen(TRUE);

    while(running)
    {
        ULONG id = DoMethod(App,MUIM_Application_Input,&signals);

        switch(id)
        {
            case MUIV_Application_ReturnID_Quit:
                running = AreYouSure();
                break;

            case MENU_ABOUT:
                MUI_RequestA(App,winForm,0,"About","*OK","MUI Virtual Group Object Example on Amiga OS 3.X\n\nLink\nhttps://github.com/emartisoft/AmigaOS3.X-MUI-Examples",NULL);
                break;

            case MENU_EXIT:
                running = AreYouSure();
                break;

            case BUTTONADD:
                ShowAddedRecord();
                break;

        }
        if(running && signals) Wait(signals);
    }

    SetAttrs(winForm,MUIA_Window_Open,FALSE, TAG_DONE);

    if(App) MUI_DisposeObject(App);

    CloseLibrary(MUIMasterBase);
    closeLib(IntuitionBase);

    exit(RETURN_OK);
*/

    MainWindow mainWindow((LONG)2);
    Application application(mainWindow.getWindow(), "Test application");
    application.exec();

    CloseLibrary(MUIMasterBase);
    closeLib(IntuitionBase);

    exit(RETURN_OK);
    return 0;
 }
