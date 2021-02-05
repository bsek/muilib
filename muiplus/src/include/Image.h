#ifndef IMAGE_H
#define	IMAGE_H

#include "Area.h"

class Image : public Area
{
protected:
	Image();

public:
	Image(LONG state, BOOL fontMatch, BOOL fontMatchHeight, BOOL fontMatchWidth, BOOL freeHoriz,
			BOOL freeVert, std::string spec, struct Image * oldImage, BOOL copySpec);
	Image(Object * obj);
	Image & operator = (Object * obj);

	void setState(LONG value);
	void setFontMatch(BOOL value);
	void setFontMatchHeight(BOOL value);
	void setFontMatchWidth(BOOL value);
	void setFreeHoriz(BOOL value);
	void setFreeVert(BOOL value);
	void setSpec(std::string value);
};

#endif	/* IMAGE_H */

