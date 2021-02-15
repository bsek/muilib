#include "include/NList.h"
#include <mui/NList_mcc.h>

template<typename Type>
Zune::NList<Type> &Zune::NList<Type>::operator=(Object *obj) {
    object = obj;
    return *this;
}

// By overloading the [] operator you can treat lists like arrays

template<typename Type>
Type &Zune::NList<Type>::operator[](LONG pos) {
    Type *entry;
    DoMethod(object, MUIM_NList_GetEntry, pos, &entry);
#ifdef MUIPP_DEBUG
    if (entry == NULL)
        _MUIPPError("Index into NList is out of range:\n"
        "Index = %d, length = %d\n",
        (int) pos,
        (int) MGetAttr(MUIA_NList_Entries));
#endif
    return *entry;
}

// This method is a convienient alternative to the Entries attribute
template<class Type>
LONG Zune::NList<Type>::length() const {
    return (LONG) mGetAttr(MUIA_NList_Entries);
}

// This method can be used to retrieve the number of selected entries
// in a list
template<class Type>
IPTR Zune::NList<Type>::numSelected() {
    IPTR numSelected;
    DoMethod(object, MUIM_NList_Select, MUIV_NList_Select_All, MUIV_NList_Select_Ask, &numSelected);
    return numSelected;
}

// These methods can be used as shortcuts for inserting objects into lists
template<class Type>
void Zune::NList<Type>::addHead(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Top);
}

template<class Type>
void Zune::NList<Type>::addHead(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, &entry, MUIV_NList_Insert_Top);
}

template<class Type>
void Zune::NList<Type>::addTail(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Bottom);
}

template<class Type>
void Zune::NList<Type>::addTail(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, &entry, MUIV_NList_Insert_Bottom);
}

template<class Type>
void Zune::NList<Type>::insertTop(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Top);
}

template<class Type>
void Zune::NList<Type>::insertTop(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, &entry, MUIV_NList_Insert_Top);
}

template<class Type>
void Zune::NList<Type>::insertBottom(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Bottom);
}

template<class Type>
void Zune::NList<Type>::insertBottom(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, &entry, MUIV_NList_Insert_Bottom);
}

template<class Type>
void Zune::NList<Type>::insertSorted(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Sorted);
}

template<class Type>
void Zune::NList<Type>::insertSorted(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, &entry, MUIV_NList_Insert_Sorted);
}

template<class Type>
void Zune::NList<Type>::insertActive(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Active);
}

template<class Type>
void Zune::NList<Type>::insertActive(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, &entry, MUIV_NList_Insert_Active);
}

template<class Type>
LONG Zune::NList<Type>::active() const {
    return (LONG) mGetAttr(MUIA_NList_Active);
}

