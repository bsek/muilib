#include "include/CMUI_NList.h"

CMUI_NList::CMUI_NList()
: CMUI_Area() {
}

CMUI_NList::CMUI_NList(Object* obj)
: CMUI_Area() {
    object = obj;
}

CMUI_NList& CMUI_NList::operator=(Object* obj) {
    object = obj;
    return *this;
}

// By overloading the [] operator you can treat lists like arrays

IPTR CMUI_NList::operator[](LONG pos) {
    IPTR entry;
    DoMethod(object, MUIM_NList_GetEntry, pos, &entry);
    return entry;
}

// This method is a convienient alternative to the Entries attribute

LONG CMUI_NList::length() const {
    return (LONG) mGetAttr(MUIA_NList_Entries);
}

// This method can be used to retrieve the number of selected entries
// in a list

IPTR CMUI_NList::numSelected() {
    IPTR numSelected;
    DoMethod(object, MUIM_NList_Select, MUIV_NList_Select_All, MUIV_NList_Select_Ask, &numSelected);
    return numSelected;
}

// These methods can be used as shortcuts for inserting objects into lists

void CMUI_NList::addHead(IPTR entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Top);
}

void CMUI_NList::addTail(IPTR entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Bottom);
}

void CMUI_NList::insertTop(IPTR entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Top);
}

void CMUI_NList::insertBottom(IPTR entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Bottom);
}

void CMUI_NList::insertSorted(IPTR entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Sorted);
}

void CMUI_NList::insertActive(IPTR entry) {
    DoMethod(object, MUIM_NList_InsertSingle, entry, MUIV_NList_Insert_Active);
}

LONG CMUI_NList::active() const {
    return (LONG) mGetAttr(MUIA_NList_Active);
}

void CMUI_NList::setActive(LONG value) {
    setAttr(MUIA_NList_Active, (IPTR) value);
}

void CMUI_NList::setAutoCopyToClip(BOOL value) {
    setAttr(MUIA_NList_AutoCopyToClip, (IPTR) value);
}

BOOL CMUI_NList::autoVisible() const {
    return (BOOL) mGetAttr(MUIA_NList_AutoVisible);
}

void CMUI_NList::setAutoVisible(BOOL value) {
    setAttr(MUIA_NList_AutoVisible, (IPTR) value);
}

LONG CMUI_NList::clickColumn() const {
    return (LONG) mGetAttr(MUIA_NList_ClickColumn);
}

void CMUI_NList::setCompareHook(struct Hook * value) {
    setAttr(MUIA_NList_CompareHook, (IPTR) value);
}

void CMUI_NList::setConstructHook(struct Hook * value) {
    setAttr(MUIA_NList_ConstructHook, (IPTR) value);
}

void CMUI_NList::setCopyColumnToClipHook(struct Hook * value) {
    setAttr(MUIA_NList_CopyColumnToClipHook, (IPTR) value);
}

void CMUI_NList::setCopyEntryToClipHook(struct Hook * value) {
    setAttr(MUIA_NList_CopyEntryToClipHook, (IPTR) value);
}

void CMUI_NList::setDefaultObjectOnClick(BOOL value) {
    setAttr(MUIA_NList_DefaultObjectOnClick, (IPTR) value);
}

LONG CMUI_NList::defClickColumn() const {
    return (LONG) mGetAttr(MUIA_NList_DefClickColumn);
}

void CMUI_NList::setDefClickColumn(LONG value) {
    setAttr(MUIA_NList_DefClickColumn, (IPTR) value);
}

void CMUI_NList::setDestructHook(struct Hook * value) {
    setAttr(MUIA_NList_DestructHook, (IPTR) value);
}

void CMUI_NList::setDisplayHook(struct Hook * value) {
    setAttr(MUIA_NList_DisplayHook, (IPTR) value);
}

void CMUI_NList::setDisplayRecall(BOOL value) {
    setAttr(MUIA_NList_DisplayRecall, (IPTR) value);
}

BOOL CMUI_NList::mDoubleClick() const {
    return (BOOL) mGetAttr(MUIA_NList_DoubleClick);
}

BOOL CMUI_NList::dragSortable() const {
    return (BOOL) mGetAttr(MUIA_NList_DragSortable);
}

void CMUI_NList::setDragSortable(BOOL value) {
    setAttr(MUIA_NList_DragSortable, (IPTR) value);
}

LONG CMUI_NList::dragType() const {
    return (LONG) mGetAttr(MUIA_NList_DragType);
}

void CMUI_NList::setDragType(LONG value) {
    setAttr(MUIA_NList_DragType, (IPTR) value);
}

