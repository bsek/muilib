/* 
 * File:   CMUI_Scrollgroup.cpp
 * Author: Piotr Hoppe
 * 
 * Created on 3 grudnia 2015, 21:03
 */

#include "include/CMUI_Scrollgroup.h"

CMUI_Scrollgroup::CMUI_Scrollgroup()
        : CMUI_Group() {
}

CMUI_Scrollgroup::CMUI_Scrollgroup(Object* contents, bool showVert, bool showHoriz)
: CMUI_Group() {
    object = MUI_NewObject(MUIC_Scrollgroup,
                           MUIA_Scrollgroup_FreeVert, showVert,
                           MUIA_Scrollgroup_FreeHoriz, showHoriz,
                           MUIA_Scrollgroup_Contents, contents,
                           TAG_END);
}

CMUI_Scrollgroup::CMUI_Scrollgroup(Object* obj)
: CMUI_Group() {
    object = obj;
}

CMUI_Scrollgroup& CMUI_Scrollgroup::operator=(Object* obj) {
    object = obj;
    return *this;
}

Object * CMUI_Scrollgroup::horizBar() const {
    return (Object *) mGetAttr(MUIA_Scrollgroup_HorizBar);
}

Object * CMUI_Scrollgroup::vertBar() const {
    return (Object *) mGetAttr(MUIA_Scrollgroup_VertBar);
}

void CMUI_Scrollgroup::setContents(Object *object) {
    setAttr(MUIA_Scrollgroup_Contents, *object);
}
