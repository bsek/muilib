#ifndef CTMUI_LISTVIEW_H
#define CTMUI_LISTVIEW_H

#include "Group.h"
#include "RootClass.h"

namespace Zune {
    class Listview : public Zune::Group {
    public:
        Listview();

        Listview(Object *obj);

        LONG clickColumn(void) const;

        LONG defClickColumn() const;

        void setDefClickColumn(LONG value);

        void setDoubleClick(BOOL doubleClick);

        BOOL doubleClick() const;

        LONG dragType() const;

        void setDragType(LONG value);

        void setInput(BOOL input);

        void setMultiSelect(LONG multiselect);

        void setScrollerPos(BOOL scrollerPos);

        Object *list() const;

        void setList(Object* obj);

        BOOL selectChange() const;

        void build() override;
    };
}


#endif /* CTMUI_LISTVIEW_H */

