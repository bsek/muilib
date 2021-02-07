#ifndef GROUP_H
#define	GROUP_H

#include "ZuneObject.h"
#include "Area.h"

namespace Zune {

    enum GroupDirection {
        Horizontal,
        Vertical
    };

class Group : public Zune::Area {
public:
        Group(Object * obj);
        Group(GroupDirection direction);
        Group & operator=(Object * obj);

        void addObject(Object *obj);
        void remObject(Object *obj);

        LONG activePage() const;
        void setActivePage(LONG value);
        IPTR childList() const;
        void setColumns(LONG value);
        LONG horizSpacing() const;
        void setHorizSpacing(LONG value);
        void setRows(LONG value);
        void setSpacing(LONG value);
        LONG vertSpacing() const;
        void setVertSpacing(LONG value);
        IPTR exitChange();
        IPTR initChange();
        IPTR sort(std::vector<Object *> obj);

        Class *registerClass() override;

    Group();
};
}


#endif	/* GROUP_H */

