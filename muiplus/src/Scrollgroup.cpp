/* 
 * File:   Scrollgroup.cpp
 * Author: Piotr Hoppe
 * 
 * Created on 3 grudnia 2015, 21:03
 */

#include "include/Scrollgroup.h"

Scrollgroup::Scrollgroup()
        : Group() {
}

Scrollgroup::Scrollgroup(Object* contents, bool showVert, bool showHoriz)
: Group() {
    object = MUI_NewObject(MUIC_Scrollgroup,
                           MUIA_Scrollgroup_FreeVert, showVert,
                           MUIA_Scrollgroup_FreeHoriz, showHoriz,
                           MUIA_Scrollgroup_Contents, contents,
                           TAG_END);
}

Scrollgroup::Scrollgroup(Object* obj)
: Group() {
    object = obj;
}

Scrollgroup& Scrollgroup::operator=(Object* obj) {
    object = obj;
    return *this;
}

Object * Scrollgroup::horizBar() const {
    return (Object *) mGetAttr(MUIA_Scrollgroup_HorizBar);
}

Object * Scrollgroup::vertBar() const {
    return (Object *) mGetAttr(MUIA_Scrollgroup_VertBar);
}

void Scrollgroup::setContents(Object *object) {
    setAttr(MUIA_Scrollgroup_Contents, *object);
}
