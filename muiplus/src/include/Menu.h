#ifndef MENU_H
#define    MENU_H

#include "Family.h"
#include "RootClass.h"

namespace Zune {
    class Menu : public Zune::Family {
    public:
        Menu();

        Menu(Object *obj);

        BOOL enabled() const;

        void setEnabled(BOOL value);

        std::string title() const;

        void setTitle(std::string& value);

        void setTitle(STRPTR value);

        void build() override;
    };
}


#endif    /* MENU_H */

