#include "include/Process.h"

void Zune::Process::kill() {
    DoMethod(object, MUIM_Process_Kill);
}

void Zune::Process::launch() {
    DoMethod(object, MUIM_Process_Launch);
}

void Zune::Process::process() {
    DoMethod(object, MUIM_Process_Process);
}

void Zune::Process::signal() {
    DoMethod(object, MUIM_Process_Signal);
}

void Zune::Process::setAutoLaunch(ULONG value) {
    configmap[MUIA_Process_AutoLaunch ] = static_cast<IPTR>(value);
}

void Zune::Process::setName(ULONG value) {
    configmap[MUIA_Process_Name ] = static_cast<IPTR>(value);
}

void Zune::Process::setPriority(ULONG value) {
    configmap[MUIA_Process_Priority] = static_cast<IPTR>(value);
}

void Zune::Process::setSourceClass(ULONG value) {
    configmap[MUIA_Process_SourceClass] = static_cast<IPTR>(value);
}

void Zune::Process::setSourceObject(ULONG value) {
    configmap[MUIA_Process_SourceObject] = static_cast<IPTR>(value);
}

void Zune::Process::setStackSize(ULONG value) {
    configmap[MUIA_Process_StackSize] = static_cast<IPTR>(value);
}

void Zune::Process::setTask(ULONG value) {
    configmap[MUIA_Process_Task] = static_cast<IPTR>(value);
}

Zune::Process::Process(Object *obj) {
    object = obj;
}

void Zune::Process::build() {
    RootClass::createObject(MUIC_Process);
}

Zune::Process::Process() = default;