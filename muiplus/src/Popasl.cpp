#include "include/Popasl.h"
#include "include/RootClass.h"

Zune::Popasl::Popasl() = default;

Zune::Popasl::Popasl(Object *obj) {
    object = obj;
}

BOOL Zune::Popasl::active() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Popasl_Active));
}

struct Hook *Zune::Popasl::startHook() const {
    return reinterpret_cast<struct Hook *>(mGetAttr(MUIA_Popasl_StartHook));
}

void Zune::Popasl::setStartHook(struct Hook *value) {
    setAttr(MUIA_Popasl_StartHook, reinterpret_cast<IPTR>(value));
}

struct Hook *Zune::Popasl::stopHook() const {
    return reinterpret_cast<struct Hook *>(mGetAttr(MUIA_Popasl_StopHook));
}

void Zune::Popasl::setStopHook(struct Hook *value) {
    setAttr(MUIA_Popasl_StopHook, reinterpret_cast<IPTR>(value));
}

ULONG Zune::Popasl::getType() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Popasl_Type));
}

void Zune::Popasl::setType(ULONG type) {
    configmap[MUIA_Popasl_Type] = static_cast<IPTR>(type);
}

void Zune::Popasl::build() {
    RootClass::createObject(MUIC_Popasl);
}

