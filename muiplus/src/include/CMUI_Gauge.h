#ifndef CMUI_GAUGE_H
#define	CMUI_GAUGE_H

#include "CMUI_Area.h"

class CMUI_Gauge : public CMUI_Area {
public:
    CMUI_Gauge(LONG current, ULONG divide, BOOL horiz, std::string infoText, LONG max);

    CMUI_Gauge(Object * obj);
    CMUI_Gauge & operator=(Object * obj);

    LONG current() const;
    void setCurrent(LONG value);
    BOOL divide() const;
    void setDivide(BOOL value);
    STRPTR infoText() const;
    void setInfoText(STRPTR value);
    LONG max() const;
    void setMax(LONG value);
    
protected:
    CMUI_Gauge();
};

#endif	/* CMUI_GAUGE_H */

