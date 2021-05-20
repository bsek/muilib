#ifndef GROUP_H
#define    GROUP_H

#include "RootClass.h"
#include "Area.h"

namespace Zune {

    enum GroupDirection {
        Horizontal,
        Vertical
    };

    class Group : public Zune::Area {
    public:
        Group();

        void addObject(Object *obj);

        void remObject(Object *obj);

        void addObject(RootClass &obj);

        void remObject(RootClass &obj);

        IPTR exitChange();

        IPTR initChange();

        IPTR sort(std::vector<Object *> obj);

        Class *registerClass() override;

        /* Only init */

        void setChild(Object *child);

        void setHoriz(BOOL horiz);

        void setPageMode(BOOL pageMode);

        void setSameHeight(BOOL sameHeight);

        void setSameSize(BOOL sameSize);

        void setSameWidth(BOOL sameWidth);

        void setLayoutHook(struct Hook* hook);

        /* Attributes with setters and getters */

        LONG activePage() const;

        void setActivePage(LONG page);

        void setForward(BOOL forward);

        List * childList() const;

        void setColumns(LONG value);

        LONG horizSpacing() const;

        void setHorizSpacing(LONG value);

        void setRows(LONG value);

        void setSpacing(LONG value);

        LONG vertSpacing() const;

        void setVertSpacing(LONG value);

        void build() override;
    };
}

#endif    /* GROUP_H */

