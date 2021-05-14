
#include "include/Graph.h"

Zune::Graph::Graph() = default;

Zune::Graph::Graph(Object *obj) {
    object = obj;
}

void Zune::Graph::setSourceAttrib(struct MUIP_Graph_SetSourceAttrib *msg) {
    DoMethod(object, MUIM_Graph_SetSourceAttrib, msg);
}

IPTR Zune::Graph::getSourceHandle(struct MUIP_Graph_GetSourceHandle *msg) {
    return DoMethod(object, MUIM_Graph_GetSourceHandle, msg);
}

void Zune::Graph::reset() {
    DoMethod(object, MUIM_Graph_Reset);
}

void Zune::Graph::timer() {
    DoMethod(object, MUIM_Graph_Timer);
}

void Zune::Graph::setInfoText(std::string& infoText) {
    setOrStore(MUIA_Graph_InfoText, reinterpret_cast<IPTR>(infoText.c_str()));
}

void Zune::Graph::setEntryCount(IPTR count) {
    setOrStore(MUIA_Graph_EntryCount, count);
}

IPTR Zune::Graph::entryCount() {
    return mGetAttr(MUIA_Graph_EntryCount);
}

void Zune::Graph::setAggregate(BOOL aggregate) {
    setOrStore(MUIA_Graph_Aggregate, aggregate);
}

void Zune::Graph::setPeriodCeiling(IPTR ms) {
    setOrStore(MUIA_Graph_PeriodCeiling, ms);
}

void Zune::Graph::setPeriodStep(IPTR ms) {
    setOrStore(MUIA_Graph_PeriodStep, ms);
}

void Zune::Graph::setPeriodInterval(IPTR ms) {
    setOrStore(MUIA_Graph_PeriodInterval, ms);
}

IPTR Zune::Graph::periodInterval() {
    return mGetAttr(MUIA_Graph_PeriodInterval);
}

void Zune::Graph::setValueCeiling(IPTR value) {
    setOrStore(MUIA_Graph_ValueCeiling, value);
}

IPTR Zune::Graph::valueCeiling() {
    return mGetAttr(MUIA_Graph_ValueCeiling);
}

void Zune::Graph::setValueStep(IPTR value) {
    setOrStore(MUIA_Graph_ValueStep, value);
}

void Zune::Graph::build() {
    RootClass::createObject(MUIC_Graph);
}
