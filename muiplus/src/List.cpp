#include "include/CTMUI_List.h"

template<class Type>
CTMUI_List<Type>::CTMUI_List()
: Area() {
    object = NULL;
}

template<class Type>
CTMUI_List<Type>::CTMUI_List(Object* obj)
: Area() {
    object = obj;
}

template<class Type>
CTMUI_List<Type>& CTMUI_List<Type>::operator=(Object* obj) {
    object = obj;
    return *this;
}
// By overloading the [] operator you can treat lists like arrays

template<class Type>
Type& CTMUI_List<Type>::operator[](LONG pos) {
    Type *entry;
    DoMethod(object,MUIM_List_GetEntry, pos, &entry);
    return *entry;
}

// This method is a convienient alternative to the Entries attribute

template <typename Type> LONG CTMUI_List<Type>::length() const {
    return (LONG) mGetAttr(MUIA_List_Entries);
}

// This method can be used to retrieve the number of selected entries
// in a list

template <typename Type> IPTR CTMUI_List<Type>::numSelected() {
    IPTR numSelected;
    DoMethod(object,MUIM_List_Select, MUIV_List_Select_All, MUIV_List_Select_Ask, &numSelected);
    return numSelected;
}

// These methods can be used as shortcuts for inserting objects into lists

template <typename Type> void CTMUI_List<Type>::insertTop(Type *entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Top);
}

template <typename Type> void CTMUI_List<Type>::insertTop(Type &entry) {
    DoMethod(object,MUIM_List_InsertSingle, &entry, MUIV_List_Insert_Top);
}

template <typename Type> void CTMUI_List<Type>::insertBottom(Type *entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Bottom);
}

template <typename Type> void CTMUI_List<Type>::insertBottom(Type &entry) {
    DoMethod(object,MUIM_List_InsertSingle, &entry, MUIV_List_Insert_Bottom);
}

template <typename Type> void CTMUI_List<Type>::insertSorted(Type *entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Sorted);
}

template <typename Type> void CTMUI_List<Type>::insertSorted(Type &entry) {
    DoMethod(object,MUIM_List_InsertSingle, &entry, MUIV_List_Insert_Sorted);
}

template <typename Type> void CTMUI_List<Type>::insertActive(Type *entry) {
    DoMethod(object,MUIM_List_InsertSingle, entry, MUIV_List_Insert_Active);
}

template <typename Type> void CTMUI_List<Type>::insertActive(Type &entry) {
    DoMethod(object,MUIM_List_InsertSingle, &entry, MUIV_List_Insert_Active);
}

template <typename Type> void CTMUI_List<Type>::insertSingle(Type &entry, LONG pos) {
    DoMethod(object,MUIM_List_InsertSingle, &entry, pos);
}

template <typename Type> LONG CTMUI_List<Type>::active() const {
    return (LONG) mGetAttr(MUIA_List_Active);
}

template <typename Type> void CTMUI_List<Type>::setActive(LONG value) {
    setAttr(MUIA_List_Active, (IPTR) value);
}

template <typename Type> BOOL CTMUI_List<Type>::autoVisible() const {
    return (BOOL) mGetAttr(MUIA_List_AutoVisible);
}

template <typename Type> void CTMUI_List<Type>::setAutoVisible(BOOL value) {
    setAttr(MUIA_List_AutoVisible, (IPTR) value);
}

template <typename Type> void CTMUI_List<Type>::setCompareHook(struct Hook *value) {
    setAttr(MUIA_List_CompareHook, (IPTR) value);
}

template <typename Type> void CTMUI_List<Type>::setConstructHook(struct Hook *value) {
    setAttr(MUIA_List_ConstructHook, (IPTR) value);
}

template <typename Type> void CTMUI_List<Type>::setDestructHook(struct Hook *value) {
    setAttr(MUIA_List_DestructHook, (IPTR) value);
}

template <typename Type> void CTMUI_List<Type>::setDisplayHook(struct Hook *value) {
    setAttr(MUIA_List_DisplayHook, (IPTR) value);
}

template <typename Type> BOOL CTMUI_List<Type>::dragSortable() const {
    return (BOOL) mGetAttr(MUIA_List_DragSortable);
}

template <typename Type> void CTMUI_List<Type>::setDragSortable(BOOL value) {
    setAttr(MUIA_List_DragSortable, (IPTR) value);
}

template <typename Type> LONG CTMUI_List<Type>::dropMark() const {
    return (LONG) mGetAttr(MUIA_List_DropMark);
}

