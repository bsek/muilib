#ifndef CMUI_TEXT_H
#define	CMUI_TEXT_H

#include <string>

#include "CMUI_Area.h"

class CMUI_Text : public CMUI_Area
{
public:
	CMUI_Text(Object * obj);
	CMUI_Text& operator =(Object * obj);

	operator const char *();
	CMUI_Text& operator = (const char *contents);
	STRPTR contents() const;
	void setContents(std::string value);
	STRPTR preParse() const;
	void setPreParse(std::string value);

protected:
	CMUI_Text();
};

#endif	/* CMUI_TEXT_H */
