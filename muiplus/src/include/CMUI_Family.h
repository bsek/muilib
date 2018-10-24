#ifndef CMUI_FAMILY_H
#define	CMUI_FAMILY_H

#include "CMUI_Notify.h"

class CMUI_Family : public CMUI_Notify
{
public:
	struct MinList * list() const;
	IPTR addHead(Object *obj);
	IPTR addTail(Object *obj);
	IPTR insert(Object *obj, Object *pred);
	IPTR remove(Object *obj);
	IPTR Sort (std::initializer_list<Object> obj);
	IPTR transfer(Object *family);
protected:
	CMUI_Family();
};



#endif

