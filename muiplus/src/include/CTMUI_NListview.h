#ifndef CTMUI_NLISTVIEW_H
#define CTMUI_NLISTVIEW_H

#include <mui/NListview_mcc.h>
#include "CTMUI_NList.h"

template <typename Type>
class CTMUI_NListview : public CTMUI_NList<Type> {
protected:
    CTMUI_NListview();

public:
    CTMUI_NListview(bool input);
    CTMUI_NListview(Object * obj);
    CTMUI_NListview & operator=(Object * obj);
    LONG ActivePage() const;
    void SetActivePage(LONG value);
    struct List * ChildList() const;
    void setColumns(LONG value);
    LONG horizSpacing() const;
    void setHorizSpacing(LONG value);
    void setRows(LONG value);
    void s(LONG value);
    LONG vertSpacing() const;
    void setVertSpacing(LONG value);
    IPTR exitChange();
    IPTR initChange();
    IPTR sort(std::vector<Object *> params);
    Object * horizScrollBar() const;
    void setHorizScrollBar(Object *value);
    Object * nList() const;
    Object * vertScrollBar() const;
    void setVertScrollBar(Object *value);
};


#endif

