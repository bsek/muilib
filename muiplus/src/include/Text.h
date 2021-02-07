#ifndef TEXT_H
#define	TEXT_H

#include <string>

#include "Area.h"
#include "ZuneObject.h"

namespace Zune {
    class Text : public Area
    {
    public:
        Text(Object * obj);
        Text& operator =(Object * obj);

        operator CONST_STRPTR();
        Text& operator = (CONST_STRPTR contents);
        STRPTR contents() const;
        void setContents(std::string value);
        STRPTR preParse() const;
        void setPreParse(std::string value);

    protected:
        Text();
    };
}

#endif	/* TEXT_H */
