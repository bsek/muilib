#ifndef FLOATTEXT_H
#define	FLOATTEXT_H

#include "List.h"

class Floattext : public List {
protected:
    Floattext();

public:
    Floattext(std::string text, std::string skipChars, LONG tabSize, BOOL justify);
    Floattext(Object * obj);
    Floattext & operator=(Object * obj);

    BOOL justify() const;
    void setJustify(BOOL value);
    void setSkipChars(STRPTR value);
    void setTabSize(LONG value);
    std::string text() const;
    void setText(std::string value);
};

#endif	/* FLOATTEXT_H */

