#include <string>
#include <cstring>
#include "Cycle.h"

Zune::Cycle& ZuneObject::Cycle::getClass() {
    return companion;
}

void ZuneObject::Cycle::create() {
    Object *object = MUI_MakeObject(MUIO_Cycle, (IPTR) label.c_str(), (IPTR) entries);
    companion.setObject(object);
}

ZuneObject::Cycle::Cycle(std::string &label, std::initializer_list<char*> &entry_list) : label(label) {
    this->setEntries(entry_list);
}

ZuneObject::Cycle::~Cycle() {
    delete [] entries;
    std::cerr << "Deallocating" << std::endl;
}

ZuneObject::Cycle::Cycle() {}

void ZuneObject::Cycle::setEntries(std::initializer_list<char *> &entry_list) {
    entries = new char*[entry_list.size() + 1];
    int i = 0;
    for (auto val : entry_list) {
        entries[i] = new char[strlen(val) + 1];
        strcpy(entries[i], val);
        i++;
    }
    entries[i] = NULL;

    if (companion.getObject() != nullptr) {
        companion.setEntries(entries);
    }
}

void ZuneObject::Cycle::setActive(BOOL value) {
    companion.setActive((IPTR) value);
}

BOOL ZuneObject::Cycle::active() {
    return (BOOL) companion.active();
}

Object *ZuneObject::Cycle::getObject() {
    return companion.getObject();
}

void ZuneObject::Cycle::onEvent() {
    std::cout << "Event triggered" << std::endl;
}
