#ifndef CMUI_IMAGE_H
#define	CMUI_IMAGE_H

#include "CMUI_Area.h"

class CMUI_Image : public CMUI_Area
{
protected:
	CMUI_Image();

public:
	CMUI_Image(LONG state, BOOL fontMatch, BOOL fontMatchHeight, BOOL fontMatchWidth, BOOL freeHoriz,
			BOOL freeVert, std::string spec, struct Image * oldImage, BOOL copySpec);
	CMUI_Image(Object * obj);
	CMUI_Image & operator = (Object * obj);

	void setState(LONG value);
	void setFontMatch(BOOL value);
	void setFontMatchHeight(BOOL value);
	void setFontMatchWidth(BOOL value);
	void setFreeHoriz(BOOL value);
	void setFreeVert(BOOL value);
	void setSpec(std::string value);
};

#endif	/* CMUI_IMAGE_H */

