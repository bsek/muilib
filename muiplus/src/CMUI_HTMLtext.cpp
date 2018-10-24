/* 
 * File:   HTMLtext.cpp
 * Author: Piotr Hoppe
 * 
 * Created on 10 grudnia 2015, 21:32
 */

#include "include/CMUI_HTMLtext.h"

CMUI_HTMLtext::CMUI_HTMLtext()
: CMUI_Virtgroup() {
}

CMUI_HTMLtext::CMUI_HTMLtext(TagItem* tags)
: CMUI_Virtgroup() {
    object = MUI_NewObjectA(MUIC_HTMLtext, tags);
#ifdef MUIPP_DEBUG
    if (object == NULL)
        _MUIPPWarning("Could not create a CMUI_HTMLtext object\n");
#endif
}

CMUI_HTMLtext::CMUI_HTMLtext(Tag tag1, ...)
: CMUI_Virtgroup() {
    object = MUI_NewObjectA(MUIC_HTMLtext, (struct TagItem *) &tag1);
#ifdef MUIPP_DEBUG
    if (object == NULL)
        _MUIPPWarning("Could not create a CMUI_HTMLtext object\n");
#endif
}

CMUI_HTMLtext::CMUI_HTMLtext(Object* obj)
: CMUI_Virtgroup() {
    object = obj;
}

CMUI_HTMLtext & CMUI_HTMLtext::operator=(Object * obj) {
    object = obj;
    return *this;
}

char * CMUI_HTMLtext::Block(void) const {
    return (char *) MGetAttr(MUIA_HTMLtext_Block);
}

STRPTR CMUI_HTMLtext::Contents(void) const {
    return (STRPTR) MGetAttr(MUIA_HTMLtext_Contents);
}

void CMUI_HTMLtext::SetContents(STRPTR value) {
    SetAttr(MUIA_HTMLtext_Contents, (IPTR) value);
}

BOOL CMUI_HTMLtext::MDoubleClick(void) const {
    return (BOOL) MGetAttr(MUIA_HTMLtext_DoubleClick);
}

void CMUI_HTMLtext::SetLoadImages(BOOL value) {
    SetAttr(MUIA_HTMLtext_LoadImages, (IPTR) value);
}

void CMUI_HTMLtext::SetOpenURLHook(struct Hook * value) {
    SetAttr(MUIA_HTMLtext_OpenURLHook, (IPTR) value);
}

STRPTR CMUI_HTMLtext::Path(void) const {
    return (STRPTR) MGetAttr(MUIA_HTMLtext_Path);
}

void CMUI_HTMLtext::SetPath(STRPTR value) {
    SetAttr(MUIA_HTMLtext_Path, (IPTR) value);
}

STRPTR CMUI_HTMLtext::Title(void) const {
    return (STRPTR) MGetAttr(MUIA_HTMLtext_Title);
}

STRPTR CMUI_HTMLtext::URL(void) const {
    return (STRPTR) MGetAttr(MUIA_HTMLtext_URL);
}

void CMUI_HTMLtext::SetURL(STRPTR value) {
    SetAttr(MUIA_HTMLtext_URL, (IPTR) value);
}
