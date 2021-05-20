#ifndef FLOATTEXT_H
#define    FLOATTEXT_H

#include "List.h"
#include "RootClass.h"

namespace Zune {
    class Floattext : public List<std::string> {
    public:
        Floattext();

        Floattext(Object *obj);

        BOOL justify() const;

        void setJustify(BOOL value);

        void setSkipChars(std::string &value);

        void setTabSize(LONG value);

        std::string text() const;

        void setText(std::string &value);

        void build() override;
    };
}

#endif    /* FLOATTEXT_H */