template <typename Type> LONG CTMUI_List<Type>::entries() const {
    return (LONG) mGetAttr(MUIA_List_Entries);
}

template <typename Type> LONG CTMUI_List<Type>::first() const {
    return (LONG) mGetAttr(MUIA_List_First);
}

template <typename Type> std::string CTMUI_List<Type>::format() const {
    return (STRPTR) mGetAttr(MUIA_List_Format);
}

template <typename Type> void CTMUI_List<Type>::setFormat(std::string& value) {
    setAttr(MUIA_List_Format, (IPTR) value.c_str());
}

template <typename Type> LONG CTMUI_List<Type>::insertPosition() const {
    return (LONG) mGetAttr(MUIA_List_InsertPosition);
}

template <typename Type> void CTMUI_List<Type>::setMultiTestHook(struct Hook *value) {
    setAttr(MUIA_List_MultiTestHook, (IPTR) value);
}

template <typename Type> void CTMUI_List<Type>::setQuiet(BOOL value) {
    setAttr(MUIA_List_Quiet, (IPTR) value);
}

template <typename Type> BOOL CTMUI_List<Type>::showDropMarks() const {
    return (BOOL) mGetAttr(MUIA_List_ShowDropMarks);
}

template <typename Type> void CTMUI_List<Type>::setShowDropMarks(BOOL value) {
    setAttr(MUIA_List_ShowDropMarks, (IPTR) value);
}

template <typename Type> std::string CTMUI_List<Type>::title() const {
    return (char *) mGetAttr(MUIA_List_Title);
}

template <typename Type> void CTMUI_List<Type>::setTitle(std::string& value) {
    setAttr(MUIA_List_Title, (IPTR) value.c_str());
}

template <typename Type> LONG CTMUI_List<Type>::visible() const {
    return (LONG) mGetAttr(MUIA_List_Visible);
}

template <typename Type> IPTR CTMUI_List<Type>::clear() {
    return DoMethod(object,MUIM_List_Clear);;
}

template <typename Type> IPTR CTMUI_List<Type>::createImage(Object *obj, IPTR flags) {
    return DoMethod(object,MUIM_List_CreateImage, obj, flags);
}

template <typename Type> IPTR CTMUI_List<Type>::deleteImage(IPTR listimg) {
    return DoMethod(object,MUIM_List_DeleteImage, listimg);
}

template <typename Type> IPTR CTMUI_List<Type>::exchange(LONG pos1, LONG pos2) {
    return DoMethod(object,MUIM_List_Exchange, pos1, pos2);
}

template <typename Type> IPTR CTMUI_List<Type>::getEntry(LONG pos, Type **entry) {
    return DoMethod(object,MUIM_List_GetEntry, pos, entry);
}

template <typename Type> IPTR CTMUI_List<Type>::insert(Type **entries, LONG count, LONG pos) {
    return DoMethod(object,MUIM_List_Insert, entries, count, pos);
}

template <typename Type> IPTR CTMUI_List<Type>::insertSingle(Type *entry, LONG pos) {
    return DoMethod(object,MUIM_List_InsertSingle, entry, pos);
}

template <typename Type> IPTR CTMUI_List<Type>::jump(LONG pos) {
    return DoMethod(object,MUIM_List_Jump, pos);
}

template <typename Type> IPTR CTMUI_List<Type>::move(LONG from, LONG to) {
    return DoMethod(object,MUIM_List_Move, from, to);
}

template <typename Type> IPTR CTMUI_List<Type>::nextSelected(LONG *pos) {
    return DoMethod(object,MUIM_List_NextSelected, pos);
}

template <typename Type> IPTR CTMUI_List<Type>::redraw(LONG pos) {
    return DoMethod(object,MUIM_List_Redraw, pos);
}

template <typename Type> IPTR CTMUI_List<Type>::remove(LONG pos) {
    return DoMethod(object,MUIM_List_Remove, pos);
}

template <typename Type> IPTR CTMUI_List<Type>::select(LONG pos, LONG seltype, LONG *state) {
    return DoMethod(object,MUIM_List_Select, pos, seltype, state);
}

template <typename Type> IPTR CTMUI_List<Type>::sort() {
    return DoMethod(object,MUIM_List_Sort);
}

template <typename Type> IPTR CTMUI_List<Type>::testPos(LONG x, LONG y, struct MUI_List_TestPos_Result *res) {
    return DoMethod(object,MUIM_List_TestPos, x, y, res);
}
