#include "include/Numeric.h"

BOOL Zune::Numeric::checkAllSizes() const {
    return (BOOL) mGetAttr(MUIA_Numeric_CheckAllSizes);
}

void Zune::Numeric::setCheckAllSizes(BOOL value) {
    setAttr(MUIA_Numeric_CheckAllSizes, (IPTR) value);
}

LONG Zune::Numeric::getDefault() const {
    return (LONG) mGetAttr(MUIA_Numeric_Default);
}

void Zune::Numeric::setDefault(LONG value) {
    setAttr(MUIA_Numeric_Default, (IPTR) value);
}

STRPTR Zune::Numeric::format() const {
    return (STRPTR) mGetAttr(MUIA_Numeric_Format);
}

void Zune::Numeric::setFormat(STRPTR value) {
    setAttr(MUIA_Numeric_Format, (IPTR) value);
}

LONG Zune::Numeric::max() const {
    return (LONG) mGetAttr(MUIA_Numeric_Max);
}

void Zune::Numeric::setMax(LONG value) {
    setAttr(MUIA_Numeric_Max, (IPTR) value);
}

LONG Zune::Numeric::min() const {
    return (LONG) mGetAttr(MUIA_Numeric_Min);
}

void Zune::Numeric::setMin(LONG value) {
    setAttr(MUIA_Numeric_Min, (IPTR) value);
}

BOOL Zune::Numeric::reverse() const {
    return (BOOL) mGetAttr(MUIA_Numeric_Reverse);
}

void Zune::Numeric::setReverse(BOOL value) {
    setAttr(MUIA_Numeric_Reverse, (IPTR) value);
}

BOOL Zune::Numeric::revLeftRight() const {
    return (BOOL) mGetAttr(MUIA_Numeric_RevLeftRight);
}

void Zune::Numeric::setRevLeftRight(BOOL value) {
    setAttr(MUIA_Numeric_RevLeftRight, (IPTR) value);
}

BOOL Zune::Numeric::revUpDown() const {
    return (BOOL) mGetAttr(MUIA_Numeric_RevUpDown);
}

void Zune::Numeric::setRevUpDown(BOOL value) {
    setAttr(MUIA_Numeric_RevUpDown, (IPTR) value);
}

LONG Zune::Numeric::value() const {
    return (LONG) mGetAttr(MUIA_Numeric_Value);
}

void Zune::Numeric::setValue(LONG value) {
    setAttr(MUIA_Numeric_Value, (IPTR) value);
}

IPTR Zune::Numeric::decrease(LONG amount) {
    return DoMethod(object, MUIM_Numeric_Decrease, amount);
}

IPTR Zune::Numeric::increase(LONG amount) {
    return DoMethod(object, MUIM_Numeric_Increase, amount);
}

IPTR Zune::Numeric::scaleToValue(LONG scalemin, LONG scalemax, LONG scale) {
    return DoMethod(object, MUIM_Numeric_ScaleToValue, scalemin, scalemax, scale);
}

IPTR Zune::Numeric::setDefault() {
    return DoMethod(object, MUIM_Numeric_SetDefault);
}

IPTR Zune::Numeric::stringify(LONG value) {
    return DoMethod(object, MUIM_Numeric_Stringify, value);
}

IPTR Zune::Numeric::valueToScale(LONG scalemin, LONG scalemax) {
    return DoMethod(object, MUIM_Numeric_ValueToScale, scalemin, scalemax);
}

//Numeric::operator LONG() {
//    return Value();
//}

Zune::Numeric::operator int() {
    return (int) value();
}
//
//Numeric & Numeric::operator=(LONG value) {
//    SetValue(value);
//    return *this;
//}

Zune::Numeric &Zune::Numeric::operator=(int value) {
    setValue((LONG) value);
    return *this;
}

Zune::Numeric Zune::Numeric::operator++() // prefix
{
    increase(1);
    return *this;
}

Zune::Numeric Zune::Numeric::operator++(int dummy) // postfix
{
    increase(1);
    return *this;
}

Zune::Numeric &Zune::Numeric::operator+=(LONG value) {
    increase(value);
    return *this;
}

Zune::Numeric Zune::Numeric::operator--() // prefix
{
    decrease(1);
    return *this;
}

Zune::Numeric Zune::Numeric::operator--(int dummy) // postfix
{
    decrease(1);
    return *this;
}

Zune::Numeric &Zune::Numeric::operator-=(LONG value) {
    decrease(value);
    return *this;
}

Zune::Numeric::Numeric()
        : Area() {
}
