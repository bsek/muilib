#ifndef CTMUI_LISTVIEW_H
#define CTMUI_LISTVIEW_H

#include "CTMUI_List.h"

template <class Type>
class CTMUI_Listview : public CTMUI_List<Type> {
protected:
    CTMUI_Listview(void);

public:
    CTMUI_Listview(Object * obj);
    CTMUI_Listview & operator=(Object * obj);

    LONG activePage(void) const;
    void setActivePage(LONG value);
    struct List * childList(void) const;
    void setColumns(LONG value);
    LONG horizSpacing(void) const;
    void setHorizSpacing(LONG value);
    void setRows(LONG value);
    void setSpacing(LONG value);
    LONG vertSpacing(void) const;
    void setVertSpacing(LONG value);
    IPTR exitChange(void);
    IPTR initChange(void);
    IPTR sort(std::vector<Object *> objects);
    LONG clickColumn(void) const;
    LONG defClickColumn(void) const;
    void setDefClickColumn(LONG value);
    BOOL mDoubleClick(void) const;
    LONG dragType(void) const;
    void setDragType(LONG value);
    Object * list(void) const;
    BOOL selectChange(void) const;
};


#endif /* CTMUI_LISTVIEW_H */
