#ifndef TEXT_H
#define    TEXT_H

#include <string>

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class Text : public Area {
    public:
        Text();

        Text(Object *obj);

        std::string contents() const;

        void setContents(std::string& value);

        void setHiChar(BYTE character);

        void setHiCharIdx(BYTE character);

        void setMax(BOOL value);

        void setMin(BOOL value);

        void setVMax(BOOL value);

        std::string preParse() const;

        void setPreParse(std::string& value);

        void build() override;
    };
}

#endif    /* TEXT_H */
