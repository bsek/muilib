#ifndef HTMLTEXT_H
#define HTMLTEXT_H

#include "Virtgroup.h"
#include <mui/HTMLtext_mcc.h>

class HTMLtext : public Virtgroup {
protected:
    HTMLtext();

public:
    HTMLtext(Object * obj);
    HTMLtext & operator=(Object * obj);
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

