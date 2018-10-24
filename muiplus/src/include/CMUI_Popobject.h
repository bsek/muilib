#ifndef CMUI_POPOBJECT_H
#define CMUI_POPOBJECT_H

#include "CMUI_Popstring.h"

class CMUI_Popobject : public CMUI_Popstring {
public:
    CMUI_Popobject(struct Hook * objStrHook, struct Hook * strObjHook, BOOL follow, BOOL light, Object * object,
            BOOL isVolatile, struct Hook * windowHook);
    CMUI_Popobject(Object * obj);
    CMUI_Popobject & operator=(Object * obj);

    BOOL follow() const;
    void setFollow(BOOL value);
    BOOL light() const;
    void setLight(BOOL value);
    Object * popObject() const;
    struct Hook * objStrHook() const;
    void setObjStrHook(struct Hook *value);
    struct Hook * strObjHook() const;
    void setStrObjHook(struct Hook *value);
    BOOL getVolatile() const;
    void setVolatile(BOOL value);
    struct Hook * windowHook() const;
    void SetWindowHook(struct Hook * value);

protected:
    CMUI_Popobject();
};


#endif /* CMUI_POPOBJECT_H */

