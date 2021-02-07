#ifndef MUI_DECLARATIONS_HPP
#define    MUI_DECLARATIONS_HPP

#include <exec/types.h>

#ifndef LIBRARIES_MUI_H

#include <libraries/mui.h>

#endif

#include <proto/intuition.h>
#include <proto/muimaster.h>
#include <proto/utility.h>
//#include <clib/alib_protos.h>
#include <proto/alib.h>

/* System */
#include <dos/dos.h>

/* ANSI C */
#include <stdlib.h>
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


#endif    /* MUI_DECLARATIONS_HPP */

