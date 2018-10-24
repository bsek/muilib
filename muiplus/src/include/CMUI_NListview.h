#ifndef CMUI_NLISTVIEW_H
#define CMUI_NLISTVIEW_H

#include "CMUI_NList.h"
#include <mui/NListview_mcc.h>

class CMUI_NListview : public CMUI_NList {
public:
    CMUI_NListview(Object * obj);
    CMUI_NListview & operator=(Object * obj);

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
    Object * horizScrollBar() const;
    void setHorizScrollBar(Object *value);
    Object * nList() const;
    Object * vertScrollBar() const;
    void setVertScrollBar(Object *value);

protected:
    CMUI_NListview();
};


#endif /* CMUI_NLISTVIEW_H */

