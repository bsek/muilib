#include "include/Numeric.h"

BOOL Numeric::checkAllSizes() const {
    return (BOOL) mGetAttr(MUIA_Numeric_CheckAllSizes);
}

void Numeric::setCheckAllSizes(BOOL value) {
    setAttr(MUIA_Numeric_CheckAllSizes, (IPTR) value);
}

LONG Numeric::getDefault() const {
    return (LONG) mGetAttr(MUIA_Numeric_Default);
}

void Numeric::setDefault(LONG value) {
    setAttr(MUIA_Numeric_Default, (IPTR) value);
}

STRPTR Numeric::format() const {
    return (STRPTR) mGetAttr(MUIA_Numeric_Format);
}

void Numeric::setFormat(STRPTR value) {
    setAttr(MUIA_Numeric_Format, (IPTR) value);
}

LONG Numeric::max() const {
    return (LONG) mGetAttr(MUIA_Numeric_Max);
}

void Numeric::setMax(LONG value) {
    setAttr(MUIA_Numeric_Max, (IPTR) value);
}

LONG Numeric::min() const {
    return (LONG) mGetAttr(MUIA_Numeric_Min);
}

void Numeric::setMin(LONG value) {
    setAttr(MUIA_Numeric_Min, (IPTR) value);
}

BOOL Numeric::reverse() const {
    return (BOOL) mGetAttr(MUIA_Numeric_Reverse);
}

void Numeric::setReverse(BOOL value) {
    setAttr(MUIA_Numeric_Reverse, (IPTR) value);
}

BOOL Numeric::revLeftRight() const {
    return (BOOL) mGetAttr(MUIA_Numeric_RevLeftRight);
}

void Numeric::setRevLeftRight(BOOL value) {
    setAttr(MUIA_Numeric_RevLeftRight, (IPTR) value);
}

BOOL Numeric::revUpDown() const {
    return (BOOL) mGetAttr(MUIA_Numeric_RevUpDown);
}

void Numeric::setRevUpDown(BOOL value) {
    setAttr(MUIA_Numeric_RevUpDown, (IPTR) value);
}

LONG Numeric::value() const {
    return (LONG) mGetAttr(MUIA_Numeric_Value);
}

void Numeric::setValue(LONG value) {
    setAttr(MUIA_Numeric_Value, (IPTR) value);
}

IPTR Numeric::decrease(LONG amount) {
    return DoMethod(object,MUIM_Numeric_Decrease, amount);
}

IPTR Numeric::increase(LONG amount) {
    return DoMethod(object,MUIM_Numeric_Increase, amount);
}

IPTR Numeric::scaleToValue(LONG scalemin, LONG scalemax, LONG scale) {
    return DoMethod(object,MUIM_Numeric_ScaleToValue, scalemin, scalemax, scale);
}

IPTR Numeric::setDefault() {
    return DoMethod(object,MUIM_Numeric_SetDefault);
}

IPTR Numeric::stringify(LONG value) {
    return DoMethod(object,MUIM_Numeric_Stringify, value);
}

IPTR Numeric::valueToScale(LONG scalemin, LONG scalemax) {
    return DoMethod(object,MUIM_Numeric_ValueToScale, scalemin, scalemax);
}

//Numeric::operator LONG() {
//    return Value();
//}

Numeric::operator int () {
    return (int) value();
}
//
//Numeric & Numeric::operator=(LONG value) {
//    SetValue(value);
//    return *this;
//}

Numeric & Numeric::operator=(int value) {
    setValue((LONG) value);
    return *this;
}

Numeric Numeric::operator++() // prefix
{
    increase(1);
    return *this;
}

Numeric Numeric::operator++(int dummy) // postfix
{
    increase(1);
    return *this;
}

Numeric & Numeric::operator+=(LONG value) {
    increase(value);
    return *this;
}

Numeric Numeric::operator--() // prefix
{
    decrease(1);
    return *this;
}

Numeric Numeric::operator--(int dummy) // postfix
{
    decrease(1);
    return *this;
}

Numeric & Numeric::operator-=(LONG value) {
    decrease(value);
    return *this;
}

Numeric::Numeric()
: Area() {
}
