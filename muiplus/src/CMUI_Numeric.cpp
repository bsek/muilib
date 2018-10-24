#include "include/CMUI_Numeric.h"

BOOL CMUI_Numeric::checkAllSizes() const {
    return (BOOL) mGetAttr(MUIA_Numeric_CheckAllSizes);
}

void CMUI_Numeric::setCheckAllSizes(BOOL value) {
    setAttr(MUIA_Numeric_CheckAllSizes, (IPTR) value);
}

LONG CMUI_Numeric::getDefault() const {
    return (LONG) mGetAttr(MUIA_Numeric_Default);
}

void CMUI_Numeric::setDefault(LONG value) {
    setAttr(MUIA_Numeric_Default, (IPTR) value);
}

STRPTR CMUI_Numeric::format() const {
    return (STRPTR) mGetAttr(MUIA_Numeric_Format);
}

void CMUI_Numeric::setFormat(STRPTR value) {
    setAttr(MUIA_Numeric_Format, (IPTR) value);
}

LONG CMUI_Numeric::max() const {
    return (LONG) mGetAttr(MUIA_Numeric_Max);
}

void CMUI_Numeric::setMax(LONG value) {
    setAttr(MUIA_Numeric_Max, (IPTR) value);
}

LONG CMUI_Numeric::min() const {
    return (LONG) mGetAttr(MUIA_Numeric_Min);
}

void CMUI_Numeric::setMin(LONG value) {
    setAttr(MUIA_Numeric_Min, (IPTR) value);
}

BOOL CMUI_Numeric::reverse() const {
    return (BOOL) mGetAttr(MUIA_Numeric_Reverse);
}

void CMUI_Numeric::setReverse(BOOL value) {
    setAttr(MUIA_Numeric_Reverse, (IPTR) value);
}

BOOL CMUI_Numeric::revLeftRight() const {
    return (BOOL) mGetAttr(MUIA_Numeric_RevLeftRight);
}

void CMUI_Numeric::setRevLeftRight(BOOL value) {
    setAttr(MUIA_Numeric_RevLeftRight, (IPTR) value);
}

BOOL CMUI_Numeric::revUpDown() const {
    return (BOOL) mGetAttr(MUIA_Numeric_RevUpDown);
}

void CMUI_Numeric::setRevUpDown(BOOL value) {
    setAttr(MUIA_Numeric_RevUpDown, (IPTR) value);
}

LONG CMUI_Numeric::value() const {
    return (LONG) mGetAttr(MUIA_Numeric_Value);
}

void CMUI_Numeric::setValue(LONG value) {
    setAttr(MUIA_Numeric_Value, (IPTR) value);
}

IPTR CMUI_Numeric::decrease(LONG amount) {
    return DoMethod(object,MUIM_Numeric_Decrease, amount);
}

IPTR CMUI_Numeric::increase(LONG amount) {
    return DoMethod(object,MUIM_Numeric_Increase, amount);
}

IPTR CMUI_Numeric::scaleToValue(LONG scalemin, LONG scalemax, LONG scale) {
    return DoMethod(object,MUIM_Numeric_ScaleToValue, scalemin, scalemax, scale);
}

IPTR CMUI_Numeric::setDefault() {
    return DoMethod(object,MUIM_Numeric_SetDefault);
}

IPTR CMUI_Numeric::stringify(LONG value) {
    return DoMethod(object,MUIM_Numeric_Stringify, value);
}

IPTR CMUI_Numeric::valueToScale(LONG scalemin, LONG scalemax) {
    return DoMethod(object,MUIM_Numeric_ValueToScale, scalemin, scalemax);
}

//CMUI_Numeric::operator LONG() {
//    return Value();
//}

CMUI_Numeric::operator int () {
    return (int) value();
}
//
//CMUI_Numeric & CMUI_Numeric::operator=(LONG value) {
//    SetValue(value);
//    return *this;
//}

CMUI_Numeric & CMUI_Numeric::operator=(int value) {
    setValue((LONG) value);
    return *this;
}

CMUI_Numeric CMUI_Numeric::operator++() // prefix
{
    increase(1);
    return *this;
}

CMUI_Numeric CMUI_Numeric::operator++(int dummy) // postfix
{
    increase(1);
    return *this;
}

CMUI_Numeric & CMUI_Numeric::operator+=(LONG value) {
    increase(value);
    return *this;
}

CMUI_Numeric CMUI_Numeric::operator--() // prefix
{
    decrease(1);
    return *this;
}

CMUI_Numeric CMUI_Numeric::operator--(int dummy) // postfix
{
    decrease(1);
    return *this;
}

CMUI_Numeric & CMUI_Numeric::operator-=(LONG value) {
    decrease(value);
    return *this;
}

CMUI_Numeric::CMUI_Numeric()
: CMUI_Area() {
}
