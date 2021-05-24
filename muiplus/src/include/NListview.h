#ifndef NLISTVIEW_H
#define NLISTVIEW_H

#include <mui/NListview_mcc.h>
#include "NList.h"
#include "RootClass.h"

namespace Zune {
    template<typename T>
    class NListview : public NList<T> {
    public:
        NListview();

        NListview(const Object* obj);

        LONG activePage() const;

        void setActivePage(LONG value);

        IPTR childList() const;

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

        void setNList(const Object *obj);

        Object *vertScrollBar() const;

        void setVertScrollBar(Object *value);

        void build() override;
    };
}


#endif

