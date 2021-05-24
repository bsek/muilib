#include "include/NList.h"
#include <mui/NList_mcc.h>

template<typename Type>
Zune::NList<Type>::NList() = default;

template<typename Type>
Zune::NList<Type>::NList(Object *obj) {
    object = obj;
}

template<class Type>
void Zune::NList<Type>::addHead(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(entry), MUIV_NList_Insert_Top);
}

template<class Type>
void Zune::NList<Type>::addHead(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(&entry), MUIV_NList_Insert_Top);
}

template<class Type>
void Zune::NList<Type>::addTail(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(entry), MUIV_NList_Insert_Bottom);
}

template<class Type>
void Zune::NList<Type>::addTail(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(&entry), MUIV_NList_Insert_Bottom);
}

template<class Type>
void Zune::NList<Type>::insertTop(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(entry), MUIV_NList_Insert_Top);
}

template<class Type>
void Zune::NList<Type>::insertTop(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(&entry), MUIV_NList_Insert_Top);
}

template<class Type>
void Zune::NList<Type>::insertBottom(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(entry), MUIV_NList_Insert_Bottom);
}

template<class Type>
void Zune::NList<Type>::insertBottom(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(&entry), MUIV_NList_Insert_Bottom);
}

template<class Type>
void Zune::NList<Type>::insertSorted(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(entry), MUIV_NList_Insert_Sorted);
}

template<class Type>
void Zune::NList<Type>::insertSorted(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(&entry), MUIV_NList_Insert_Sorted);
}

template<class Type>
void Zune::NList<Type>::insertActive(Type *entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(entry), MUIV_NList_Insert_Active);
}

template<class Type>
void Zune::NList<Type>::insertActive(Type &entry) {
    DoMethod(object, MUIM_NList_InsertSingle, reinterpret_cast<IPTR>(&entry), MUIV_NList_Insert_Active);
}

template<class Type>
LONG Zune::NList<Type>::active() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_Active));
}

template<class Type>
void Zune::NList<Type>::setActive(LONG value) {
    setAttr(MUIA_NList_Active, static_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setAutoCopyToClip(BOOL value) {
    setAttr(MUIA_NList_AutoCopyToClip, static_cast<IPTR>(value));
}

template<class Type>
BOOL Zune::NList<Type>::autoVisible() const {
    return static_cast<BOOL>(mGetAttr(MUIA_NList_AutoVisible));
}

template<class Type>
void Zune::NList<Type>::setAutoVisible(BOOL value) {
    setAttr(MUIA_NList_AutoVisible, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::clickColumn() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_ClickColumn));
}

template<class Type>
void Zune::NList<Type>::setCompareHook(struct Hook *value) {
    setAttr(MUIA_NList_CompareHook, reinterpret_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setConstructHook(struct Hook *value) {
    setAttr(MUIA_NList_ConstructHook, reinterpret_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setCopyColumnToClipHook(struct Hook *value) {
    setAttr(MUIA_NList_CopyColumnToClipHook, reinterpret_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setCopyEntryToClipHook(struct Hook *value) {
    setAttr(MUIA_NList_CopyEntryToClipHook, reinterpret_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setDefaultObjectOnClick(BOOL value) {
    setAttr(MUIA_NList_DefaultObjectOnClick, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::defClickColumn() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_DefClickColumn));
}

template<class Type>
void Zune::NList<Type>::setDefClickColumn(LONG value) {
    setAttr(MUIA_NList_DefClickColumn, static_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setDestructHook(struct Hook *value) {
    setAttr(MUIA_NList_DestructHook, reinterpret_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setDisplayHook(struct Hook *value) {
    setAttr(MUIA_NList_DisplayHook, reinterpret_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setDisplayRecall(BOOL value) {
    setAttr(MUIA_NList_DisplayRecall, static_cast<IPTR>(value));
}

template<class Type>
BOOL Zune::NList<Type>::mDoubleClick() const {
    return static_cast<BOOL>(mGetAttr(MUIA_NList_DoubleClick));
}

template<class Type>
BOOL Zune::NList<Type>::dragSortable() const {
    return static_cast<BOOL>(mGetAttr(MUIA_NList_DragSortable));
}

template<class Type>
void Zune::NList<Type>::setDragSortable(BOOL value) {
    setAttr(MUIA_NList_DragSortable, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::dragType() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_DragType));
}

template<class Type>
void Zune::NList<Type>::setDragType(LONG value) {
    setAttr(MUIA_NList_DragType, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::dropMark() const {
    return static_cast<LONG>(mGetAttr(MUIA_List_DropMark));
}

template<class Type>
LONG Zune::NList<Type>::entries() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_Entries));
}

template<class Type>
BOOL Zune::NList<Type>::entryValueDependent() const {
    return static_cast<BOOL>(mGetAttr(MUIA_NList_EntryValueDependent));
}

template<class Type>
void Zune::NList<Type>::setEntryValueDependent(BOOL value) {
    setAttr(MUIA_NList_EntryValueDependent, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::first() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_First));
}

template<class Type>
void Zune::NList<Type>::setFirst(LONG value) {
    setAttr(MUIA_NList_First, static_cast<IPTR>(value));
}

template<class Type>
std::string Zune::NList<Type>::format() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_NList_Format));
}

template<class Type>
void Zune::NList<Type>::setFormat(std::string &value) {
    setAttr(MUIA_NList_Format, reinterpret_cast<IPTR>(value.c_str()));
}

template<class Type>
LONG Zune::NList<Type>::horizDeltaFactor() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_HorizDeltaFactor));
}

template<class Type>
LONG Zune::NList<Type>::horizEntries() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_Horiz_Entries));
}

template<class Type>
LONG Zune::NList<Type>::horizFirst() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_Horiz_First));
}

