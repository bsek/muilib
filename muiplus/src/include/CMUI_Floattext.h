#ifndef CMUI_FLOATTEXT_H
#define	CMUI_FLOATTEXT_H

#include "CMUI_List.h"

class CMUI_Floattext : public CMUI_List {
protected:
    CMUI_Floattext();

public:
    CMUI_Floattext(std::string text, std::string skipChars, LONG tabSize, BOOL justify);
    CMUI_Floattext(Object * obj);
    CMUI_Floattext & operator=(Object * obj);

    BOOL justify() const;
    void setJustify(BOOL value);
    void setSkipChars(STRPTR value);
    void setTabSize(LONG value);
    std::string text() const;
    void setText(std::string value);
};

#endif	/* CMUI_FLOATTEXT_H */

