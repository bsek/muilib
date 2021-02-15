#ifndef GROUP_H
#define    GROUP_H

#include "RootClass.h"
#include "../../zuneobject/RootObject.h"
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

        void addObject(ZuneObject::RootObject &obj);

        void remObject(ZuneObject::RootObject &obj);

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

        IPTR activePage() const;

        void setActivePage(IPTR page);

        void setForward(BOOL forward);

        void setRows(IPTR rows);

        IPTR childList() const;

        IPTR childCount() const;

        void setColumns(LONG value);

        LONG horizSpacing() const;

        void setHorizSpacing(LONG value);

        void setRows(LONG value);

        void setSpacing(LONG value);

        LONG vertSpacing() const;

        void setVertSpacing(LONG value);
    };
}

#endif    /* GROUP_H */

