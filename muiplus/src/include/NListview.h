#ifndef CTMUI_NLISTVIEW_H
#define CTMUI_NLISTVIEW_H

#include <mui/NListview_mcc.h>
#include "NList.h"
#include "ZuneList.h"
#include "ZuneObject.h"

namespace Zune {
    template<typename Type>
    class NListview : public Zune::NList<Type> {
    public:
        NListview &operator=(Object *obj);

        LONG ActivePage() const;

        void SetActivePage(LONG value);

        IPTR ChildList() const;

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

        Object *horizScrollBar() const;

        void setHorizScrollBar(Object *value);

        Object *nList() const;

        Object *vertScrollBar() const;

        void setVertScrollBar(Object *value);
    };
}


#endif

