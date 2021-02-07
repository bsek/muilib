#ifndef FLOATTEXT_H
#define	FLOATTEXT_H

#include "ZuneList.h"
#include "ZuneObject.h"

namespace Zune {
    class Floattext : public ZuneList<std::string> {
    protected:
        Floattext();

    public:
        Floattext(std::string text, std::string skipChars, LONG tabSize, BOOL justify);
        Floattext(Object * obj);
        Floattext & operator=(Object * obj);

        BOOL justify() const;
        void setJustify(BOOL value);
        void setSkipChars(std::string value);
        void setTabSize(LONG value);
        std::string text() const;
        void setText(std::string value);
    };
}

#endif	/* FLOATTEXT_H */