LONG CMUI_NList::dropMark() const {
    return (LONG) mGetAttr(MUIA_List_DropMark);
}

LONG CMUI_NList::entries() const {
    return (LONG) mGetAttr(MUIA_NList_Entries);
}

BOOL CMUI_NList::entryValueDependent() const {
    return (BOOL) mGetAttr(MUIA_NList_EntryValueDependent);
}

void CMUI_NList::setEntryValueDependent(BOOL value) {
    setAttr(MUIA_NList_EntryValueDependent, (IPTR) value);
}

LONG CMUI_NList::first() const {
    return (LONG) mGetAttr(MUIA_NList_First);
}

void CMUI_NList::setFirst(LONG value) {
    setAttr(MUIA_NList_First, (IPTR) value);
}

std::string CMUI_NList::format() const {
    return (STRPTR) mGetAttr(MUIA_NList_Format);
}

void CMUI_NList::setFormat(std::string value) {
    setAttr(MUIA_NList_Format, (IPTR) value.c_str());
}

LONG CMUI_NList::horizDeltaFactor() const {
    return (LONG) mGetAttr(MUIA_NList_HorizDeltaFactor);
}

LONG CMUI_NList::horizEntries() const {
    return (LONG) mGetAttr(MUIA_NList_Horiz_Entries);
}

LONG CMUI_NList::horizFirst() const {
    return (LONG) mGetAttr(MUIA_NList_Horiz_First);
}

void CMUI_NList::setHorizFirst(LONG value) {
    setAttr(MUIA_NList_Horiz_First, (IPTR) value);
}

LONG CMUI_NList::horizVisible() const {
    return (LONG) mGetAttr(MUIA_NList_Horiz_Visible);
}

BOOL CMUI_NList::input() const {
    return (BOOL) mGetAttr(MUIA_NList_Input);
}

void CMUI_NList::setInput(BOOL value) {
    setAttr(MUIA_NList_Input, (IPTR) value);
}

LONG CMUI_NList::insertPosition() const {
    return (LONG) mGetAttr(MUIA_NList_InsertPosition);
}

void CMUI_NList::setKeepActive(Object * value) {
    setAttr(MUIA_NList_KeepActive, (IPTR) value);
}

void CMUI_NList::setMakeActive(Object * value) {
    setAttr(MUIA_NList_MakeActive, (IPTR) value);
}

void CMUI_NList::setMinLineHeight(LONG value) {
    setAttr(MUIA_NList_MinLineHeight, (IPTR) value);
}

BOOL CMUI_NList::multiClick() const {
    return (BOOL) mGetAttr(MUIA_NList_MultiClick);
}

void CMUI_NList::setMultiTestHook(struct Hook * value) {
    setAttr(MUIA_NList_MultiTestHook, (IPTR) value);
}

IPTR CMUI_NList::privateData() const {
    return (IPTR) mGetAttr(MUIA_NList_PrivateData);
}

void CMUI_NList::setPrivateData(IPTR value) {
    setAttr(MUIA_NList_PrivateData, (IPTR) value);
}

LONG CMUI_NList::propEntries() const {
    return (LONG) mGetAttr(MUIA_NList_Prop_Entries);
}

LONG CMUI_NList::propFirst() const {
    return (LONG) mGetAttr(MUIA_NList_Prop_First);
}

void CMUI_NList::setPropFirst(LONG value) {
    setAttr(MUIA_NList_Prop_First, (IPTR) value);
}

LONG CMUI_NList::propVisible() const {
    return (LONG) mGetAttr(MUIA_NList_Prop_Visible);
}

void CMUI_NList::setQuiet(BOOL value) {
    setAttr(MUIA_NList_Quiet, (IPTR) value);
}

BOOL CMUI_NList::showDropMarks() const {
    return (BOOL) mGetAttr(MUIA_NList_ShowDropMarks);
}

void CMUI_NList::setShowDropMarks(BOOL value) {
    setAttr(MUIA_NList_ShowDropMarks, (IPTR) value);
}

std::string CMUI_NList::skipChars() const {
    return (char *) mGetAttr(MUIA_NList_SkipChars);
}

void CMUI_NList::setSkipChars(std::string value) {
    setAttr(MUIA_NList_SkipChars, (IPTR) value.c_str());
}

IPTR CMUI_NList::tabSize() const {
    return (IPTR) mGetAttr(MUIA_NList_TabSize);
}

void CMUI_NList::setTabSize(IPTR value) {
    setAttr(MUIA_NList_TabSize, (IPTR) value);
}

