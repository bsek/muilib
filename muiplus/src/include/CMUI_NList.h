#ifndef CMUI_NLIST_H
#define CMUI_NLIST_H

#include <mui/NList_mcc.h>
#include "CMUI_Area.h"

class CMUI_NList : public CMUI_Area {
public:
    CMUI_NList(Object * obj);
    CMUI_NList & operator=(Object * obj);
    IPTR operator[](LONG pos);
    LONG length() const;
    IPTR numSelected();

    void addHead(IPTR entry);
    void addTail(IPTR entry);
    void insertTop(IPTR entry);
    void insertBottom(IPTR entry);
    void insertSorted(IPTR entry);
    void insertActive(IPTR entry);
    LONG active() const;
    void setActive(LONG value);
    void setAutoCopyToClip(BOOL value);
    BOOL autoVisible() const;
    void setAutoVisible(BOOL value);
    LONG clickColumn() const;
    void setCompareHook(struct Hook *value);
    void setConstructHook(struct Hook *value);
    void setCopyColumnToClipHook(struct Hook *value);
    void setCopyEntryToClipHook(struct Hook *value);
    void setDefaultObjectOnClick(BOOL value);
    LONG defClickColumn() const;
    void setDefClickColumn(LONG value);
    void setDestructHook(struct Hook *value);
    void setDisplayHook(struct Hook *value);
    void setDisplayRecall(BOOL value);
    BOOL mDoubleClick() const;
    BOOL dragSortable() const;
    void setDragSortable(BOOL value);
    LONG dragType() const;
    void setDragType(LONG value);
    LONG dropMark() const;
    LONG entries() const;
    BOOL entryValueDependent() const;
    void setEntryValueDependent(BOOL value);
    LONG first() const;
    void setFirst(LONG value);
    std::string format() const;
    void setFormat(std::string value);
    LONG horizDeltaFactor() const;
    LONG horizEntries() const;
    LONG horizFirst() const;
    void setHorizFirst(LONG value);
    LONG horizVisible() const;
    BOOL input() const;
    void setInput(BOOL value);
    LONG insertPosition() const;
    void setKeepActive(Object *value);
    void setMakeActive(Object *value);
    void setMinLineHeight(LONG value);
    BOOL multiClick() const;
    void setMultiTestHook(struct Hook *value);
    IPTR privateData() const;
    void setPrivateData(IPTR value);
    LONG propEntries() const;
    LONG propFirst() const;
    void setPropFirst(LONG value);
    LONG propVisible() const;
    void setQuiet(BOOL value);
    BOOL showDropMarks() const;
    void setShowDropMarks(BOOL value);
    std::string skipChars() const;
    void setSkipChars(std::string value);
    IPTR tabSize() const;
    void setTabSize(IPTR value);
    std::string title() const;
    void setTitle(std::string value);
    BOOL titleSeparator() const;
    void setTitleSeparator(BOOL value);
    void setTypeSelect(LONG value);
    LONG vertDeltaFactor() const;
    LONG visible() const;
    LONG titleBackground() const;
    void setTitleBackground(LONG value);
    LONG titlePen() const;
    void setTitlePen(LONG value);
    IPTR clear();
    IPTR copyToClip(LONG pos, IPTR clipnum);
    IPTR createImage(Object *imgobj, IPTR flags);
    IPTR deleteImage(IPTR listimg);
    IPTR exchange(LONG pos1, LONG pos2);
    IPTR getEntry(LONG pos, IPTR *entry);
    IPTR getEntryInfo(struct MUI_NList_GetEntryInfo *res);
    IPTR insert(IPTR * entries, LONG count, LONG pos);
    IPTR insertSingle(IPTR entry, LONG pos);
    IPTR insertSingleWrap();
    IPTR insertWrap(IPTR *entries);
    IPTR jump(LONG pos);
    IPTR move(LONG from, LONG to);
    IPTR nextSelected(LONG *pos);
    IPTR redraw(LONG pos);
    IPTR remove(LONG pos);
    IPTR replaceSingle(LONG pos, LONG seltype, LONG *state);
    IPTR sort();
    IPTR testPos(LONG x, LONG y, struct MUI_NList_TestPos_Result *res);
    IPTR useImage(Object *obj, IPTR imgnum, IPTR flags);

protected:
    CMUI_NList();
};


#endif /* CMUI_NLIST_H */
