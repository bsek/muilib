#ifndef CHECKMARK_H
#define	CHECKMARK_H

#include <string>
#include "Image.h"
#include "ZuneObject.h"

namespace Zune {
    class Checkmark : public Image {
    public:
        Checkmark(Object * obj);
        Checkmark(std::string label);
        Checkmark & operator=(Object * obj);

    protected:
        Checkmark();
    };
}


#endif

