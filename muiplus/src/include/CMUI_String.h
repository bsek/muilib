#ifndef CMUI_STRING_H
#define CMUI_STRING_H

#include "CMUI_Gadget.h"

class CMUI_String : public CMUI_Gadget {
protected:
    CMUI_String();

public:
    CMUI_String(Object * obj);
    CMUI_String(std::string label, LONG maxlen);
    CMUI_String & operator=(Object * obj);

    operator const char * ();
    operator IPTR();
    CMUI_String & operator=(const char *contents);
    CMUI_String & operator=(IPTR contents);

    std::string accept() const;
    void setAccept(std::string value);
    std::string acknowledge() const;
    BOOL advanceOnCR() const;
    void setAdvanceOnCR(BOOL value);
    Object * attachedList() const;
    void setAttachedList(Object * value);
    LONG bufferPos() const;
    void setBufferPos(LONG value);
    std::string contents() const;
    void setContents(std::string value);
    LONG displayPos() const;
    void setDisplayPos(LONG value);
    struct Hook * editHook() const;
    void mSetEditHook(struct Hook * value);
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

#endif /* CMUI_STRING_H */

