#ifndef CMUI_LISTVIEW_H
#define	CMUI_LISTVIEW_H

#include "CMUI_List.h"

class CMUI_Listview : public CMUI_List {
public:
    CMUI_Listview(LONG defClickColumn, BOOL dblClick, LONG dragType,
            BOOL input, Object * list, LONG multiSelect, BOOL scrollerPos);
    CMUI_Listview(Object * obj);
    CMUI_Listview & operator=(Object * obj);

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
    IPTR sort(std::initializer_list<Object> obj);
    LONG clickColumn() const;
    LONG defClickColumn() const;
    void setDefClickColumn(LONG value);
    BOOL mDoubleClick() const;
    LONG dragType() const;
    void setDragType(LONG value);
    Object * list() const;
    BOOL selectChange() const;
protected:
    CMUI_Listview();
};


#endif	/* CMUI_LISTVIEW_H */

