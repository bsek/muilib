#ifndef HBAR_H
#define	HBAR_H

#include "Rectangle.h"


class HBar : public Rectangle
{
protected:
	HBar();

public:
	HBar(Object * obj);
	HBar(LONG space);
	HBar & operator = (Object * obj);
};


#endif	/* HBAR_H */

