#include "include/Scrollgroup.h"
#include "include/Group.h"
#include "include/RootClass.h"

Zune::Scrollgroup::Scrollgroup()
        : Group() {
}

Zune::Scrollgroup::Scrollgroup(Object *contents, bool showVert, bool showHoriz)
        : Group() {
    object = MUI_NewObject(MUIC_Scrollgroup,
                           MUIA_Scrollgroup_FreeVert, showVert,
                           MUIA_Scrollgroup_FreeHoriz, showHoriz,
                           MUIA_Scrollgroup_Contents, contents,
                           TAG_END);
}

Zune::Scrollgroup::Scrollgroup(Object *obj)
        : Group() {
    object = obj;
}

Zune::Scrollgroup &Zune::Scrollgroup::operator=(Object *obj) {
    object = obj;
    return *this;
}

Object *Zune::Scrollgroup::horizBar() const {
    return (Object *) mGetAttr(MUIA_Scrollgroup_HorizBar);
}

Object *Zune::Scrollgroup::vertBar() const {
    return (Object *) mGetAttr(MUIA_Scrollgroup_VertBar);
}

void Zune::Scrollgroup::setContents(Object *object) {
    setAttr(MUIA_Scrollgroup_Contents, *object);
}
