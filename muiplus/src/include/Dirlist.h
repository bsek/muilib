#ifndef DIRLIST_H
#define    DIRLIST_H

#include "List.h"
#include "RootClass.h"

namespace Zune {

    template <typename T>
    class Dirlist : public Zune::List<T> {
    public:
        explicit Dirlist(Object *obj);

        void setAcceptPattern(std::string &value);

        std::string directory() const;

        void setDirectory(std::string &value);

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

        void setRejectPattern(std::string &value);

        void setSortDirs(LONG value);

        void setSortHighLow(BOOL value);

        void setSortType(LONG value);

        LONG status() const;

        void reRead();

        void build() override;

        Dirlist();
    };
}
template<typename Type>
void Zune::Dirlist<Type>::setAcceptPattern(std::string &value) {
    RootClass::setOrStore(MUIA_Dirlist_AcceptPattern, reinterpret_cast<IPTR>(value.c_str()));
}

template<typename Type>
std::string Zune::Dirlist<Type>::directory() const {
    return reinterpret_cast<STRPTR>(RootClass::mGetAttr(MUIA_Dirlist_Directory));
}

template<typename Type>
void Zune::Dirlist<Type>::setDirectory(std::string &value) {
    RootClass::setOrStore(MUIA_Dirlist_Directory, reinterpret_cast<IPTR>(value.c_str()));
}

template<typename Type>
void Zune::Dirlist<Type>::setDrawersOnly(BOOL value) {
    RootClass::setOrStore(MUIA_Dirlist_DrawersOnly, static_cast<IPTR>(value));
}

template<typename Type>
void Zune::Dirlist<Type>::setFilesOnly(BOOL value) {
    RootClass::setOrStore(MUIA_Dirlist_FilesOnly, static_cast<IPTR>(value));
}

template<typename Type>
void Zune::Dirlist<Type>::setFilterDrawers(BOOL value) {
    RootClass::setOrStore(MUIA_Dirlist_FilterDrawers, static_cast<IPTR>(value));
}

template<typename Type>
void Zune::Dirlist<Type>::setFilterHook(struct Hook *value) {
    RootClass::setOrStore(MUIA_Dirlist_FilterHook, reinterpret_cast<IPTR>(value));
}

template<typename Type>
void Zune::Dirlist<Type>::setMultiSelDirs(BOOL value) {
    RootClass::setOrStore(MUIA_Dirlist_MultiSelDirs, static_cast<IPTR>(value));
}

template<typename Type>
LONG Zune::Dirlist<Type>::numBytes() const {
    return static_cast<LONG>(RootClass::mGetAttr(MUIA_Dirlist_NumBytes));
}

template<typename Type>
LONG Zune::Dirlist<Type>::numDrawers() const {
    return static_cast<LONG>(RootClass::mGetAttr(MUIA_Dirlist_NumDrawers));
}

template<typename Type>
LONG Zune::Dirlist<Type>::numFiles() const {
    return static_cast<LONG>(RootClass::mGetAttr(MUIA_Dirlist_NumFiles));
}

template<typename Type>
std::string Zune::Dirlist<Type>::path() const {
    return reinterpret_cast<STRPTR>(RootClass::mGetAttr(MUIA_Dirlist_Path));
}

template<typename Type>
void Zune::Dirlist<Type>::setRejectIcons(BOOL value) {
    RootClass::setOrStore(MUIA_Dirlist_RejectIcons, static_cast<IPTR>(value));
}

template<typename Type>
void Zune::Dirlist<Type>::setRejectPattern(std::string &value) {
    RootClass::setOrStore(MUIA_Dirlist_RejectPattern, reinterpret_cast<IPTR>(value.c_str()));
}

template<typename Type>
void Zune::Dirlist<Type>::setSortDirs(LONG value) {
    RootClass::setOrStore(MUIA_Dirlist_SortDirs, static_cast<IPTR>(value));
}

template<typename Type>
void Zune::Dirlist<Type>::setSortHighLow(BOOL value) {
    RootClass::setOrStore(MUIA_Dirlist_SortHighLow, static_cast<IPTR>(value));
}

template<typename Type>
void Zune::Dirlist<Type>::setSortType(LONG value) {
    RootClass::setOrStore(MUIA_Dirlist_SortType, static_cast<IPTR>(value));
}

template<typename Type>
LONG Zune::Dirlist<Type>::status() const {
    return static_cast<LONG>(RootClass::mGetAttr(MUIA_Dirlist_Status));
}

template<typename Type>
void Zune::Dirlist<Type>::reRead() {
    DoMethod(RootClass::object, MUIM_Dirlist_ReRead);
}

template<typename Type>
void Zune::Dirlist<Type>::build() {
    RootClass::createObject(MUIC_Dirlist);
}

template<typename Type>
Zune::Dirlist<Type>::Dirlist(Object *obj) {
    RootClass::object = obj;
}

template<typename Type>
Zune::Dirlist<Type>::Dirlist() = default;

#endif    /* DIRLIST_H */

