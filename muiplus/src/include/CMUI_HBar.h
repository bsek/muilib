#ifndef CMUI_HBAR_H
#define	CMUI_HBAR_H

#include "CMUI_Rectangle.h"


class CMUI_HBar : public CMUI_Rectangle
{
protected:
	CMUI_HBar();

public:
	CMUI_HBar(Object * obj);
	CMUI_HBar(LONG space);
	CMUI_HBar & operator = (Object * obj);
};


#endif	/* CMUI_HBAR_H */

