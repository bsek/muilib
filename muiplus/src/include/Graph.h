#ifndef GRAPH_H
#define GRAPH_H

#include "Area.h"
#include <zune/graph.h>

namespace Zune {
    class Graph : public Zune::Area {
    public:
        Graph();

        Graph(Object* obj);

        void setSourceAttrib(struct MUIP_Graph_SetSourceAttrib *msg);

        IPTR getSourceHandle(struct MUIP_Graph_GetSourceHandle *msg);

        void reset();

        void timer();

        void setInfoText(std::string& infoText);

        void setEntryCount(IPTR count);

        IPTR entryCount();

        void setAggregate(BOOL aggregate);

        void setPeriodCeiling(IPTR ms);

        void setPeriodStep(IPTR ms);

        void setPeriodInterval(IPTR ms);

        IPTR periodInterval();

        void setValueCeiling(IPTR value);

        IPTR valueCeiling();

        void setValueStep(IPTR value);

        void build() override;
    };
}

#endif //GRAPH_H
