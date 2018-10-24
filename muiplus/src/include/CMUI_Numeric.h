#ifndef CMUI_NUMERIC_H
#define	CMUI_NUMERIC_H

#include "CMUI_Area.h"

class CMUI_Numeric : public CMUI_Area {
public:
    operator int();
    CMUI_Numeric & operator=(const int value);
    CMUI_Numeric operator++();
    CMUI_Numeric operator++(int dummy);
    CMUI_Numeric & operator+=(LONG value);
    CMUI_Numeric operator--();
    CMUI_Numeric operator--(int dummy);
    CMUI_Numeric & operator-=(LONG value);


    BOOL checkAllSizes() const;
    void setCheckAllSizes(BOOL value);
    LONG getDefault() const;
    void setDefault(LONG value);
    STRPTR format() const;
    void setFormat(STRPTR value);
    LONG max() const;
    void setMax(LONG value);
    LONG min() const;
    void setMin(LONG value);
    BOOL reverse() const;
    void setReverse(BOOL value);
    BOOL revLeftRight() const;
    void setRevLeftRight(BOOL value);
    BOOL revUpDown() const;
    void setRevUpDown(BOOL value);
    LONG value() const;
    void setValue(LONG value);
    IPTR decrease(LONG amount);
    IPTR increase(LONG amount);
    IPTR scaleToValue(LONG scalemin, LONG scalemax, LONG scale);
    IPTR setDefault();
    IPTR stringify(LONG value);
    IPTR valueToScale(LONG scalemin, LONG scalemax);
protected:
    CMUI_Numeric();

};

#endif	/* CMUI_NUMERIC_H */

