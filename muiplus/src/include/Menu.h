#ifndef MENU_H
#define	MENU_H

#include "Family.h"

class Menu : public Family {
public:
    Menu(std::string title, BOOL copyStrings, BOOL menuEnable);
    Menu(Object * obj);
    Menu & operator=(Object * obj);

    BOOL enabled() const;
    void setEnabled(BOOL value);
    STRPTR title() const;
    void setTitle(STRPTR value);

protected:
    Menu();
};


#endif	/* MENU_H */