template<class Type>
void Zune::NList<Type>::setHorizFirst(LONG value) {
    setAttr(MUIA_NList_Horiz_First, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::horizVisible() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_Horiz_Visible));
}

template<class Type>
BOOL Zune::NList<Type>::input() const {
    return static_cast<BOOL>(mGetAttr(MUIA_NList_Input));
}

template<class Type>
void Zune::NList<Type>::setInput(BOOL value) {
    setAttr(MUIA_NList_Input, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::insertPosition() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_InsertPosition));
}

template<class Type>
void Zune::NList<Type>::setKeepActive(Object *value) {
    setAttr(MUIA_NList_KeepActive, reinterpret_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setMakeActive(Object *value) {
    setAttr(MUIA_NList_MakeActive, reinterpret_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setMinLineHeight(LONG value) {
    setAttr(MUIA_NList_MinLineHeight, static_cast<IPTR>(value));
}

template<class Type>
BOOL Zune::NList<Type>::multiClick() const {
    return static_cast<BOOL>(mGetAttr(MUIA_NList_MultiClick));
}

template<class Type>
void Zune::NList<Type>::setMultiTestHook(struct Hook *value) {
    setAttr(MUIA_NList_MultiTestHook, reinterpret_cast<IPTR>(value));
}

template<class Type>
IPTR Zune::NList<Type>::privateData() const {
    return static_cast<IPTR>(mGetAttr(MUIA_NList_PrivateData));
}

template<class Type>
void Zune::NList<Type>::setPrivateData(ULONG value) {
    setAttr(MUIA_NList_PrivateData, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::propEntries() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_Prop_Entries));
}

template<class Type>
LONG Zune::NList<Type>::propFirst() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_Prop_First));
}

template<class Type>
void Zune::NList<Type>::setPropFirst(LONG value) {
    setAttr(MUIA_NList_Prop_First, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::propVisible() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_Prop_Visible));
}

template<class Type>
void Zune::NList<Type>::setQuiet(BOOL value) {
    setAttr(MUIA_NList_Quiet, static_cast<IPTR>(value));
}

template<class Type>
BOOL Zune::NList<Type>::showDropMarks() const {
    return static_cast<BOOL>(mGetAttr(MUIA_NList_ShowDropMarks));
}

template<class Type>
void Zune::NList<Type>::setShowDropMarks(BOOL value) {
    setAttr(MUIA_NList_ShowDropMarks, static_cast<IPTR>(value));
}

template<class Type>
std::string Zune::NList<Type>::skipChars() const {
    return reinterpret_cast<char *>(mGetAttr(MUIA_NList_SkipChars));
}

template<class Type>
void Zune::NList<Type>::setSkipChars(std::string &value) {
    setAttr(MUIA_NList_SkipChars, reinterpret_cast<IPTR>(value.c_str()));
}

