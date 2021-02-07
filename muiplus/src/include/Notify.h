#ifndef NOTIFY_H
#define	NOTIFY_H

#include "ZuneObject.h"
#include <initializer_list>

namespace Zune {
    class Notify : public ZuneObject {
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
        Object * parent() const;
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
        IPTR multiSet(std::vector<IPTR> obj);
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
    protected:
        Notify();
    };
}

template<typename... Args>
IPTR Zune::Notify::mCallHook(struct Hook *Hook, Args... params) {
    auto p = createTagListFromVector<IPTR>({params...}, 2);
    p.get()[0] = MUIM_CallHook;
    p.get()[1] = (IPTR)Hook;

    return DoMethodA(object, (Msg) p.get());
}

template<typename... Args>
IPTR Zune::Notify::noNotifySet(IPTR attr, char *format, Args... val) {
    auto p = createTagListFromVector<IPTR>({val...}, 3);
    p.get()[0] = MUIM_NoNotifySet;
    p.get()[1] = attr;
    p.get()[2] = (IPTR)format;

    return DoMethodA(object, (Msg) p.get());
}

template<typename... Args>
IPTR Zune::Notify::setAsString(IPTR attr, char *format, Args... val) {
    auto p = createTagListFromVector<IPTR>({val...}, 3);
    p.get()[0] = MUIM_SetAsString;
    p.get()[1] = attr;
    p.get()[2] = (IPTR)format;

    return DoMethodA(object, (Msg) p.get());
}

template<typename... Args>
IPTR Zune::Notify::notify(Args... params) {
//    auto args = createTagListFromVector<IPTR>({params...}, 0);

    std::vector<IPTR> list = {params...};
//    list.back(TAG_DONE);

    int size = list.size();

    IPTR * args = new IPTR[size + 1];

    int i = 1;
    for (auto val : list) {
        args[i++] = val;
    }

    args[0] = MUIM_Notify;

    auto retVal = DoMethodA(object, (Msg)(args));

    delete args;
    return retVal;

/*

    AROS_SLOWSTACKTAGS_PRE_AS(args.get(), IPTR)
    retval = (IPTR)DoMethod(object, MUIM_Notify, (IPTR)AROS_SLOWSTACKTAGS_ARG(params), TAG_DONE);
    AROS_SLOWSTACKTAGS_POST

    return retval;
*/
//    const IPTR args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };
/*    struct opUpdate msg;
    msg.MethodID = MUIM_Notify;
    msg.opu_AttrList = (struct TagItem *) &args;
    msg.opu_Flags = 0;
    msg.opu_GInfo = nullptr;

    

//    auto p = createTagListFromVector<IPTR>({params...}, 1);
//    p.get()[0] = MUIM_Notify;

    return DoMethodA(object, (Msg)(&msg));*/
//    return 0;
}


#endif	/* NOTIFY_H */

