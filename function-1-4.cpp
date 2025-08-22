#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList out;
    if (pl.numPeople <= 0 || pl.people == nullptr) {
        out.people = nullptr;
        out.numPeople = 0;
        return out;
    }
    out.people = pl.people;      // alias the same array
    out.numPeople = pl.numPeople;
    return out;
}
