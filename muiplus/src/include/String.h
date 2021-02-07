#ifndef STRING_H
#define STRING_H

#include "Area.h"
#include "ZuneObject.h"

namespace Zune {
    class String : public Zune::Area {
    protected:
        String();

    public:
        String(Object *obj);

        String(std::string label, LONG maxlen);

        String &operator=(Object *obj);

        operator const char *();

        operator IPTR();

        String &operator=(const char *contents);

        String &operator=(IPTR contents);

        std::string accept() const;

        void setAccept(std::string value);

        std::string acknowledge() const;

        BOOL advanceOnCR() const;

        void setAdvanceOnCR(BOOL value);

        Object *attachedList() const;

        void setAttachedList(Object *value);

        LONG bufferPos() const;

        void setBufferPos(LONG value);

        std::string contents() const;

        void setContents(std::string value);

        LONG displayPos() const;

        void setDisplayPos(LONG value);

        struct Hook *editHook() const;

        void mSetEditHook(struct Hook *value);

        LONG format() const;

        IPTR integer() const;

        void setInteger(IPTR value);

        BOOL lonelyEditHook() const;

        void setLonelyEditHook(BOOL value);

        LONG maxLen() const;

        std::string reject() const;

        void setReject(std::string value);

        BOOL secret() const;
    };
}

#endif /* STRING_H */