std::string CMUI_NList::title() const {
    return (char *) mGetAttr(MUIA_NList_Title);
}

void CMUI_NList::setTitle(std::string value) {
    setAttr(MUIA_NList_Title, (IPTR) value.c_str());
}

BOOL CMUI_NList::titleSeparator() const {
    return (BOOL) mGetAttr(MUIA_NList_TitleSeparator);
}

void CMUI_NList::setTitleSeparator(BOOL value) {
    setAttr(MUIA_NList_TitleSeparator, (IPTR) value);
}

void CMUI_NList::setTypeSelect(LONG value) {
    setAttr(MUIA_NList_TypeSelect, (IPTR) value);
}

LONG CMUI_NList::vertDeltaFactor() const {
    return (LONG) mGetAttr(MUIA_NList_VertDeltaFactor);
}

LONG CMUI_NList::visible() const {
    return (LONG) mGetAttr(MUIA_NList_Visible);
}

LONG CMUI_NList::titleBackground() const {
    return (LONG) mGetAttr(MUIA_NList_TitleBackground);
}

void CMUI_NList::setTitleBackground(LONG value) {
    setAttr(MUIA_NList_TitleBackground, (IPTR) value);
}

LONG CMUI_NList::titlePen() const {
    return (LONG) mGetAttr(MUIA_NList_TitlePen);
}

void CMUI_NList::setTitlePen(LONG value) {
    setAttr(MUIA_NList_TitlePen, (IPTR) value);
}

IPTR CMUI_NList::clear() {
    return DoMethod(object, MUIM_NList_Clear);
}

IPTR CMUI_NList::copyToClip(LONG pos, IPTR clipnum) {
    return DoMethod(object, MUIM_NList_CopyToClip, pos, clipnum);
}

IPTR CMUI_NList::createImage(Object * imgobj, IPTR flags) {
    return DoMethod(object, MUIM_NList_CreateImage, imgobj, flags);
}

IPTR CMUI_NList::deleteImage(IPTR listimg) {
    return DoMethod(object, MUIM_NList_DeleteImage, listimg);
}

IPTR CMUI_NList::exchange(LONG pos1, LONG pos2) {
    return DoMethod(object, MUIM_NList_Exchange, pos1, pos2);
}

IPTR CMUI_NList::getEntry(LONG pos, IPTR * entry) {
    return DoMethod(object, MUIM_NList_GetEntry, pos, entry);
}

IPTR CMUI_NList::getEntryInfo(struct MUI_NList_GetEntryInfo * res) {
    return DoMethod(object,MUIM_NList_GetEntryInfo, res);
}

IPTR CMUI_NList::insert(IPTR * entries, LONG count, LONG pos) {
    return DoMethod(object,MUIM_NList_Insert, entries, count, pos);
}

IPTR CMUI_NList::insertSingle(IPTR entry, LONG pos) {
    return DoMethod(object, MUIM_NList_InsertSingle, entry, pos);
}

IPTR CMUI_NList::insertSingleWrap() {
    return DoMethod(object, MUIM_NList_InsertSingleWrap);
}

IPTR CMUI_NList::insertWrap(IPTR * entries) {
    return DoMethod(object, MUIM_NList_InsertWrap, entries);
}

IPTR CMUI_NList::jump(LONG pos) {
    return DoMethod(object, MUIM_NList_Jump, pos);
}

IPTR CMUI_NList::move(LONG from, LONG to) {
    return DoMethod(object, MUIM_NList_Move, from, to);
}

IPTR CMUI_NList::nextSelected(LONG * pos) {
    return DoMethod(object,MUIM_NList_NextSelected, pos);
}

IPTR CMUI_NList::redraw(LONG pos) {
    return DoMethod(object, MUIM_NList_Redraw, pos);
}

IPTR CMUI_NList::remove(LONG pos) {
    return DoMethod(object, MUIM_NList_Remove, pos);
}

IPTR CMUI_NList::replaceSingle(LONG pos, LONG seltype, LONG * state) {
    return DoMethod(object, MUIM_NList_ReplaceSingle, pos, seltype, state);
}

IPTR CMUI_NList::sort() {
    return DoMethod(object,MUIM_NList_Sort);
}

IPTR CMUI_NList::testPos(LONG x, LONG y, struct MUI_NList_TestPos_Result * res) {
    return DoMethod(object, MUIM_NList_TestPos, x, y, res);
}

IPTR CMUI_NList::useImage(Object * obj, IPTR imgnum, IPTR flags) {
    return DoMethod(object, MUIM_NList_UseImage, obj, imgnum, flags);
}

