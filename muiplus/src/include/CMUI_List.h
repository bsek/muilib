#ifndef CMUI_LIST_H
#define CMUI_LIST_H

#include "CMUI_Area.h"

class CMUI_List : public CMUI_Area {
public:
    // TODO: proper constructor
    //CMUI_List(...);
    CMUI_List(Object * obj);
    CMUI_List & operator=(Object * obj);
    IPTR operator[](LONG pos);
    LONG length() const;
    IPTR numSelected();
    void mAddHead(IPTR entry);
    void mAddTail(IPTR entry);
    void insertTop(IPTR entry);
    void insertBottom(IPTR entry);
    void insertSorted(IPTR entry);
    void insertActive(IPTR entry);

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
    void setFormat(std::string value);
    LONG insertPosition() const;
    void setMultiTestHook(struct Hook *value);
    void setQuiet(BOOL value);
    BOOL showDropMarks() const;
    void setShowDropMarks(BOOL value);
    char * title() const;
    void setTitle(std::string value);
    LONG visible() const;
    IPTR clear();
    IPTR createImage(Object *obj, IPTR flags);
    IPTR deleteImage(IPTR listimg);
    IPTR exchange(LONG pos1, LONG pos2);
    IPTR getEntry(LONG pos, IPTR *entry);
    IPTR mInsert(IPTR *entries, LONG count, LONG pos);
    IPTR insertSingle(IPTR entry, LONG pos);
    IPTR insertArray(char **entries);
    IPTR jump(LONG pos);
    IPTR move(LONG from, LONG to);
    IPTR nextSelected(LONG *pos);
    IPTR redraw(LONG pos);
    IPTR mRemove(LONG pos);
    IPTR select(LONG pos, LONG seltype, LONG *state);
    IPTR sort();
    IPTR testPos(LONG x, LONG y, struct MUI_List_TestPos_Result *res);

protected:
    CMUI_List();
};

#endif /* CMUI_LIST_H */

