#ifndef CMUI_VIRTGROUP_H
#define CMUI_VIRTGROUP_H

#include "CMUI_Group.h"

class CMUI_Virtgroup : public CMUI_Group {
public:
    CMUI_Virtgroup(Object * obj);
    CMUI_Virtgroup & operator=(Object * obj);

    LONG height() const;
    LONG left() const;
    void setLeft(LONG value);
    LONG top() const;
    void setTop(LONG value);
    LONG width() const;

protected:
    CMUI_Virtgroup();
    Class *registerClass() override;
};

#endif /* CMUI_VIRTGROUP_H */

