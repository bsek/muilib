#include "include/CMUI_Colorfield.h"

CMUI_Colorfield::CMUI_Colorfield(ULONG red, ULONG green, ULONG blue)
: CMUI_Area() {
	object = MUI_NewObject(MUIC_Colorfield, MUIA_Colorfield_Red, red, MUIA_Colorfield_Green, green,
			MUIA_Colorfield_Blue, blue);
}

CMUI_Colorfield::CMUI_Colorfield(Object* obj)
: CMUI_Area() {
    object = obj;
}

CMUI_Colorfield& CMUI_Colorfield::operator=(Object* obj) {
    object = obj;
    return *this;
}

IPTR CMUI_Colorfield::blue() const
{
	 return (IPTR) mGetAttr(MUIA_Colorfield_Blue);
}

void CMUI_Colorfield::setBlue(IPTR value)
{
	setAttr(MUIA_Colorfield_Blue, (IPTR) value);
}

IPTR CMUI_Colorfield::green() const
{
	 return (IPTR) mGetAttr(MUIA_Colorfield_Green);
}

void CMUI_Colorfield::setGreen(IPTR value)
{
	setAttr(MUIA_Colorfield_Green, (IPTR) value);
}

IPTR CMUI_Colorfield::pen() const
{
	 return (IPTR) mGetAttr(MUIA_Colorfield_Pen);
}

IPTR CMUI_Colorfield::red() const
{
	 return (IPTR) mGetAttr(MUIA_Colorfield_Red);
}

void CMUI_Colorfield::setRed(IPTR value)
{
	setAttr(MUIA_Colorfield_Red, (IPTR) value);
}

IPTR * CMUI_Colorfield::rgb() const
{
	 return (IPTR *) mGetAttr(MUIA_Colorfield_RGB);
}

void CMUI_Colorfield::setRgb(IPTR * value)
{
	setAttr(MUIA_Colorfield_RGB, (IPTR) value);
}

CMUI_Colorfield::CMUI_Colorfield() {}