template<class Type>
IPTR Zune::NList<Type>::tabSize() const {
    return static_cast<IPTR>(mGetAttr(MUIA_NList_TabSize));
}

template<class Type>
void Zune::NList<Type>::setTabSize(ULONG value) {
    setAttr(MUIA_NList_TabSize, static_cast<IPTR>(value));
}

template<class Type>
std::string Zune::NList<Type>::title() const {
    return reinterpret_cast<char *>(mGetAttr(MUIA_NList_Title));
}

template<class Type>
void Zune::NList<Type>::setTitle(std::string &value) {
    setAttr(MUIA_NList_Title, reinterpret_cast<IPTR>(value.c_str()));
}

template<class Type>
BOOL Zune::NList<Type>::titleSeparator() const {
    return static_cast<BOOL>(mGetAttr(MUIA_NList_TitleSeparator));
}

template<class Type>
void Zune::NList<Type>::setTitleSeparator(BOOL value) {
    setAttr(MUIA_NList_TitleSeparator, static_cast<IPTR>(value));
}

template<class Type>
void Zune::NList<Type>::setTypeSelect(LONG value) {
    setAttr(MUIA_NList_TypeSelect, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::vertDeltaFactor() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_VertDeltaFactor));
}

template<class Type>
LONG Zune::NList<Type>::visible() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_Visible));
}

template<class Type>
LONG Zune::NList<Type>::titleBackground() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_TitleBackground));
}

template<class Type>
void Zune::NList<Type>::setTitleBackground(LONG value) {
    setAttr(MUIA_NList_TitleBackground, static_cast<IPTR>(value));
}

template<class Type>
LONG Zune::NList<Type>::titlePen() const {
    return static_cast<LONG>(mGetAttr(MUIA_NList_TitlePen));
}

template<class Type>
void Zune::NList<Type>::setTitlePen(LONG value) {
    setAttr(MUIA_NList_TitlePen, static_cast<IPTR>(value));
}

template<class Type>
IPTR Zune::NList<Type>::clear() {
    return DoMethod(object, MUIM_NList_Clear);
}

template<class Type>
IPTR Zune::NList<Type>::copyToClip(LONG pos, ULONG clipnum) {
    return DoMethod(object, MUIM_NList_CopyToClip, static_cast<IPTR>(pos), static_cast<IPTR>(clipnum));
}

template<class Type>
IPTR Zune::NList<Type>::createImage(Object *imgobj, ULONG flags) {
    return DoMethod(object, MUIM_NList_CreateImage, reinterpret_cast<IPTR>(imgobj), static_cast<IPTR>(flags));
}

template<class Type>
IPTR Zune::NList<Type>::deleteImage(APTR listimg) {
    return DoMethod(object, MUIM_NList_DeleteImage, reinterpret_cast<IPTR>(listimg));
}

template<class Type>
IPTR Zune::NList<Type>::exchange(LONG pos1, LONG pos2) {
    return DoMethod(object, MUIM_NList_Exchange, static_cast<IPTR>(pos1), static_cast<IPTR>(pos2));
}

template<class Type>
IPTR Zune::NList<Type>::getEntry(LONG pos, Type **entry) {
    return DoMethod(object, MUIM_NList_GetEntry, static_cast<IPTR>(pos), reinterpret_cast<IPTR>(entry));
}

template<class Type>
IPTR Zune::NList<Type>::getEntryInfo(struct MUI_NList_GetEntryInfo *res) {
    return DoMethod(object, MUIM_NList_GetEntryInfo, reinterpret_cast<IPTR>(res));
}

template<class Type>
IPTR Zune::NList<Type>::insert(Type **entries, LONG count, LONG pos) {
    return DoMethod(object, MUIM_NList_Insert, reinterpret_cast<IPTR>(entries), static_cast<IPTR>(count),
                    static_cast<IPTR>(pos));
}

template<class Type>
IPTR Zune::NList<Type>::insertSingle(Type *entry, LONG pos) {
    return DoMethod(object, MUIM_NList_InsertSingle, static_cast<IPTR>(entry), static_cast<IPTR>(pos));
}

template<class Type>
IPTR Zune::NList<Type>::insertSingleWrap() {
    return DoMethod(object, MUIM_NList_InsertSingleWrap);
}

