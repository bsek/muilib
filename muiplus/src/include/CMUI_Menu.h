#ifndef CMUI_MENU_H
#define	CMUI_MENU_H

#include "CMUI_Family.h"

class CMUI_Menu : public CMUI_Family {
public:
    CMUI_Menu(std::string title, BOOL copyStrings, BOOL menuEnable);
    CMUI_Menu(Object * obj);
    CMUI_Menu & operator=(Object * obj);

    BOOL enabled() const;
    void setEnabled(BOOL value);
    STRPTR title() const;
    void setTitle(STRPTR value);

protected:
    CMUI_Menu();
};


#endif	/* CMUI_MENU_H */

