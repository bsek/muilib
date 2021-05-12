#include "include/Numeric.h"

BOOL Zune::Numeric::checkAllSizes() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Numeric_CheckAllSizes));
}

void Zune::Numeric::setCheckAllSizes(BOOL value) {
    setOrStore(MUIA_Numeric_CheckAllSizes, static_cast<IPTR>(value));
}

LONG Zune::Numeric::getDefault() const {
    return static_cast<LONG>(mGetAttr(MUIA_Numeric_Default));
}

void Zune::Numeric::setDefault(LONG value) {
    setOrStore(MUIA_Numeric_Default, static_cast<IPTR>(value));
}

STRPTR Zune::Numeric::format() const {
    return (STRPTR) (mGetAttr(MUIA_Numeric_Format));
}

void Zune::Numeric::setFormat(std::string value) {
    setOrStore(MUIA_Numeric_Format, reinterpret_cast<IPTR>(value.c_str()));
}

LONG Zune::Numeric::max() const {
    return static_cast<LONG>(mGetAttr(MUIA_Numeric_Max));
}

void Zune::Numeric::setMax(LONG value) {
    setOrStore(MUIA_Numeric_Max, static_cast<IPTR>(value));
}

LONG Zune::Numeric::min() const {
    return static_cast<LONG>(mGetAttr(MUIA_Numeric_Min));
}

void Zune::Numeric::setMin(LONG value) {
    setOrStore(MUIA_Numeric_Min, static_cast<IPTR>(value));
}

BOOL Zune::Numeric::reverse() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Numeric_Reverse));
}

void Zune::Numeric::setReverse(BOOL value) {
    setOrStore(MUIA_Numeric_Reverse, static_cast<IPTR>(value));
}

BOOL Zune::Numeric::revLeftRight() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Numeric_RevLeftRight));
}

void Zune::Numeric::setRevLeftRight(BOOL value) {
    setOrStore(MUIA_Numeric_RevLeftRight, static_cast<IPTR>(value));
}

BOOL Zune::Numeric::revUpDown() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Numeric_RevUpDown));
}

void Zune::Numeric::setRevUpDown(BOOL value) {
    setOrStore(MUIA_Numeric_RevUpDown, static_cast<IPTR>(value));
}

LONG Zune::Numeric::value() const {
    return static_cast<LONG>(mGetAttr(MUIA_Numeric_Value));
}

void Zune::Numeric::setValue(LONG value) {
    setOrStore(MUIA_Numeric_Value, static_cast<IPTR>(value));
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

Zune::Numeric::operator int() {
    return (int) value();
}

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

Zune::Numeric::Numeric() = default;
