#include "include/CMUI_Dirlist.h"

CMUI_Dirlist::CMUI_Dirlist(Object* obj)
: CMUI_List() {
    object = obj;
}

CMUI_Dirlist& CMUI_Dirlist::operator=(Object* obj) {
    object = obj;
    return *this;
}

 void CMUI_Dirlist::setAcceptPattern(std::string value)
{
    setAttr(MUIA_Dirlist_AcceptPattern, (IPTR) value.c_str());
}

std::string CMUI_Dirlist::directory() const
{
	 return (STRPTR) mGetAttr(MUIA_Dirlist_Directory);
}

 void CMUI_Dirlist::setDirectory(std::string value)
{
    setAttr(MUIA_Dirlist_Directory, (IPTR) value.c_str());
}

 void CMUI_Dirlist::setDrawersOnly(BOOL value)
{
    setAttr(MUIA_Dirlist_DrawersOnly, (IPTR) value);
}

 void CMUI_Dirlist::setFilesOnly(BOOL value)
{
    setAttr(MUIA_Dirlist_FilesOnly, (IPTR) value);
}

 void CMUI_Dirlist::setFilterDrawers(BOOL value)
{
    setAttr(MUIA_Dirlist_FilterDrawers, (IPTR) value);
}

 void CMUI_Dirlist::setFilterHook(struct Hook *value)
{
    setAttr(MUIA_Dirlist_FilterHook, (IPTR) value);
}

 void CMUI_Dirlist::setMultiSelDirs(BOOL value)
{
    setAttr(MUIA_Dirlist_MultiSelDirs, (IPTR) value);
}

 LONG CMUI_Dirlist::numBytes() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_NumBytes);
}

 LONG CMUI_Dirlist::numDrawers() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_NumDrawers);
}

 LONG CMUI_Dirlist::numFiles() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_NumFiles);
}

std::string CMUI_Dirlist::path() const
{
	 return (STRPTR) mGetAttr(MUIA_Dirlist_Path);
}

 void CMUI_Dirlist::setRejectIcons(BOOL value)
{
    setAttr(MUIA_Dirlist_RejectIcons, (IPTR) value);
}

 void CMUI_Dirlist::setRejectPattern(std::string value)
{
    setAttr(MUIA_Dirlist_RejectPattern, (IPTR) value.c_str());
}

 void CMUI_Dirlist::setSortDirs(LONG value)
{
    setAttr(MUIA_Dirlist_SortDirs, (IPTR) value);
}

 void CMUI_Dirlist::setSortHighLow(BOOL value)
{
    setAttr(MUIA_Dirlist_SortHighLow, (IPTR) value);
}

 void CMUI_Dirlist::setSortType(LONG value)
{
    setAttr(MUIA_Dirlist_SortType, (IPTR) value);
}

 LONG CMUI_Dirlist::status() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_Status);
}

 IPTR CMUI_Dirlist::reRead()
{
	return DoMethod(object, MUIM_Dirlist_ReRead);
}

CMUI_Dirlist::CMUI_Dirlist() {}