template<class Type>
IPTR Zune::NList<Type>::insertWrap(Type **entries) {
    return DoMethod(object, MUIM_NList_InsertWrap, reinterpret_cast<IPTR>(entries));
}

template<class Type>
IPTR Zune::NList<Type>::jump(LONG pos) {
    return DoMethod(object, MUIM_NList_Jump, static_cast<IPTR>(pos));
}

template<class Type>
IPTR Zune::NList<Type>::move(LONG from, LONG to) {
    return DoMethod(object, MUIM_NList_Move, static_cast<IPTR>(from), static_cast<IPTR>(to));
}

template<class Type>
IPTR Zune::NList<Type>::nextSelected(LONG *pos) {
    return DoMethod(object, MUIM_NList_NextSelected, reinterpret_cast<IPTR>(pos));
}

template<class Type>
IPTR Zune::NList<Type>::redraw(LONG pos) {
    return DoMethod(object, MUIM_NList_Redraw, static_cast<IPTR>(pos));
}

template<class Type>
IPTR Zune::NList<Type>::remove(LONG pos) {
    return DoMethod(object, MUIM_NList_Remove, static_cast<IPTR>(pos));
}

template<class Type>
IPTR Zune::NList<Type>::replaceSingle(LONG pos, LONG seltype, LONG *state) {
    return DoMethod(object, MUIM_NList_ReplaceSingle, static_cast<IPTR>(pos), static_cast<IPTR>(seltype),
                    reinterpret_cast<IPTR>(state));
}

template<class Type>
IPTR Zune::NList<Type>::sort() {
    return DoMethod(object, MUIM_NList_Sort);
}

template<class Type>
IPTR Zune::NList<Type>::testPos(LONG x, LONG y, struct MUI_NList_TestPos_Result *res) {
    return DoMethod(object, MUIM_NList_TestPos, static_cast<IPTR>(x), static_cast<IPTR>(y),
                    reinterpret_cast<IPTR>(res));
}

template<class Type>
IPTR Zune::NList<Type>::useImage(Object *obj, ULONG imgnum, ULONG flags) {
    return DoMethod(object, MUIM_NList_UseImage, reinterpret_cast<IPTR>(obj), static_cast<IPTR>(imgnum),
                    static_cast<IPTR>(flags));
}


template<typename Type>
void Zune::NList<Type>::setAdjustHeight(BOOL doAdjust) {
    configmap[MUIA_NList_AdjustHeight] = static_cast<IPTR>(doAdjust);
}

template<typename Type>
void Zune::NList<Type>::setAdjustWidth(BOOL doAdjust) {
    configmap[MUIA_NList_AdjustHeight] = static_cast<IPTR>(doAdjust);
}

template<typename Type>
void Zune::NList<Type>::setMultiSelect(LONG multiselect) {
    configmap[MUIA_NList_MultiSelect] = static_cast<IPTR>(multiselect);
}

template<typename Type>
void Zune::NList<Type>::setPool(APTR pool) {
    configmap[MUIA_NList_Pool] = reinterpret_cast<IPTR>(pool);
}

template<typename Type>
void Zune::NList<Type>::setPoolPudleSize(ULONG size) {
    configmap[MUIA_NList_PoolPuddleSize] = static_cast<IPTR>(size);
}

template<typename Type>
void Zune::NList<Type>::setPoolThreshSize(ULONG size) {
    configmap[MUIA_NList_PoolThreshSize] = static_cast<IPTR>(size);
}

template<typename Type>
void Zune::NList<Type>::setSourceArray(APTR array) {
    configmap[MUIA_NList_SourceArray] = reinterpret_cast<IPTR>(array);
}

template<typename Type>
void Zune::NList<Type>::setSourceString(std::string &sourceString) {
    configmap[MUIA_NList_SourceString] = reinterpret_cast<IPTR>(sourceString.c_str());
}

template<typename Type>
void Zune::NList<Type>::setSourceInsert(struct MUIP_NList_InsertWrap *insert) {
    configmap[MUIA_NList_SourceInsert] = reinterpret_cast<IPTR>(insert);
}

template<typename Type>
void Zune::NList<Type>::build() {
    RootClass::createObject(MUIC_NList);
}
