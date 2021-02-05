#ifndef MENUITEM_H
#define	MENUITEM_H

#include "Family.h"

class Menuitem : public Family {
public:
    Menuitem(Object * obj);
    Menuitem(std::string label, std::string shortcut);
    Menuitem & operator=(Object * obj);

    BOOL checked() const;
    void setChecked(BOOL value);
    BOOL checkit() const;
    void setCheckit(BOOL value);
    BOOL commandString() const;
    void setCommandString(BOOL value);
    BOOL enabled() const;
    void setEnabled(BOOL value);
    LONG exclude() const;
    void setExclude(LONG value);
    std::string shortcut() const;
    void setShortcut(std::string value);
    std::string title() const;
    void setTitle(std::string value);
    BOOL toggle() const;
    void setToggle(BOOL value);
    struct MenuItem * trigger() const;

protected:
    Menuitem();
};


#endif	/* MENUITEM_H */

