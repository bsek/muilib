#include "include/CMUI_Popasl.h"

CMUI_Popasl::CMUI_Popasl() {

}

CMUI_Popasl::CMUI_Popasl(struct Hook * startHook, struct Hook * stopHook, IPTR type)
: CMUI_Popstring() {
    object = MUI_NewObject(MUIC_Popasl, MUIA_Popasl_StartHook, (IPTR) startHook, MUIA_Popasl_StopHook, (IPTR) stopHook,
            MUIA_Popasl_Type, type, TAG_END);
}

CMUI_Popasl::CMUI_Popasl(Object* obj)
: CMUI_Popstring() {
    object = obj;
}

CMUI_Popasl& CMUI_Popasl::operator=(Object* obj) {
    object = obj;
    return *this;
}

 BOOL CMUI_Popasl::active() const
{
	 return (BOOL) mGetAttr(MUIA_Popasl_Active);
}

 struct Hook * CMUI_Popasl::startHook() const
{
	 return (struct Hook *) mGetAttr(MUIA_Popasl_StartHook);
}

 void CMUI_Popasl::setStartHook(struct Hook *value)
{
    setAttr(MUIA_Popasl_StartHook, (IPTR) value);
}

 struct Hook * CMUI_Popasl::stopHook() const
{
	 return (struct Hook *) mGetAttr(MUIA_Popasl_StopHook);
}

 void CMUI_Popasl::setStopHook(struct Hook *value)
{
    setAttr(MUIA_Popasl_StopHook, (IPTR) value);
}

 IPTR CMUI_Popasl::getType() const
{
	 return (IPTR) mGetAttr(MUIA_Popasl_Type);
}

