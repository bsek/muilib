#ifndef MENUITEM_H
#define    MENUITEM_H

#include "Family.h"
#include "RootClass.h"

namespace Zune {
    class Menuitem : public Zune::Family {
    public:
        Menuitem();

        Menuitem(Object *obj);

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

        void setShortcut(std::string &value);

        std::string title() const;

        void setTitle(std::string &value);

        BOOL toggle() const;

        void setToggle(BOOL value);

        struct MenuItem *trigger() const;

        struct NewMenu *newMenu() const;

        void build() override;
    };
}


#endif    /* MENUITEM_H */

