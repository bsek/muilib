#ifndef NOTIFY_H
#define    NOTIFY_H

#include "RootClass.h"
#include <initializer_list>

namespace Zune {
    class Notify : public RootClass {
    public:
        Object *mApplicationObject() const;

        IPTR appMessage() const;

        LONG helpLine() const;

        void setHelpLine(LONG value);

        STRPTR helpNode() const;

        void setHelpNode(STRPTR value);

        void setNoNotify(BOOL value);

        IPTR objectID() const;

        void setObjectID(IPTR value);

        Object *parent() const;

        LONG revision() const;

        IPTR userData() const;

        void setUserData(IPTR value);

        LONG version() const;

        template<typename... Args>
        IPTR mCallHook(struct Hook *Hook, Args... params);

        IPTR exportDataspace(Object *dataspace);

        IPTR findUData(IPTR udata);

        IPTR getConfigItem(IPTR id, IPTR *storage);

        IPTR getUData(IPTR udata, IPTR attr, IPTR *storage);

        IPTR importDataspace(Object *dataspace);

        IPTR killNotify(IPTR TrigAttr);

        IPTR killNotifyObj(IPTR TrigAttr, Object *dest);

        template<typename... Args>
        IPTR multiSet(Args... obj);

        template<typename... Args>
        IPTR noNotifySet(IPTR attr, char *format, Args... val);

        template<typename... Args>
        IPTR notify(Args... params);

        IPTR set(IPTR attr, IPTR val);

        template<typename... Args>
        IPTR setAsString(IPTR attr, char *format, Args... val);

        IPTR setUData(IPTR udata, IPTR attr, IPTR val);

        IPTR setUDataOnce(IPTR udata, IPTR attr, IPTR val);

        IPTR writeLong(IPTR val, IPTR *memory);

        IPTR writeString(char *str, char *memory);

        Notify();

        Notify(Object* obj);
    };
}

template <typename... Args>
IPTR Zune::Notify::multiSet(Args... obj) {
    std::initializer_list<IPTR> list = {obj...};
    auto size = list.size();

    IPTR args[size + 1];
    int i = 1;
    for (auto val : list) {
        args[i++] = val;
    }
    args[0] = MUIM_MultiSet;

    return DoMethodA(object, (Msg) args);
}

template<typename... Args>
IPTR Zune::Notify::mCallHook(struct Hook *Hook, Args... params) {
    std::initializer_list<IPTR> list = {params...};
    auto size = list.size();

    IPTR args[size + 1];
    int i = 1;
    for (auto val : list) {
        args[i++] = val;
    }
    args[0] = MUIM_CallHook;

    return DoMethodA(object, (Msg) args);
}

template<typename... Args>
IPTR Zune::Notify::noNotifySet(IPTR attr, char *format, Args... val) {
    std::initializer_list<IPTR> list = {val...};

    IPTR size = list.size();
    IPTR args[size + 3];

    int i = 3;
    for (auto val : list) {
        args[i++] = val;
    }
    args[0] = MUIM_NoNotifySet;
    args[1] = attr;
    args[2] = reinterpret_cast<IPTR>(format);

    return DoMethodA(object, (Msg) (args));
}

template<typename... Args>
IPTR Zune::Notify::setAsString(IPTR attr, char *format, Args... val) {
    std::initializer_list<IPTR> list = {val...};

    IPTR size = list.size();
    IPTR args[size + 3];

    int i = 3;
    for (auto val : list) {
        args[i++] = val;
    }
    args[0] = MUIM_SetAsString;
    args[1] = attr;
    args[2] = reinterpret_cast<IPTR>(format);

    return DoMethodA(object, (Msg) (args));
}

template<typename... Args>
IPTR Zune::Notify::notify(Args... params) {
    std::initializer_list<IPTR> list = {params...};

    IPTR size = list.size();
    IPTR args[size + 1];

    int i = 1;
    for (auto val : list) {
        args[i++] = val;
    }
    args[0] = MUIM_Notify;

    return DoMethodA(object, (Msg) (args));
}

#endif    /* NOTIFY_H */

