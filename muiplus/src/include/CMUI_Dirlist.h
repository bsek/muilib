#ifndef CMUI_DIRLIST_H
#define	CMUI_DIRLIST_H

#include "CMUI_List.h"

class CMUI_Dirlist : public CMUI_List {
public:
    CMUI_Dirlist(Object * obj);
    CMUI_Dirlist & operator=(Object * obj);

    void setAcceptPattern(std::string value);
    std::string directory() const;
    void setDirectory(std::string value);
    void setDrawersOnly(BOOL value);
    void setFilesOnly(BOOL value);
    void setFilterDrawers(BOOL value);
    void setFilterHook(struct Hook *value);
    void setMultiSelDirs(BOOL value);
    LONG numBytes() const;
    LONG numDrawers() const;
    LONG numFiles() const;
    std::string path() const;
    void setRejectIcons(BOOL value);
    void setRejectPattern(std::string value);
    void setSortDirs(LONG value);
    void setSortHighLow(BOOL value);
    void setSortType(LONG value);
    LONG status() const;
    IPTR reRead();
protected:
    CMUI_Dirlist();
};

#endif	/* CMUI_DIRLIST_H */

