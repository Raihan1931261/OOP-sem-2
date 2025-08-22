#include "Person.h"


PersonList deepCopyPersonList(PersonList pl) {
    PersonList out;
    // Treat any non-sensical input as empty.
    if (pl.numPeople <= 0 || pl.people == nullptr) {
        out.people = nullptr;
        out.numPeople = 0;
        return out;
    }

    out.numPeople = pl.numPeople;
    out.people = new Person[out.numPeople];
    for (int i = 0; i < out.numPeople; ++i) {
        out.people[i].name = pl.people[i].name;
        out.people[i].age  = pl.people[i].age;
    }
    return out;
}
