#ifndef STRING_H
#define STRING_H

#include "Area.h"
#include "RootClass.h"

namespace Zune {
    class String : public Zune::Area {
    public:
        String();

        explicit String(Object *obj);

        std::string accept() const;

        void setAccept(std::string& value);

        std::string acknowledge() const;

        BOOL advanceOnCR() const;

        void setAdvanceOnCR(BOOL value);

        Object *attachedList() const;

        void setAttachedList(Object *value);

        LONG bufferPos() const;

        void setBufferPos(LONG value);

        std::string contents() const;

        void setContents(std::string& value);

        LONG displayPos() const;

        void setDisplayPos(LONG value);

        struct Hook *editHook() const;

        void mSetEditHook(struct Hook *value);

        LONG format() const;

        ULONG integer() const;

        void setInteger(ULONG value);

        BOOL lonelyEditHook() const;

        void setLonelyEditHook(BOOL value);

        LONG maxLen() const;

        std::string reject() const;

        void setReject(std::string& value);

        BOOL secret() const;

        void setSecret(BOOL value);

        void setFormat(LONG value);

        void setMaxLen(LONG value);

        void build() override;
    };
}

#endif /* STRING_H */

