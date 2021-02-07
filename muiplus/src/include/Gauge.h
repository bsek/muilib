#ifndef GAUGE_H
#define    GAUGE_H

#include "Area.h"
#include "ZuneObject.h"

namespace Zune {
    class Gauge : public Area {
    public:
        Gauge(LONG current, ULONG divide, BOOL horiz, std::string infoText, LONG max);

        Gauge(Object *obj);

        Gauge &operator=(Object *obj);

        LONG current() const;

        void setCurrent(LONG value);

        BOOL divide() const;

        void setDivide(BOOL value);

        STRPTR infoText() const;

        void setInfoText(STRPTR value);

        LONG max() const;

        void setMax(LONG value);

    protected:
        Gauge();
    };
}

#endif    /* GAUGE_H */

