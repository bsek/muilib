/* 
 * File:   HTMLtext.cpp
 * Author: Piotr Hoppe
 * 
 * Created on 10 grudnia 2015, 21:32
 */

#include "include/HTMLtext.h"

HTMLtext::HTMLtext()
: Virtgroup() {
}

HTMLtext::HTMLtext(TagItem* tags)
: Virtgroup() {
    object = MUI_NewObjectA(MUIC_HTMLtext, tags);
#ifdef MUIPP_DEBUG
    if (object == NULL)
        _MUIPPWarning("Could not create a HTMLtext object\n");
#endif
}

HTMLtext::HTMLtext(Tag tag1, ...)
: Virtgroup() {
    object = MUI_NewObjectA(MUIC_HTMLtext, (struct TagItem *) &tag1);
#ifdef MUIPP_DEBUG
    if (object == NULL)
        _MUIPPWarning("Could not create a HTMLtext object\n");
#endif
}

HTMLtext::HTMLtext(Object* obj)
: Virtgroup() {
    object = obj;
}

HTMLtext & HTMLtext::operator=(Object * obj) {
    object = obj;
    return *this;
}

char * HTMLtext::Block(void) const {
    return (char *) MGetAttr(MUIA_HTMLtext_Block);
}

STRPTR HTMLtext::Contents(void) const {
    return (STRPTR) MGetAttr(MUIA_HTMLtext_Contents);
}

void HTMLtext::SetContents(STRPTR value) {
    SetAttr(MUIA_HTMLtext_Contents, (IPTR) value);
}

BOOL HTMLtext::MDoubleClick(void) const {
    return (BOOL) MGetAttr(MUIA_HTMLtext_DoubleClick);
}

void HTMLtext::SetLoadImages(BOOL value) {
    SetAttr(MUIA_HTMLtext_LoadImages, (IPTR) value);
}

void HTMLtext::SetOpenURLHook(struct Hook * value) {
    SetAttr(MUIA_HTMLtext_OpenURLHook, (IPTR) value);
}

STRPTR HTMLtext::Path(void) const {
    return (STRPTR) MGetAttr(MUIA_HTMLtext_Path);
}

void HTMLtext::SetPath(STRPTR value) {
    SetAttr(MUIA_HTMLtext_Path, (IPTR) value);
}

STRPTR HTMLtext::Title(void) const {
    return (STRPTR) MGetAttr(MUIA_HTMLtext_Title);
}

STRPTR HTMLtext::URL(void) const {
    return (STRPTR) MGetAttr(MUIA_HTMLtext_URL);
}

void HTMLtext::SetURL(STRPTR value) {
    SetAttr(MUIA_HTMLtext_URL, (IPTR) value);
}
