#ifndef CMUI_GROUP_H
#define	CMUI_GROUP_H

#include "CMUI_Area.h"

class CMUI_Group : public CMUI_Area {
protected:
    CMUI_Group();
public:
    CMUI_Group(Object * obj);

    CMUI_Group & operator=(Object * obj);

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



#endif	/* CMUI_GROUP_H */

