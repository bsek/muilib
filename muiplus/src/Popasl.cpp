#include "include/Popasl.h"

Popasl::Popasl() {

}

Popasl::Popasl(struct Hook * startHook, struct Hook * stopHook, IPTR type)
: Popstring() {
    object = MUI_NewObject(MUIC_Popasl, MUIA_Popasl_StartHook, (IPTR) startHook, MUIA_Popasl_StopHook, (IPTR) stopHook,
            MUIA_Popasl_Type, type, TAG_END);
}

Popasl::Popasl(Object* obj)
: Popstring() {
    object = obj;
}

Popasl& Popasl::operator=(Object* obj) {
    object = obj;
    return *this;
}

 BOOL Popasl::active() const
{
	 return (BOOL) mGetAttr(MUIA_Popasl_Active);
}

 struct Hook * Popasl::startHook() const
{
	 return (struct Hook *) mGetAttr(MUIA_Popasl_StartHook);
}

 void Popasl::setStartHook(struct Hook *value)
{
    setAttr(MUIA_Popasl_StartHook, (IPTR) value);
}

 struct Hook * Popasl::stopHook() const
{
	 return (struct Hook *) mGetAttr(MUIA_Popasl_StopHook);
}

 void Popasl::setStopHook(struct Hook *value)
{
    setAttr(MUIA_Popasl_StopHook, (IPTR) value);
}

 IPTR Popasl::getType() const
{
	 return (IPTR) mGetAttr(MUIA_Popasl_Type);
}

