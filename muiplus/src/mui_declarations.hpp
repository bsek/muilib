#ifndef MUI_DECLARATIONS_HPP
#define	MUI_DECLARATIONS_HPP

#ifdef __AROS__
#include <exec/types.h>

#ifndef LIBRARIES_MUI_H
#include <libraries/mui.h>
#endif

#include <proto/intuition.h>
#include <proto/muimaster.h>
#include <clib/alib_protos.h>
#endif

#if defined (__AMIGA__) && !defined (__PPC__)

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/utility.h>
#include <proto/intuition.h>
#include <clib/alib_protos.h>

#ifndef LIBRARIES_MUI_H
#include <libraries/mui.h>
#endif
#include <proto/muimaster.h>

#define IPTR ULONG
#endif

/* Prototypes */

#if defined(__amigaos4__)
#include <clib/alib_protos.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/icon.h>
#include <proto/graphics.h>
#include <proto/intuition.h>
#include <proto/gadtools.h>
#include <proto/utility.h>
#include <proto/asl.h>
#include <proto/muimaster.h>

#include <clib/muimaster_protos.h>

#include <dos/obsolete.h>
#include <graphics/gfxmacros.h>
#include <workbench/workbench.h>

#define Wait IExec->Wait

#define MUI_NewObject IMUIMaster->MUI_NewObject
#define MUI_MakeObject IMUIMaster->MUI_MakeObject
#define MUI_NewObjectA IMUIMaster->MUI_NewObjectA
#define MUI_CreateCustomClass IMUIMaster->MUI_CreateCustomClass
#define MUI_DisposeObject IMUIMaster->MUI_DisposeObject
#define MUI_RequestA IMUIMaster->MUI_RequestA

#define DoSuperMethodA IIntuition->IDoSuperMethodA
#define DoMethodA IIntuition->IDoMethodA
#define DoMethod IIntuition->IDoMethod
#define NewObject IIntuition->NewObject
#define GetAttr IIntuition->GetAttr
#define SetAttrs IIntuition->SetAttrs

/* Compiler specific stuff */
#include "amiga_compiler.h"

extern struct Library *MUIMasterBase;
extern struct MUIMasterIFace *IMUIMaster;
extern struct IntuitionIFace* IIntuition;

#define IPTR uint32

#endif

/* System */
#include <dos/dos.h>

/* ANSI C */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cstdint>

#include <vector>
#include <memory>
#include <iostream>

#define nullptr NULL

// GNU statement expression and variardic macro
#define ARRAY(arg...) ({ volatile const IPTR __parm[] = {arg}; &__parm;})

template<typename T>
std::unique_ptr<IPTR> createTagListFromVector(std::vector<T> list, int offset) {

    int size = list.size();

    std::unique_ptr<IPTR> p{new IPTR[size + offset]};

    int i = offset;
    for (auto val : list) {
        p.get()[i++] = (IPTR) val;
    }

    return p;
}


#endif	/* MUI_DECLARATIONS_HPP */

