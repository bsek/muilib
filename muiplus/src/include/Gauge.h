#ifndef GAUGE_H
#define    GAUGE_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Gauge : public Area {
    public:
        Gauge();

        Gauge(Object *obj);

        LONG current() const;

        void setCurrent(LONG value);

        LONG divide() const;

        void setDivide(LONG value);

        STRPTR infoText() const;

        void setInfoText(std::string& value);

        void setDupInfoText(BOOL doDup);

        LONG max() const;

        void setMax(LONG value);

        void setHoriz(BOOL horiz);

        void build() override;
    };
}

#endif    /* GAUGE_H */

