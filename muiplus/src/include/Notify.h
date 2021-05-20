#ifndef NOTIFY_H
#define    NOTIFY_H

#include "RootClass.h"
#include <workbench/workbench.h>
#include <initializer_list>

namespace Zune {
    class Notify : public RootClass {
    public:
        Object *applicationObject() const;

        struct AppMessage * appMessage() const;

        LONG helpLine() const;

        void setHelpLine(LONG value);

        std::string helpNode() const;

        void setHelpNode(std::string &value);

        void setNoNotify(BOOL value);

        ULONG objectID() const;

        void setObjectID(ULONG value);

        Object *parent() const;

        LONG revision() const;

        ULONG userData() const;

        void setUserData(ULONG value);

        LONG version() const;

        template<typename... Args>
        IPTR mCallHook(struct Hook *Hook, Args... params);

        IPTR exportDataspace(Object *dataspace);

        IPTR findUData(IPTR udata);

        IPTR getConfigItem(ULONG id, IPTR *storage);

        IPTR getUData(ULONG udata, ULONG attr, IPTR *storage);

        IPTR importDataspace(Object *dataspace);

        IPTR killNotify(ULONG TrigAttr);

        IPTR killNotifyObj(ULONG TrigAttr, Object *dest);

        template<typename... Args>
        IPTR multiSet(Args... obj);

        template<typename... Args>
        IPTR noNotifySet(ULONG attr, Args... val);

        template<typename... Args>
        IPTR notify(Args... params);

        IPTR set(ULONG attr, IPTR val);

        template<typename... Args>
        IPTR setAsString(ULONG attr, char *format, Args... val);

        IPTR setUData(IPTR udata, ULONG attr, IPTR val);

        IPTR setUDataOnce(IPTR udata, ULONG attr, IPTR val);

        IPTR writeLong(ULONG val, ULONG *memory);

        IPTR writeString(char *str, char *memory);

        Notify();

        explicit Notify(Object* obj);
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
IPTR Zune::Notify::noNotifySet(ULONG attr, Args... val) {
    std::initializer_list<IPTR> list = {val...};

    IPTR size = list.size();
    IPTR args[size + 3];

    int i = 2;
    for (auto val : list) {
        args[i++] = val;
    }
    args[0] = MUIM_NoNotifySet;
    args[1] = static_cast<IPTR>(attr);

    return DoMethodA(object, (Msg) (args));
}

template<typename... Args>
IPTR Zune::Notify::setAsString(ULONG attr, char *format, Args... val) {
    std::initializer_list<IPTR> list = {val...};

    IPTR size = list.size();
    IPTR args[size + 3];

    int i = 3;
    for (auto val : list) {
        args[i++] = val;
    }
    args[0] = MUIM_SetAsString;
    args[1] = static_cast<IPTR>(attr);
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

