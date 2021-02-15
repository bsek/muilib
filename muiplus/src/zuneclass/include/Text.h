#ifndef TEXT_H
#define    TEXT_H

#include <string>

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Text : public Area {
    public:
        Text();

        operator CONST_STRPTR();

        Text &operator=(CONST_STRPTR contents);

        STRPTR contents() const;

        void setContents(std::string value);

        STRPTR preParse() const;

        void setPreParse(std::string value);

        void createButton(std::string label);
    };
}

#endif    /* TEXT_H */
