#ifndef DIRLIST_H
#define	DIRLIST_H

#include "ZuneList.h"
#include "ZuneObject.h"

namespace Zune {

    class Dirlist : public ZuneList<std::string> {
    public:
        Dirlist(Object * obj);
        Dirlist & operator=(Object * obj);

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
        Dirlist();
    };
}

#endif	/* DIRLIST_H */

