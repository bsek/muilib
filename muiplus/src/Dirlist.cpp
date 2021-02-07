#include "include/Dirlist.h"
#include "include/ZuneList.h"
#include "include/ZuneObject.h"

Zune::Dirlist::Dirlist(Object* obj)
: ZuneList() {
    object = obj;
}

Zune::Dirlist& Zune::Dirlist::operator=(Object* obj) {
    object = obj;
    return *this;
}

 void Zune::Dirlist::setAcceptPattern(std::string value)
{
    setAttr(MUIA_Dirlist_AcceptPattern, (IPTR) value.c_str());
}

std::string Zune::Dirlist::directory() const
{
	 return (STRPTR) mGetAttr(MUIA_Dirlist_Directory);
}

 void Zune::Dirlist::setDirectory(std::string value)
{
    setAttr(MUIA_Dirlist_Directory, (IPTR) value.c_str());
}

 void Zune::Dirlist::setDrawersOnly(BOOL value)
{
    setAttr(MUIA_Dirlist_DrawersOnly, (IPTR) value);
}

 void Zune::Dirlist::setFilesOnly(BOOL value)
{
    setAttr(MUIA_Dirlist_FilesOnly, (IPTR) value);
}

 void Zune::Dirlist::setFilterDrawers(BOOL value)
{
    setAttr(MUIA_Dirlist_FilterDrawers, (IPTR) value);
}

 void Zune::Dirlist::setFilterHook(struct Hook *value)
{
    setAttr(MUIA_Dirlist_FilterHook, (IPTR) value);
}

 void Zune::Dirlist::setMultiSelDirs(BOOL value)
{
    setAttr(MUIA_Dirlist_MultiSelDirs, (IPTR) value);
}

 LONG Zune::Dirlist::numBytes() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_NumBytes);
}

 LONG Zune::Dirlist::numDrawers() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_NumDrawers);
}

 LONG Zune::Dirlist::numFiles() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_NumFiles);
}

std::string Zune::Dirlist::path() const
{
	 return (STRPTR) mGetAttr(MUIA_Dirlist_Path);
}

 void Zune::Dirlist::setRejectIcons(BOOL value)
{
    setAttr(MUIA_Dirlist_RejectIcons, (IPTR) value);
}

 void Zune::Dirlist::setRejectPattern(std::string value)
{
    setAttr(MUIA_Dirlist_RejectPattern, (IPTR) value.c_str());
}

 void Zune::Dirlist::setSortDirs(LONG value)
{
    setAttr(MUIA_Dirlist_SortDirs, (IPTR) value);
}

 void Zune::Dirlist::setSortHighLow(BOOL value)
{
    setAttr(MUIA_Dirlist_SortHighLow, (IPTR) value);
}

 void Zune::Dirlist::setSortType(LONG value)
{
    setAttr(MUIA_Dirlist_SortType, (IPTR) value);
}

 LONG Zune::Dirlist::status() const
{
	 return (LONG) mGetAttr(MUIA_Dirlist_Status);
}

 IPTR Zune::Dirlist::reRead()
{
	return DoMethod(object, MUIM_Dirlist_ReRead);
}

Zune::Dirlist::Dirlist() {}
