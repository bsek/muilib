#ifndef NLIST_H
#define NLIST_H

#include "NList.h"
#include "Area.h"
#include "RootClass.h"

namespace Zune {
    template<typename T>
    class NList : public Area {
    public:
        NList();

        NList(Object *obj);

        void addHead(T *entry);

        void addHead(T &entry);

        void addTail(T *entry);

        void addTail(T &entry);

        void insertTop(T *entry);

        void insertTop(T &entry);

        void insertBottom(T *entry);

        void insertBottom(T &entry);

        void insertSorted(T *entry);

        void insertSorted(T &entry);

        void insertActive(T *entry);

        void insertActive(T &entry);

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

        void setFormat(std::string &value);

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

        void setPrivateData(ULONG value);

        LONG propEntries() const;

        LONG propFirst() const;

        void setPropFirst(LONG value);

        LONG propVisible() const;

        void setQuiet(BOOL value);

        BOOL showDropMarks() const;

        void setShowDropMarks(BOOL value);

        std::string skipChars() const;

        void setSkipChars(std::string &value);

        IPTR tabSize() const;

        void setTabSize(ULONG value);

        std::string title() const;

        void setTitle(std::string &value);

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

        IPTR copyToClip(LONG pos, ULONG clipnum);

        IPTR createImage(Object *imgobj, ULONG flags);

        IPTR deleteImage(APTR listimg);

        IPTR exchange(LONG pos1, LONG pos2);

        IPTR getEntry(LONG pos, T **entry);

        IPTR getEntryInfo(struct MUI_NList_GetEntryInfo *res);

        IPTR insert(T **entries, LONG count, LONG pos);

        IPTR insertSingle(T *entry, LONG pos);

        IPTR insertSingleWrap();

        IPTR insertWrap(T **entries);

        IPTR jump(LONG pos);

        IPTR move(LONG from, LONG to);

        IPTR nextSelected(LONG *pos);

        IPTR redraw(LONG pos);

        IPTR remove(LONG pos);

        IPTR replaceSingle(LONG pos, LONG seltype, LONG *state);

        IPTR sort();

        IPTR testPos(LONG x, LONG y, struct MUI_NList_TestPos_Result *res);

        IPTR useImage(Object *obj, ULONG imgnum, ULONG flags);

        void setAdjustHeight(BOOL doAdjust);

        void setAdjustWidth(BOOL doAdjust);

        void setMultiSelect(LONG multiselect);

        void setPool(APTR pool);

        void setPoolPudleSize(ULONG size);

        void setPoolThreshSize(ULONG size);

        void setSourceArray(APTR array);

        void setSourceString(std::string& sourceString);

        void setSourceInsert(struct MUIP_NList_InsertWrap *insert);

        void build() override;
    };
}


#endif

