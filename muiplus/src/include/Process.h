#ifndef PROCESS_H
#define PROCESS_H

#include "Semaphore.h"

namespace Zune {
    class Process : public Zune::Semaphore {
    public:
        Process();

        Process(Object *obj);

        void kill();

        void launch();

        void process();

        void signal();

        void setAutoLaunch(ULONG value);

        void setName(ULONG value);

        void setPriority(ULONG value);

        void setSourceClass(ULONG value);

        void setSourceObject(ULONG value);

        void setStackSize(ULONG value);

        void setTask(ULONG value);

        void build() override;
    };
}


#endif //PROCESS_H
