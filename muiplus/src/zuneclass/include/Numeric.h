#ifndef NUMERIC_H
#define    NUMERIC_H

#include "Area.h"

namespace Zune {
    class Numeric : public Area {
    public:
        operator int();

        Numeric &operator=(const int value);

        Numeric operator++();

        Numeric operator++(int dummy);

        Numeric &operator+=(LONG value);

        Numeric operator--();

        Numeric operator--(int dummy);

        Numeric &operator-=(LONG value);


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
        Numeric();

    };
}

#endif    /* NUMERIC_H */