template<class Type>
void Zune::NList<Type>::setActive(LONG value) {
    setAttr(MUIA_NList_Active, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setAutoCopyToClip(BOOL value) {
    setAttr(MUIA_NList_AutoCopyToClip, (IPTR) value);
}

template<class Type>
BOOL Zune::NList<Type>::autoVisible() const {
    return (BOOL) mGetAttr(MUIA_NList_AutoVisible);
}

template<class Type>
void Zune::NList<Type>::setAutoVisible(BOOL value) {
    setAttr(MUIA_NList_AutoVisible, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::clickColumn() const {
    return (LONG) mGetAttr(MUIA_NList_ClickColumn);
}

template<class Type>
void Zune::NList<Type>::setCompareHook(struct Hook *value) {
    setAttr(MUIA_NList_CompareHook, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setConstructHook(struct Hook *value) {
    setAttr(MUIA_NList_ConstructHook, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setCopyColumnToClipHook(struct Hook *value) {
    setAttr(MUIA_NList_CopyColumnToClipHook, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setCopyEntryToClipHook(struct Hook *value) {
    setAttr(MUIA_NList_CopyEntryToClipHook, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setDefaultObjectOnClick(BOOL value) {
    setAttr(MUIA_NList_DefaultObjectOnClick, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::defClickColumn() const {
    return (LONG) mGetAttr(MUIA_NList_DefClickColumn);
}

template<class Type>
void Zune::NList<Type>::setDefClickColumn(LONG value) {
    setAttr(MUIA_NList_DefClickColumn, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setDestructHook(struct Hook *value) {
    setAttr(MUIA_NList_DestructHook, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setDisplayHook(struct Hook *value) {
    setAttr(MUIA_NList_DisplayHook, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setDisplayRecall(BOOL value) {
    setAttr(MUIA_NList_DisplayRecall, (IPTR) value);
}

template<class Type>
BOOL Zune::NList<Type>::mDoubleClick() const {
    return (BOOL) mGetAttr(MUIA_NList_DoubleClick);
}

template<class Type>
BOOL Zune::NList<Type>::dragSortable() const {
    return (BOOL) mGetAttr(MUIA_NList_DragSortable);
}

template<class Type>
void Zune::NList<Type>::setDragSortable(BOOL value) {
    setAttr(MUIA_NList_DragSortable, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::dragType() const {
    return (LONG) mGetAttr(MUIA_NList_DragType);
}

template<class Type>
void Zune::NList<Type>::setDragType(LONG value) {
    setAttr(MUIA_NList_DragType, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::dropMark() const {
    return (LONG) mGetAttr(MUIA_List_DropMark);
}

template<class Type>
LONG Zune::NList<Type>::entries() const {
    return (LONG) mGetAttr(MUIA_NList_Entries);
}

template<class Type>
BOOL Zune::NList<Type>::entryValueDependent() const {
    return (BOOL) mGetAttr(MUIA_NList_EntryValueDependent);
}

template<class Type>
void Zune::NList<Type>::setEntryValueDependent(BOOL value) {
    setAttr(MUIA_NList_EntryValueDependent, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::first() const {
    return (LONG) mGetAttr(MUIA_NList_First);
}

template<class Type>
void Zune::NList<Type>::setFirst(LONG value) {
    setAttr(MUIA_NList_First, (IPTR) value);
}

template<class Type>
std::string Zune::NList<Type>::format() const {
    return (STRPTR) mGetAttr(MUIA_NList_Format);
}

template<class Type>
void Zune::NList<Type>::setFormat(std::string &value) {
    setAttr(MUIA_NList_Format, (IPTR) value.c_str());
}

template<class Type>
LONG Zune::NList<Type>::horizDeltaFactor() const {
    return (LONG) mGetAttr(MUIA_NList_HorizDeltaFactor);
}

template<class Type>
LONG Zune::NList<Type>::horizEntries() const {
    return (LONG) mGetAttr(MUIA_NList_Horiz_Entries);
}

template<class Type>
LONG Zune::NList<Type>::horizFirst() const {
    return (LONG) mGetAttr(MUIA_NList_Horiz_First);
}

template<class Type>
void Zune::NList<Type>::setHorizFirst(LONG value) {
    setAttr(MUIA_NList_Horiz_First, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::horizVisible() const {
    return (LONG) mGetAttr(MUIA_NList_Horiz_Visible);
}

template<class Type>
BOOL Zune::NList<Type>::input() const {
    return (BOOL) mGetAttr(MUIA_NList_Input);
}

template<class Type>
void Zune::NList<Type>::setInput(BOOL value) {
    setAttr(MUIA_NList_Input, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::insertPosition() const {
    return (LONG) mGetAttr(MUIA_NList_InsertPosition);
}

template<class Type>
void Zune::NList<Type>::setKeepActive(Object *value) {
    setAttr(MUIA_NList_KeepActive, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setMakeActive(Object *value) {
    setAttr(MUIA_NList_MakeActive, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setMinLineHeight(LONG value) {
    setAttr(MUIA_NList_MinLineHeight, (IPTR) value);
}

template<class Type>
BOOL Zune::NList<Type>::multiClick() const {
    return (BOOL) mGetAttr(MUIA_NList_MultiClick);
}

template<class Type>
void Zune::NList<Type>::setMultiTestHook(struct Hook *value) {
    setAttr(MUIA_NList_MultiTestHook, (IPTR) value);
}

template<class Type>
IPTR Zune::NList<Type>::privateData() const {
    return (IPTR) mGetAttr(MUIA_NList_PrivateData);
}

template<class Type>
void Zune::NList<Type>::setPrivateData(IPTR value) {
    setAttr(MUIA_NList_PrivateData, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::propEntries() const {
    return (LONG) mGetAttr(MUIA_NList_Prop_Entries);
}

template<class Type>
LONG Zune::NList<Type>::propFirst() const {
    return (LONG) mGetAttr(MUIA_NList_Prop_First);
}

template<class Type>
void Zune::NList<Type>::setPropFirst(LONG value) {
    setAttr(MUIA_NList_Prop_First, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::propVisible() const {
    return (LONG) mGetAttr(MUIA_NList_Prop_Visible);
}

template<class Type>
void Zune::NList<Type>::setQuiet(BOOL value) {
    setAttr(MUIA_NList_Quiet, (IPTR) value);
}

template<class Type>
BOOL Zune::NList<Type>::showDropMarks() const {
    return (BOOL) mGetAttr(MUIA_NList_ShowDropMarks);
}

template<class Type>
void Zune::NList<Type>::setShowDropMarks(BOOL value) {
    setAttr(MUIA_NList_ShowDropMarks, (IPTR) value);
}

template<class Type>
std::string Zune::NList<Type>::skipChars() const {
    return (char *) mGetAttr(MUIA_NList_SkipChars);
}

template<class Type>
void Zune::NList<Type>::setSkipChars(std::string &value) {
    setAttr(MUIA_NList_SkipChars, (IPTR) value.c_str());
}

template<class Type>
IPTR Zune::NList<Type>::tabSize() const {
    return (IPTR) mGetAttr(MUIA_NList_TabSize);
}

template<class Type>
void Zune::NList<Type>::setTabSize(IPTR value) {
    setAttr(MUIA_NList_TabSize, (IPTR) value);
}

template<class Type>
std::string Zune::NList<Type>::title() const {
    return (char *) mGetAttr(MUIA_NList_Title);
}

template<class Type>
void Zune::NList<Type>::setTitle(std::string &value) {
    setAttr(MUIA_NList_Title, (IPTR) value.c_str());
}

template<class Type>
BOOL Zune::NList<Type>::titleSeparator() const {
    return (BOOL) mGetAttr(MUIA_NList_TitleSeparator);
}

template<class Type>
void Zune::NList<Type>::setTitleSeparator(BOOL value) {
    setAttr(MUIA_NList_TitleSeparator, (IPTR) value);
}

template<class Type>
void Zune::NList<Type>::setTypeSelect(LONG value) {
    setAttr(MUIA_NList_TypeSelect, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::vertDeltaFactor() const {
    return (LONG) mGetAttr(MUIA_NList_VertDeltaFactor);
}

template<class Type>
LONG Zune::NList<Type>::visible() const {
    return (LONG) mGetAttr(MUIA_NList_Visible);
}

template<class Type>
LONG Zune::NList<Type>::titleBackground() const {
    return (LONG) mGetAttr(MUIA_NList_TitleBackground);
}

template<class Type>
void Zune::NList<Type>::setTitleBackground(LONG value) {
    setAttr(MUIA_NList_TitleBackground, (IPTR) value);
}

template<class Type>
LONG Zune::NList<Type>::titlePen() const {
    return (LONG) mGetAttr(MUIA_NList_TitlePen);
}

template<class Type>
void Zune::NList<Type>::setTitlePen(LONG value) {
    setAttr(MUIA_NList_TitlePen, (IPTR) value);
}

template<class Type>
IPTR Zune::NList<Type>::clear() {
    return DoMethod(object, MUIM_NList_Clear);
}

template<class Type>
IPTR Zune::NList<Type>::copyToClip(LONG pos, IPTR clipnum) {
    return DoMethod(object, MUIM_NList_CopyToClip, pos, clipnum);
}

template<class Type>
IPTR Zune::NList<Type>::createImage(Object *imgobj, IPTR flags) {
    return DoMethod(object, MUIM_NList_CreateImage, imgobj, flags);
}

template<class Type>
IPTR Zune::NList<Type>::deleteImage(IPTR listimg) {
    return DoMethod(object, MUIM_NList_DeleteImage, listimg);
}

template<class Type>
IPTR Zune::NList<Type>::exchange(LONG pos1, LONG pos2) {
    return DoMethod(object, MUIM_NList_Exchange, pos1, pos2);
}

template<class Type>
IPTR Zune::NList<Type>::getEntry(LONG pos, Type **entry) {
    return DoMethod(object, MUIM_NList_GetEntry, pos, entry);
}

template<class Type>
IPTR Zune::NList<Type>::getEntryInfo(struct MUI_NList_GetEntryInfo *res) {
    return DoMethod(object, MUIM_NList_GetEntryInfo, res);
}

template<class Type>
IPTR Zune::NList<Type>::insert(Type **entries, LONG count, LONG pos) {
    return DoMethod(object, MUIM_NList_Insert, entries, count, pos);
}

template<class Type>
IPTR Zune::NList<Type>::insertSingle(Type *entry, LONG pos) {
    return DoMethod(object, MUIM_NList_InsertSingle, entry, pos);
}

template<class Type>
IPTR Zune::NList<Type>::insertSingleWrap() {
    return DoMethod(object, MUIM_NList_InsertSingleWrap);
}

template<class Type>
IPTR Zune::NList<Type>::insertWrap(Type **entries) {
    return DoMethod(object, MUIM_NList_InsertWrap, entries);
}

template<class Type>
IPTR Zune::NList<Type>::jump(LONG pos) {
    return DoMethod(object, MUIM_NList_Jump, pos);
}

template<class Type>
IPTR Zune::NList<Type>::move(LONG from, LONG to) {
    return DoMethod(object, MUIM_NList_Move, from, to);
}

template<class Type>
IPTR Zune::NList<Type>::nextSelected(LONG *pos) {
    return DoMethod(object, MUIM_NList_NextSelected, pos);
}

template<class Type>
IPTR Zune::NList<Type>::redraw(LONG pos) {
    return DoMethod(object, MUIM_NList_Redraw, pos);
}

template<class Type>
IPTR Zune::NList<Type>::remove(LONG pos) {
    return DoMethod(object, MUIM_NList_Remove, pos);
}

template<class Type>
IPTR Zune::NList<Type>::replaceSingle(LONG pos, LONG seltype, LONG *state) {
    return DoMethod(object, MUIM_NList_ReplaceSingle, pos, seltype, state);
}

template<class Type>
IPTR Zune::NList<Type>::sort() {
    return DoMethod(object, MUIM_NList_Sort);
}

template<class Type>
IPTR Zune::NList<Type>::testPos(LONG x, LONG y, struct MUI_NList_TestPos_Result *res) {
    return DoMethod(object, MUIM_NList_TestPos, x, y, res);
}

template<class Type>
IPTR Zune::NList<Type>::useImage(Object *obj, IPTR imgnum, IPTR flags) {
    return DoMethod(object, MUIM_NList_UseImage, obj, imgnum, flags);
}

template<typename Type>
Zune::NList<Type>::NList() {

}
