#ifndef HTMLTEXT_H
#define HTMLTEXT_H

#include "CMUI_Virtgroup.h"
#include <mui/HTMLtext_mcc.h>

class CMUI_HTMLtext : public CMUI_Virtgroup {
protected:
    CMUI_HTMLtext();

public:
    CMUI_HTMLtext(Object * obj);
    CMUI_HTMLtext & operator=(Object * obj);
    char * Block() const;
    STRPTR Contents() const;
    void SetContents(STRPTR value);
    BOOL MDoubleClick() const;
    void SetLoadImages(BOOL value);
    void SetOpenURLHook(struct Hook * value);
    STRPTR Path() const;
    void SetPath(STRPTR value);
    STRPTR Title() const;
    STRPTR URL() const;
    void SetURL(STRPTR value);
    
};


#endif /* HTMLTEXT_H */

