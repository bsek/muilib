#include "include/CMUI_List.h"

CMUI_List::CMUI_List()
: CMUI_Area() {
}

CMUI_List::CMUI_List(Object* obj)
: CMUI_Area() {
    object = obj;
}

void CMUI_List::insertActive(IPTR entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Active);
}

void CMUI_List::insertBottom(IPTR entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Bottom);
}

void CMUI_List::insertSorted(IPTR entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Sorted);
}

void CMUI_List::insertTop(IPTR entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Top);
}

// This method is a convienient alternative to the Entries attribute

LONG CMUI_List::length() const {
    return (LONG) mGetAttr(MUIA_List_Entries);
}

// These methods can be used as shortcuts for inserting objects into lists

void CMUI_List::mAddHead(IPTR entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Top);
}

void CMUI_List::mAddTail(IPTR entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Bottom);
}

// This method can be used to retrieve the number of selected entries
// in a list

IPTR CMUI_List::numSelected() {
    IPTR numSelected;
    DoMethod(object,MUIM_List_Select, MUIV_List_Select_All, MUIV_List_Select_Ask, &numSelected);
    return numSelected;
}

CMUI_List& CMUI_List::operator=(Object* obj) {
    object = obj;
    return *this;
}

// By overloading the [] operator you can treat lists like arrays

IPTR CMUI_List::operator[](LONG pos) {
    IPTR entry;
    DoMethod(object,MUIM_List_GetEntry, pos, &entry);
    return entry;
}

LONG CMUI_List::active() const {
    return (LONG) mGetAttr(MUIA_List_Active);
}

void CMUI_List::setActive(LONG value) {
    setAttr(MUIA_List_Active, (IPTR) value);
}

BOOL CMUI_List::autoVisible() const {
    return (BOOL) mGetAttr(MUIA_List_AutoVisible);
}

void CMUI_List::setAutoVisible(BOOL value) {
    setAttr(MUIA_List_AutoVisible, (IPTR) value);
}

void CMUI_List::setCompareHook(struct Hook *value) {
    setAttr(MUIA_List_CompareHook, (IPTR) value);
}

void CMUI_List::setConstructHook(struct Hook *value) {
    setAttr(MUIA_List_ConstructHook, (IPTR) value);
}

void CMUI_List::setDestructHook(struct Hook *value) {
    setAttr(MUIA_List_DestructHook, (IPTR) value);
}

void CMUI_List::setDisplayHook(struct Hook *value) {
    setAttr(MUIA_List_DisplayHook, (IPTR) value);
}

BOOL CMUI_List::dragSortable() const {
    return (BOOL) mGetAttr(MUIA_List_DragSortable);
}

void CMUI_List::setDragSortable(BOOL value) {
    setAttr(MUIA_List_DragSortable, (IPTR) value);
}

LONG CMUI_List::dropMark() const {
    return (LONG) mGetAttr(MUIA_List_DropMark);
}

LONG CMUI_List::entries() const {
    return (LONG) mGetAttr(MUIA_List_Entries);
}

LONG CMUI_List::first() const {
    return (LONG) mGetAttr(MUIA_List_First);
}

std::string CMUI_List::format() const {
    return (STRPTR) mGetAttr(MUIA_List_Format);
}

void CMUI_List::setFormat(std::string value) {
    setAttr(MUIA_List_Format, (IPTR) value.c_str());
}

LONG CMUI_List::insertPosition() const {
    return (LONG) mGetAttr(MUIA_List_InsertPosition);
}

void CMUI_List::setMultiTestHook(struct Hook *value) {
    setAttr(MUIA_List_MultiTestHook, (IPTR) value);
}

void CMUI_List::setQuiet(BOOL value) {
    setAttr(MUIA_List_Quiet, (IPTR) value);
}

BOOL CMUI_List::showDropMarks() const {
    return (BOOL) mGetAttr(MUIA_List_ShowDropMarks);
}

void CMUI_List::setShowDropMarks(BOOL value) {
    setAttr(MUIA_List_ShowDropMarks, (IPTR) value);
}

char * CMUI_List::title() const {
    return (char *) mGetAttr(MUIA_List_Title);
}

void CMUI_List::setTitle(std::string value) {
    setAttr(MUIA_List_Title, (IPTR) value.c_str());
}

LONG CMUI_List::visible() const {
    return (LONG) mGetAttr(MUIA_List_Visible);
}

IPTR CMUI_List::clear() {
    return DoMethod(object,MUIM_List_Clear);
}

IPTR CMUI_List::createImage(Object *obj, IPTR flags) {
    return DoMethod(object,MUIM_List_CreateImage, (IPTR)obj, flags);
}

IPTR CMUI_List::deleteImage(IPTR listimg) {
    return DoMethod(object,MUIM_List_DeleteImage, listimg);
}

IPTR CMUI_List::exchange(LONG pos1, LONG pos2) {
    return DoMethod(object,MUIM_List_Exchange, pos1, pos2);
}

IPTR CMUI_List::getEntry(LONG pos, IPTR *entry) {
    return DoMethod(object,MUIM_List_GetEntry, pos, entry);
}

IPTR CMUI_List::mInsert(IPTR *entries, LONG count, LONG pos) {
    return DoMethod(object,MUIM_List_Insert, (IPTR)entries, count, pos);
}

IPTR CMUI_List::insertSingle(IPTR entry, LONG pos) {
    return DoMethod(object,MUIM_List_InsertSingle, entry, pos);
}

IPTR CMUI_List::insertArray(char **entries) {
    for (int index = 0; entries[index]; index++) {
        insertSingle((IPTR) entries[index], MUIV_List_Insert_Bottom);
    }
    return 1;
}

IPTR CMUI_List::jump(LONG pos) {
    return DoMethod(object,MUIM_List_Jump, pos);
}

IPTR CMUI_List::move(LONG from, LONG to) {
    return DoMethod(object,MUIM_List_Move, from, to);
}

IPTR CMUI_List::nextSelected(LONG *pos) {
    return DoMethod(object,MUIM_List_NextSelected, (IPTR)pos);
}

IPTR CMUI_List::redraw(LONG pos) {
    return DoMethod(object,MUIM_List_Redraw, pos);
}

IPTR CMUI_List::mRemove(LONG pos) {
    return DoMethod(object,MUIM_List_Remove, pos);
}

IPTR CMUI_List::select(LONG pos, LONG seltype, LONG *state) {
    return DoMethod(object,MUIM_List_Select, pos, seltype, state);
}

IPTR CMUI_List::sort() {
    return DoMethod(object,MUIM_List_Sort);
}

IPTR CMUI_List::testPos(LONG x, LONG y, struct MUI_List_TestPos_Result *res) {
    return DoMethod(object,MUIM_List_TestPos, x, y, res);
}
