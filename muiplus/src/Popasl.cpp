#include "include/Popasl.h"
#include "include/ZuneObject.h"
#include "include/Popstring.h"

Zune::Popasl::Popasl() {

}

Zune::Popasl::Popasl(struct Hook *startHook, struct Hook *stopHook, IPTR type)
        : Popstring() {
    object = MUI_NewObject(MUIC_Popasl, MUIA_Popasl_StartHook, (IPTR) startHook, MUIA_Popasl_StopHook, (IPTR) stopHook,
                           MUIA_Popasl_Type, type, TAG_END);
}

Zune::Popasl::Popasl(Object *obj)
        : Popstring() {
    object = obj;
}

Zune::Popasl &Zune::Popasl::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL Zune::Popasl::active() const {
    return (BOOL) mGetAttr(MUIA_Popasl_Active);
}

struct Hook *Zune::Popasl::startHook() const {
    return (struct Hook *) mGetAttr(MUIA_Popasl_StartHook);
}

void Zune::Popasl::setStartHook(struct Hook *value) {
    setAttr(MUIA_Popasl_StartHook, (IPTR) value);
}

struct Hook *Zune::Popasl::stopHook() const {
    return (struct Hook *) mGetAttr(MUIA_Popasl_StopHook);
}

void Zune::Popasl::setStopHook(struct Hook *value) {
    setAttr(MUIA_Popasl_StopHook, (IPTR) value);
}

IPTR Zune::Popasl::getType() const {
    return (IPTR) mGetAttr(MUIA_Popasl_Type);
}

