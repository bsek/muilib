#ifndef CMUI_MENUITEM_H
#define	CMUI_MENUITEM_H

#include "CMUI_Family.h"

class CMUI_Menuitem : public CMUI_Family {
public:
    CMUI_Menuitem(Object * obj);
    CMUI_Menuitem(std::string label, std::string shortcut);
    CMUI_Menuitem & operator=(Object * obj);

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
    CMUI_Menuitem();
};


#endif	/* CMUI_MENUITEM_H */

