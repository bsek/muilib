#include "include/Dirlist.h"

Dirlist::Dirlist(Object* obj)
: List() {
    object = obj;
}

Dirlist& Dirlist::operator=(Object* obj) {
    object = obj;
    return *this;
}

 void Dirlist::setAcceptPattern(std::string value)
{
    setAttr(MUIA_Dirlist_AcceptPattern, (IPTR) value.c_str());
}

std::string Dirlist::directory() const
{
	 return (STRPTR) mGetAttr(MUIA_Dirlist_Directory);
}

 void Dirlist::setDirectory(std::string value)
{
    setAttr(MUIA_Dirlist_Directory, (IPTR) value.c_str());
}

 void Dirlist::setDrawersOnly(BOOL value)
{
    setAttr(MUIA_Dirlist_DrawersOnly, (IPTR) value);
}

 void Dirlist::setFilesOnly(BOOL value)
{
    setAttr(MUIA_Dirlist_FilesOnly, (IPTR) value);
}

 void Dirlist::setFilterDrawers(BOOL value)
{
    setAttr(MUIA_Dirlist_FilterDrawers, (IPTR) value);
}

 void Dirlist::setFilterHook(struct Hook *value)
{
    setAttr(MUIA_Dirlist_FilterHook, (IPTR) value);
}

 void Dirlist::setMultiSelDirs(BOOL value)
{
    setAttr(MUIA_Dirlist_MultiSelDirs, (IPTR) value);
}

 LONG Dirlist::numBytes() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_NumBytes);
}

 LONG Dirlist::numDrawers() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_NumDrawers);
}

 LONG Dirlist::numFiles() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_NumFiles);
}

std::string Dirlist::path() const
{
	 return (STRPTR) mGetAttr(MUIA_Dirlist_Path);
}

 void Dirlist::setRejectIcons(BOOL value)
{
    setAttr(MUIA_Dirlist_RejectIcons, (IPTR) value);
}

 void Dirlist::setRejectPattern(std::string value)
{
    setAttr(MUIA_Dirlist_RejectPattern, (IPTR) value.c_str());
}

 void Dirlist::setSortDirs(LONG value)
{
    setAttr(MUIA_Dirlist_SortDirs, (IPTR) value);
}

 void Dirlist::setSortHighLow(BOOL value)
{
    setAttr(MUIA_Dirlist_SortHighLow, (IPTR) value);
}

 void Dirlist::setSortType(LONG value)
{
    setAttr(MUIA_Dirlist_SortType, (IPTR) value);
}

 LONG Dirlist::status() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_Status);
}

 IPTR Dirlist::reRead()
{
	return DoMethod(object, MUIM_Dirlist_ReRead);
}

Dirlist::Dirlist() {}
