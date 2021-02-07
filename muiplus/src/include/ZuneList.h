#ifndef CTMUI_LIST_H
#define CTMUI_LIST_H

#include "Area.h"
#include "ZuneObject.h"

namespace Zune {
    template<typename Type>
    class ZuneList : public Zune::Area {
    protected:
        ZuneList();

    public:
        ZuneList(Object *obj);

        ZuneList &operator=(Object *obj);

        Type &operator[](LONG pos);

        LONG length() const;

        IPTR numSelected();

        void insertTop(Type *entry);

        void insertTop(Type &entry);

        void insertBottom(Type *entry);

        void insertBottom(Type &entry);

        void insertSorted(Type *entry);

        void insertSorted(Type &entry);

        void insertActive(Type *entry);

        void insertActive(Type &entry);

        void insertSingle(Type &entry, LONG pos);

        LONG active() const;

        void setActive(LONG value);

        BOOL autoVisible() const;

        void setAutoVisible(BOOL value);

        void setCompareHook(struct Hook *value);

        void setConstructHook(struct Hook *value);

        void setDestructHook(struct Hook *value);

        void setDisplayHook(struct Hook *value);

        BOOL dragSortable() const;

        void setDragSortable(BOOL value);

        LONG dropMark() const;

        LONG entries() const;

        LONG first() const;

        std::string format() const;

        void setFormat(std::string &value);

        LONG insertPosition() const;

        void setMultiTestHook(struct Hook *value);

        void setQuiet(BOOL value);

        BOOL showDropMarks() const;

        void setShowDropMarks(BOOL value);

        std::string title() const;

        void setTitle(std::string &value);

        LONG visible() const;

        IPTR clear();

        IPTR createImage(Object *obj, IPTR flags);

        IPTR deleteImage(IPTR listimg);

        IPTR exchange(LONG pos1, LONG pos2);

        IPTR getEntry(LONG pos, Type **entry);

        IPTR insert(Type **entries, LONG count, LONG pos);

        IPTR insertSingle(Type *entry, LONG pos);

        IPTR jump(LONG pos);

        IPTR move(LONG from, LONG to);

        IPTR nextSelected(LONG *pos);

        IPTR redraw(LONG pos);

        IPTR remove(LONG pos);

        IPTR select(LONG pos, LONG seltype, LONG *state);

        IPTR sort();

        IPTR testPos(LONG x, LONG y, struct MUI_List_TestPos_Result *res);
    };
}

#endif /* CTMUI_LIST_H */

