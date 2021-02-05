#include "include/Colorfield.h"

Colorfield::Colorfield(ULONG red, ULONG green, ULONG blue)
: Area() {
	object = MUI_NewObject(MUIC_Colorfield, MUIA_Colorfield_Red, red, MUIA_Colorfield_Green, green,
			MUIA_Colorfield_Blue, blue);
}

Colorfield::Colorfield(Object* obj)
: Area() {
    object = obj;
}

Colorfield& Colorfield::operator=(Object* obj) {
    object = obj;
    return *this;
}

IPTR Colorfield::blue() const
{
	 return (IPTR) mGetAttr(MUIA_Colorfield_Blue);
}

void Colorfield::setBlue(IPTR value)
{
	setAttr(MUIA_Colorfield_Blue, (IPTR) value);
}

IPTR Colorfield::green() const
{
	 return (IPTR) mGetAttr(MUIA_Colorfield_Green);
}

void Colorfield::setGreen(IPTR value)
{
	setAttr(MUIA_Colorfield_Green, (IPTR) value);
}

IPTR Colorfield::pen() const
{
	 return (IPTR) mGetAttr(MUIA_Colorfield_Pen);
}

IPTR Colorfield::red() const
{
	 return (IPTR) mGetAttr(MUIA_Colorfield_Red);
}

void Colorfield::setRed(IPTR value)
{
	setAttr(MUIA_Colorfield_Red, (IPTR) value);
}

IPTR * Colorfield::rgb() const
{
	 return (IPTR *) mGetAttr(MUIA_Colorfield_RGB);
}

void Colorfield::setRgb(IPTR * value)
{
	setAttr(MUIA_Colorfield_RGB, (IPTR) value);
}

Colorfield::Colorfield() {}
