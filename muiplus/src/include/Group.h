#ifndef GROUP_H
#define	GROUP_H

#include "Area.h"

class Group : public Area {
protected:
    Group();
public:
    Group(Object * obj);

    Group & operator=(Object * obj);

    void addObject(Object *obj);
    void remObject(Object *obj);

    LONG activePage() const;
    void setActivePage(LONG value);
    struct List * childList() const;
    void setColumns(LONG value);
    LONG horizSpacing() const;
    void setHorizSpacing(LONG value);
    void setRows(LONG value);
    void setSpacing(LONG value);
    LONG vertSpacing() const;
    void setVertSpacing(LONG value);
    IPTR exitChange();
    IPTR initChange();
    IPTR sort(std::vector<Object> obj);

    Class *registerClass() override;
};



#endif	/* GROUP_H */

